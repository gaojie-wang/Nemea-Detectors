﻿**************************** HostStatsNemea module ****************************

Table of Contents
=================

	1. Module description
	2. How it works
	3. How to use

1. Module description
=====================

HostStatsNemea module calculates statistics about network traffic of each 
individual host (IP address) in the network. The statistics are searched 
for suspicious behavior using a simple rule set. This suspicious behavior 
is stored in a log file and send on output module interface.

Currently there are rules for detection of hosts scanning network, DoS attackers
and victims, SSH bruteforce and DNS amplification.

Module can operate in two different modes - online and offline. The online mode
is used for analysis of the current network traffic in real time. On the other
hand, the offline mode is used for analysis of the already captured network 
traffic. By default, this module is in the online mode. To enable offline mode 
use option "-F".

Input interface:    1 
    (port-flowdir = 0: "<COLLECTOR_FLOW>,DIRECTION_FLAGS")
    (port-flowdir = 1: "<COLLECTOR_FLOW>")
    Note: port-flowdir is a parameter in configuration file ("hoststats.conf")

Output interface:   1 ("EVENT_TYPE,TIME_FIRST,TIME_LAST,SRC_IP,DST_IP,SRC_PORT,
                        DST_PORT,PROTOCOL,EVENT_SCALE,NOTE")(more details below)
Output: log file with detected events

Note: DIRECTION_FLAGS are used to determine the type of flow (request, response,
single flow, not recognize). This UniREC item is generated by FlowDirection
module (recommended) or DedupAggregator module (not implemented yet).

The content of items of the output interface:
Some items may not be filled and these items are set to "zero" value such
as "0.0.0.0" for IPs and "0" for others.
	- EVENT_TYPE - a number of detected event (see "fields" file in the unirec 
                   folder)
	- TIME_FIRST - a time of the first occurrence in the reporting period
	- TIME_LAST - a time of the last occurrence in the reporting period
	- EVENT_SCALE - a intensity of event
	- other items have usual meaning

2. How it works
===============

The module collect global and specific statistics about network traffic of each
IP address. Global statistics means all incoming/outgoing flows/packet/bytes,
incoming/outgoing flows with SYN/ACK/FIN/RST/PSH/URG, the approximate number of
addresses this address communicated with. Some of these statistics are also 
extended by the flow type (e.g. in request flows, in response flows etc.). 
The entire structure of the record (hosts_record_t) is in the source file 
“src/hoststats.h”. Specific statistics (subprofiles) are created according 
to the communication protocol (e.g. SSH, DNS) and the structure of record 
depends on each subprofile. Specific statistics (subprofiles) are available
from the global statistics of each IP address that are stored in fast hash
table.

In ONLINE mode the module consists of two basic threads – update and checking.
    The checking thread periodically checks the statistics data in the table 
by defined period. When a statistic record is too long in the table (active
timeout) or it wasn't updated during specific time (inactive timeout), record is
searched for suspicious behavior using the simple rule set and then removed.
Period and active/inactive timeout can be set in the configuration file.
    The update thread receives data from the TRAP and updates the global
statistics and statistics in active subprofiles.

In OFFLINE mode the module "simulates" the behavior of online mode and it does
not use separate threads. This module receives data from the TRAP and updates 
the statistic. At specified time suspend receiving and start analysis of the 
statistics data (same way as in the online mode) in the table. The records are 
directly removed. When analysis is complete data reading is restored. This 
activity is repeated until the input is ended.


3. How to use
=============

I) Edit the configuration file “{nemea}/etc/hoststats.conf” and especially 
   the line "detection-log" with the folder path to save the event log. If you 
   have your own configuration file, you can use parameter "-c file" to load it.
   Line "table-size" should be edited too.

II) If port-flowdir = 0 (parameter in "hoststats.conf") then use FlowDirection
   (recommended) or DedupAggregator (not ready yet) output as an input for this 
   module. Example:  
      ./flowdirection -i <trap_interface> -u "<COLLECTOR_FLOW>"

   If port-flowdir = 1 then extra module is not required.

III) Run module
    ./hoststatsnemea -i <trap_interface>

Example:
    Run this module:
    ./hoststatsnemea -i "tt;localhost,12346;12347,5"
 
    Run flowdirection module (only if port-flowdir = 0):
    ./flowdirection -i "tt;localhost,12345;12346,5" -u "<COLLECTOR_FLOW>"