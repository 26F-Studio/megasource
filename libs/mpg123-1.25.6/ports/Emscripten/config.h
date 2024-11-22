#define HAVE_AL_ALC_H
#define HAVE_AL_AL_H
#define HAVE_ARPA_INET_H
#define HAVE_ATOLL
#define HAVE_DLFCN_H
#define HAVE_GETADDRINFO
#define HAVE_GETPAGESIZE
#define HAVE_GETUID
#define HAVE_INTTYPES_H
#define HAVE_LANGINFO_H
#define HAVE_LIMITS_H
#define HAVE_LOCALE_H
#define HAVE_MEMORY_H
#define HAVE_MKFIFO
#define HAVE_MMAP
#define HAVE_NETDB_H
#define HAVE_NETINET_IN_H
#define HAVE_NETINET_TCP_H
#define HAVE_NL_LANGINFO
#define HAVE_RANDOM
#define HAVE_SCHED_H
#define HAVE_SETLOCALE
#define HAVE_SETPRIORITY
#define HAVE_SETUID
#define HAVE_SIGNAL_H
#define HAVE_STDINT_H
#define HAVE_STDIO_H
#define HAVE_STDLIB_H
#define HAVE_STRDUP
#define HAVE_STRERROR
#define HAVE_STRINGS_H
#define HAVE_STRING_H
#define HAVE_SYS_IOCTL_H
#define HAVE_SYS_PARAM_H
#define HAVE_SYS_RESOURCE_H
#define HAVE_SYS_SIGNAL_H
#define HAVE_SYS_SOCKET_H
#define HAVE_SYS_STAT_H
#define HAVE_SYS_TIME_H
#define HAVE_SYS_TYPES_H
#define HAVE_SYS_WAIT_H
#define HAVE_UNISTD_H
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif
#ifndef __cplusplus
#endif
