/*
 * Copyright (C) 2007 Google (Evan Stade)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/*
 * Oracle LGPL Disclaimer: For the avoidance of doubt, except that if any license choice
 * other than GPL or LGPL is available it will apply instead, Oracle elects to use only
 * the Lesser General Public License version 2.1 (LGPLv2) at this time for any software where
 * a choice of LGPL license versions is made available with the language indicating
 * that LGPLv2 or any later version may be used, or where a choice of which version
 * of the LGPL is applied is otherwise unspecified.
 */

#ifndef _GDIPLUSPIXELFORMATS_H
#define _GDIPLUSPIXELFORMATS_H

typedef DWORD ARGB;
typedef INT PixelFormat;

#define    PixelFormatIndexed   0x00010000
#define    PixelFormatGDI       0x00020000
#define    PixelFormatAlpha     0x00040000
#define    PixelFormatPAlpha    0x00080000
#define    PixelFormatExtended  0x00100000
#define    PixelFormatCanonical 0x00200000

#define    PixelFormatUndefined 0
#define    PixelFormatDontCare  0

#define    PixelFormat1bppIndexed       (1 | ( 1 << 8) | PixelFormatIndexed | PixelFormatGDI)
#define    PixelFormat4bppIndexed       (2 | ( 4 << 8) | PixelFormatIndexed | PixelFormatGDI)
#define    PixelFormat8bppIndexed       (3 | ( 8 << 8) | PixelFormatIndexed | PixelFormatGDI)
#define    PixelFormat16bppGrayScale    (4 | (16 << 8) | PixelFormatExtended)
#define    PixelFormat16bppRGB555       (5 | (16 << 8) | PixelFormatGDI)
#define    PixelFormat16bppRGB565       (6 | (16 << 8) | PixelFormatGDI)
#define    PixelFormat16bppARGB1555     (7 | (16 << 8) | PixelFormatAlpha | PixelFormatGDI)
#define    PixelFormat24bppRGB          (8 | (24 << 8) | PixelFormatGDI)
#define    PixelFormat32bppRGB          (9 | (32 << 8) | PixelFormatGDI)
#define    PixelFormat32bppARGB         (10 | (32 << 8) | PixelFormatAlpha | PixelFormatGDI | PixelFormatCanonical)
#define    PixelFormat32bppPARGB        (11 | (32 << 8) | PixelFormatAlpha | PixelFormatPAlpha | PixelFormatGDI)
#define    PixelFormat48bppRGB          (12 | (48 << 8) | PixelFormatExtended)
#define    PixelFormat64bppARGB         (13 | (64 << 8) | PixelFormatAlpha  | PixelFormatCanonical | PixelFormatExtended)
#define    PixelFormat64bppPARGB        (14 | (64 << 8) | PixelFormatAlpha  | PixelFormatPAlpha | PixelFormatExtended)
#define    PixelFormatMax               15

#ifdef __cplusplus

struct ColorPalette
{
public:
    UINT Flags;
    UINT Count;
    ARGB Entries[1];
};

#else /* end of c++ typedefs */

typedef struct ColorPalette
{
    UINT Flags;
    UINT Count;
    ARGB Entries[1];
} ColorPalette;

#endif  /* end of c typedefs */

#endif