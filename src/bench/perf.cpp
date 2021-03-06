//
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2017-2020 Project PAI Foundation
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
//


#include "perf.h"

#if defined(__i386__) || defined(__x86_64__)

/* These architectures support querying the cycle counter
 * from user space, no need for any syscall overhead.
 */
void perf_init() { }
void perf_fini() { }

#elif defined(__linux__)

#include <unistd.h>
#include <sys/syscall.h>
#include <linux/perf_event.h>

static int fd = -1;
static struct perf_event_attr attr;

void perf_init()
{
    attr.type = PERF_TYPE_HARDWARE;
    attr.config = PERF_COUNT_HW_CPU_CYCLES;
    fd = syscall(__NR_perf_event_open, &attr, 0, -1, -1, 0);
}

void perf_fini()
{
    if (fd != -1) {
        close(fd);
    }
}

uint64_t perf_cpucycles()
{
    uint64_t result = 0;
    if (fd == -1 || read(fd, &result, sizeof(result)) < (ssize_t)sizeof(result)) {
        return 0;
    }
    return result;
}

#else /* Unhandled platform */

void perf_init() { }
void perf_fini() { }
uint64_t perf_cpucycles() { return 0; }

#endif
