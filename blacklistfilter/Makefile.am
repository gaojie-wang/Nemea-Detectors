bin_PROGRAMS=ipblacklistfilter urlblacklistfilter

#dnsblacklistfilter_SOURCES=dnsblacklistfilter.cpp \
#			dnsblacklistfilter.h fields.c fields.h
#dnsblacklistfilter_LDADD=-lpthread -ltrap -lidn -lunirec -lnemea-common
#dnsblacklistfilter_CFLAGS=-std=c99
#dnsblacklistfilter_CXXFLAGS=-std=c++98 -Wno-write-strings

ipblacklistfilter_SOURCES=ipblacklistfilter.cpp \
			ipblacklistfilter.h \
			ipdetect/patternstrings.h \
			blacklist_watcher.c \
			blacklist_watcher.h \
			fields.c fields.h
ipblacklistfilter_LDADD=-lpthread -ltrap -lunirec -lnemea-common
ipblacklistfilter_CFLAGS=-std=gnu99
ipblacklistfilter_CXXFLAGS=-std=c++11 -Wall -pedantic
ipblacklistfiltersysconfdir=${sysconfdir}/blacklistfilter
dist_ipblacklistfiltersysconf_DATA=ipdetect/ipdetect_config.xml


urlblacklistfilter_SOURCES=urlblacklistfilter.cpp \
                           urlblacklistfilter.h \
                           ipdetect/patternstrings.h \
                           blacklist_watcher.c \
                           blacklist_watcher.h \
                           fields.c fields.h
urlblacklistfilter_LDADD=-lpthread -ltrap -lidn -lunirec -lnemea-common
urlblacklistfilter_CFLAGS=-std=gnu99
urlblacklistfilter_CXXFLAGS=-std=c++11 -Wall -pedantic
urlblacklistfiltersysconfdir=${sysconfdir}/blacklistfilter
dist_urlblacklistfiltersysconf_DATA=urldetect/urldetect_config.xml

EXTRA_DIST=ipblacklist_aggregator.py \
	   urlblacklist_aggregator.py \
	   blacklist_downloader/bl_downloader.py.in  \
	   blacklist_downloader/bl_downloader_config.xml \
	   urldetect/patternstrings.h \
	   urldetect/README.md \
	   urldetect/urldetect_config.xml \
	   ipdetect/patternstrings.h \
	   ipdetect/README.md \
	   ipdetect/ipdetect_config.xml

bin_SCRIPTS=blacklist_downloader/bl_downloader.py ipblacklist_aggregator.py urlblacklist_aggregator.py

dist_blacklistfilter_DATA=blacklist_downloader/bl_downloader_config.xml
# urldetectsysconfdir=${sysconfdir}/urldetect
# urldetectsysconf_DATA=urldetect/urldetect_config.xml
# ipdetectsysconfdir=${sysconfdir}/ipdetect
# ipdetectsysconf_DATA=ipdetect/ipdetect_config.xml

# dnspkgdocdir=${docdir}/dnsblacklistfilter
# dnspkgdoc_DATA=dnsdetect/README
ippkgdocdir=${docdir}/ipblacklistfilter
ippkgdoc_DATA=ipdetect/README.md
urlpkgdocdir=${docdir}/urlblacklistfilter
urlpkgdoc_DATA=urldetect/README.md

include ../aminclude.am

