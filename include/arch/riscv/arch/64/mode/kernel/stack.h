/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */

#ifndef __KERNEL_MODE_STACK_H
#define __KERNEL_MODE_STACK_H

#include <config.h>
#include <util.h>

#ifdef ENABLE_SMP_SUPPORT
#define KERNEL_STACK_ALIGNMENT 4096
#else
#define KERNEL_STACK_ALIGNMENT 8
#endif

#endif /* __KERNEL_MODE_STACK_H */
