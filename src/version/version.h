// Copyright (c) 2014-2019 Coin Sciences Ltd
// BitChain code distributed under the GPLv3 license, see COPYING file.

#ifndef BITCHAINVERSION_H
#define	BITCHAINVERSION_H

#define BITCHAIN_VERSION_MAJOR     1
#define BITCHAIN_VERSION_MINOR     0
#define BITCHAIN_VERSION_REVISION  0
#define BITCHAIN_VERSION_STAGE     2
#define BITCHAIN_VERSION_BUILD     2

#define BITCHAIN_PROTOCOL_VERSION 10008
#define BITCHAIN_PROTOCOL_SUPPORTED "10004 - 10008, 20001"


#ifndef STRINGIZE
#define STRINGIZE(X) DO_STRINGIZE(X)
#endif

#ifndef DO_STRINGIZE
#define DO_STRINGIZE(X) #X
#endif

#define BITCHAIN_BUILD_DESC_WITH_SUFFIX(maj, min, rev, build, suffix) \
    DO_STRINGIZE(maj) "." DO_STRINGIZE(min) "." DO_STRINGIZE(rev) "." DO_STRINGIZE(build) "-" DO_STRINGIZE(suffix)

#define BITCHAIN_BUILD_DESC_FROM_UNKNOWN(maj, min, rev, build) \
    DO_STRINGIZE(maj) "." DO_STRINGIZE(min) "." DO_STRINGIZE(rev) "." DO_STRINGIZE(build)


#define BITCHAIN_BUILD_DESC "1.0 beta 2"
#define BITCHAIN_BUILD_DESC_NUMERIC 10000202


#ifndef BITCHAIN_BUILD_DESC
#ifdef BUILD_SUFFIX
#define BITCHAIN_BUILD_DESC BITCHAIN_BUILD_DESC_WITH_SUFFIX(BITCHAIN_VERSION_MAJOR, BITCHAIN_VERSION_MINOR, BITCHAIN_VERSION_REVISION, BITCHAIN_VERSION_BUILD, BUILD_SUFFIX)
#else
#define BITCHAIN_BUILD_DESC BITCHAIN_BUILD_DESC_FROM_UNKNOWN(BITCHAIN_VERSION_MAJOR, BITCHAIN_VERSION_MINOR, BITCHAIN_VERSION_REVISION, BITCHAIN_VERSION_BUILD)
#endif
#endif

#define BITCHAIN_FULL_DESC(build, protocol) \
    "build " build " protocol " DO_STRINGIZE(protocol)


#ifndef BITCHAIN_FULL_VERSION
#define BITCHAIN_FULL_VERSION BITCHAIN_FULL_DESC(BITCHAIN_BUILD_DESC, BITCHAIN_PROTOCOL_VERSION)
#endif


#define BITCHAIN_VERSION_CODE_PROTOCOL_THIS              0
#define BITCHAIN_VERSION_CODE_PROTOCOL_MIN               1
#define BITCHAIN_VERSION_CODE_PROTOCOL_MIN_DOWNGRADE     2
#define BITCHAIN_VERSION_CODE_PROTOCOL_MIN_NO_DOWNGRADE  3
#define BITCHAIN_VERSION_CODE_PROTOCOL_FOR_RELEVANCE     4
#define BITCHAIN_VERSION_CODE_BUILD                     16
#define BITCHAIN_VERSION_CODE_MIN_VALID               1000

#endif	/* BITCHAINVERSION_H */

