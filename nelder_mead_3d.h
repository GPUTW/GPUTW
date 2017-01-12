/*  This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef nelder_mead_3d_h
#define nelder_mead_3d_h

#include <stdio.h>

void nm_start(
int start, float start_x, float start_y, float start_z, float start_f);

void nm_get_next_point(
float last_f, float *next_x, float *next_y, float *next_z);

#endif
