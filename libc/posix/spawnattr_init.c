/* Copyright (C) 2000 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <spawn.h>
#include <string.h>

/* Initialize data structure for file attribute for `spawn' call.  */
int
posix_spawnattr_init (posix_spawnattr_t *attr)
{
  /* All elements have to be initialized to the default values which
     is generally zero.  */
  memset (attr, '\0', sizeof (*attr));

  return 0;
}
