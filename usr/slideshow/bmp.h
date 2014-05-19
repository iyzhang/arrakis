/*
 * Copyright (c) 2007, 2008, 2009, ETH Zurich.
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached LICENSE file.
 * If you do not find this file, copies can be found by writing to:
 * ETH Zurich D-INFK, Haldeneggsteig 4, CH-8092 Zurich. Attn: Systems Group.
 */

#ifndef BMP_H
#define BMP_H

#define SCREEN_SIZE	(xres * yres * bpp)
#define SCREEN(x, y)	(&fb[(y) * xres * bpp + (x) * bpp])

extern char    *fb;
extern int     xres, yres, bpp;

int bmp_load(void *data, size_t size);

#endif