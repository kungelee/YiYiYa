/*******************************************************************
 * Copyright 2021-2080 evilbinary
 * 作者: evilbinary on 01/01/20
 * 邮箱: rootdebug@163.com
 ********************************************************************/
#ifndef KERNEL_H
#define KERNEL_H

#include "arch/arch.h"
#include "kernel/device.h"
#include "kernel/memory.h"
#include "kernel/module.h"
#include "kernel/syscall.h"
#include "kernel/thread.h"
#include "kernel/exceptions.h"
#include "kernel/stdarg.h"
#include "kernel/ioctl.h"
#include "kernel/vfs.h"

#define fn_malloc kmalloc
#define fn_free kfree
#include "algorithm/circle_queue.h"
#include "algorithm/queue_pool.h"

void kernel_init();
void kernel_run();

#endif