/*++ 
 * linux/drivers/media/video/wmt_v4l2/cmos/cmos-dev-gc.h
 * WonderMedia v4l cmos device driver
 *
 * Copyright c 2010  WonderMedia  Technologies, Inc.
 *
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 2 of the License, or 
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * WonderMedia Technologies, Inc.
 * 4F, 533, Chung-Cheng Road, Hsin-Tien, Taipei 231, R.O.C
--*/

#ifndef CMOS_DEV_GC_H
/* To assert that only one occurrence is included */
#define CMOS_DEV_GC_H
/*-------------------- MODULE DEPENDENCY -------------------------------------*/

/*-------------------- EXPORTED PRIVATE CONSTANTS ----------------------------*/


/*-------------------- EXPORTED PRIVATE TYPES---------------------------------*/
/* typedef  void  viaapi_xxx_t;  *//*Example*/

/*------------------------------------------------------------------------------
    Definitions of structures
------------------------------------------------------------------------------*/

/*-------------------- EXPORTED PRIVATE VARIABLES -----------------------------*/
#ifdef CMOS_DEV_GC_C 
    #define EXTERN
#else
    #define EXTERN   extern
#endif 

#undef EXTERN

/*--------------------- EXPORTED PRIVATE MACROS -------------------------------*/

/*--------------------- EXPORTED PRIVATE FUNCTIONS  ---------------------------*/
/* extern void  viaapi_xxxx(vdp_Void); *//*Example*/

int cmos_gc0307_identify(void);
int cmos_init_gc0307(int width, int height,  int cmos_v_flip, int cmos_h_flip);
int cmos_exit_gc0307(void);


int cmos_gc0308_identify(void);
int cmos_init_gc0308(int width, int height,  int cmos_v_flip, int cmos_h_flip);
int cmos_exit_gc0308(void);

    
#endif /* ifndef CMOS_DEV_GC_H */

/*=== END cmos-dev-gc.h ==========================================================*/
