// 
// Copyright 2007 Free Software Foundation, Inc.
// 
// This file is part of GNU Radio
// 
// GNU Radio is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
// 
// GNU Radio is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
// 
// 
// THIS FILE IS MACHINE GENERATED FROM pmt-serial-tags.scm. DO NOT EDIT BY HAND.
// See pmt-serial-tags.scm for additional commentary.
// 
#ifndef INCLUDED_PMT_SERIAL_TAGS_H
#define INCLUDED_PMT_SERIAL_TAGS_H

enum pst_tags {
  PST_TRUE	= 0x0,
  PST_FALSE	= 0x1,
  PST_SYMBOL	= 0x2,
  PST_INT32	= 0x3,
  PST_DOUBLE	= 0x4,
  PST_COMPLEX	= 0x5,
  PST_NULL	= 0x6,
  PST_PAIR	= 0x7,
  PST_VECTOR	= 0x8,
  PST_DICT	= 0x9,
  PST_UNIFORM_VECTOR	= 0xa,
  UVI_ENDIAN_MASK	= 0x80,
  UVI_SUBTYPE_MASK	= 0x7f,
  UVI_LITTLE_ENDIAN	= 0x0,
  UVI_BIG_ENDIAN	= 0x80,
  UVI_U8	= 0x0,
  UVI_S8	= 0x1,
  UVI_U16	= 0x2,
  UVI_S16	= 0x3,
  UVI_U32	= 0x4,
  UVI_S32	= 0x5,
  UVI_U64	= 0x6,
  UVI_S64	= 0x7,
  UVI_F32	= 0x8,
  UVI_F64	= 0x9,
  UVI_C32	= 0xa,
  UVI_C64	= 0xb,
  PST_COMMENT	= 0x3b,
  PST_COMMENT_END	= 0xa,
};
#endif
