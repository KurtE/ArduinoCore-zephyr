/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_POSIX_SIGNAL_H_
#define ZEPHYR_INCLUDE_POSIX_SIGNAL_H_

/* include posix_types.h before posix_features.h (here) to avoid build errors against newlib */
#include <zephyr/posix/posix_types.h>
#include "posix_features.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SIGHUP    1
#define SIGINT    2
#define SIGQUIT   3
#define SIGILL    4
#define SIGTRAP   5
#define SIGABRT   6
#define SIGBUS    7
#define SIGFPE    8
#define SIGKILL   9
#define SIGUSR1   10
#define SIGSEGV   11
#define SIGUSR2   12
#define SIGPIPE   13
#define SIGALRM   14
#define SIGTERM   15
/* 16 not used */
#define SIGCHLD   17
#define SIGCONT   18
#define SIGSTOP   19
#define SIGTSTP   20
#define SIGTTIN   21
#define SIGTTOU   22
#define SIGURG    23
#define SIGXCPU   24
#define SIGXFSZ   25
#define SIGVTALRM 26
#define SIGPROF   27
/* 28 not used */
#define SIGPOLL   29
/* 30 not used */
#define SIGSYS    31

#define SIGRTMIN 32
#define SIGRTMAX (SIGRTMIN + RTSIG_MAX)
#define _NSIG (SIGRTMAX + 1)

BUILD_ASSERT(RTSIG_MAX >= 0);

typedef struct {
	unsigned long sig[DIV_ROUND_UP(_NSIG, BITS_PER_LONG)];
} sigset_t;

#ifndef SIGEV_NONE
#define SIGEV_NONE 1
#endif

#ifndef SIGEV_SIGNAL
#define SIGEV_SIGNAL 2
#endif

#ifndef SIGEV_THREAD
#define SIGEV_THREAD 3
#endif

#ifndef SIG_BLOCK
#define SIG_BLOCK 0
#endif
#ifndef SIG_SETMASK
#define SIG_SETMASK 1
#endif
#ifndef SIG_UNBLOCK
#define SIG_UNBLOCK 2
#endif

#define SIG_DFL ((void *)0)
#define SIG_IGN ((void *)1)
#define SIG_ERR ((void *)-1)

#define SI_USER 1
#define SI_QUEUE 2
#define SI_TIMER 3
#define SI_ASYNCIO 4
#define SI_MESGQ 5

typedef int	sig_atomic_t;

union sigval {
	void *sival_ptr;
	int sival_int;
};

struct sigevent {
	void (*sigev_notify_function)(union sigval val);
	pthread_attr_t *sigev_notify_attributes;
	union sigval sigev_value;
	int sigev_notify;
	int sigev_signo;
};

typedef struct {
	int si_signo;
	int si_code;
	union sigval si_value;
} siginfo_t;

struct sigaction {
	void (*sa_handler)(int signno);
	sigset_t sa_mask;
	int sa_flags;
	void (*sa_sigaction)(int signo, siginfo_t *info, void *context);
};

typedef void (*sighandler_t)(int signo);

unsigned int alarm(unsigned int seconds);
int kill(pid_t pid, int sig);
int pause(void);
int raise(int signo);
TOOLCHAIN_IGNORE_WSHADOW_BEGIN;
int sigaction(int sig, const struct sigaction *ZRESTRICT act, struct sigaction *ZRESTRICT oact);
TOOLCHAIN_IGNORE_WSHADOW_END;
int sigpending(sigset_t *set);
int sigsuspend(const sigset_t *sigmask);
int sigwait(const sigset_t *ZRESTRICT set, int *ZRESTRICT signo);
char *strsignal(int signum);
int sigemptyset(sigset_t *set);
int sigfillset(sigset_t *set);
int sigaddset(sigset_t *set, int signo);
int sigdelset(sigset_t *set, int signo);
int sigismember(const sigset_t *set, int signo);
sighandler_t signal(int signo, sighandler_t handler);
int sigprocmask(int how, const sigset_t *ZRESTRICT set, sigset_t *ZRESTRICT oset);

int pthread_sigmask(int how, const sigset_t *ZRESTRICT set, sigset_t *ZRESTRICT oset);

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_INCLUDE_POSIX_SIGNAL_H_ */
