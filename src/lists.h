/*
This file is part of DeuTex.

DeuTex incorporates code derived from DEU 5.21 that was put in the public
domain in 1994 by Raphaël Quinet and Brendon Wyber.

DeuTex is Copyright © 1994-1995 Olivier Montanuy,
          Copyright © 1999-2001 André Majorel.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/


/*function to merge two WAD directories (complex)*/
struct WADDIR  *LISmergeDir(int32_t *pNtry,
    bool OnlySF,
    bool Complain,
    NTRYB select,
    struct WADINFO *iwad, ENTRY  *iiden, int32_t iwadflag,
    struct WADINFO *pwad,ENTRY  *piden,int32_t pwadflag);
