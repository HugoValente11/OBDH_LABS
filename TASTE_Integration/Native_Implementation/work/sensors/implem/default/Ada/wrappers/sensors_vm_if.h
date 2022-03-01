/* Header file for function Sensors in Ada language
 * Generated by TASTE on 2022-03-01 18:05:09
 * Context Parameters present : NO
 * Provided interfaces : Get
 * Required interfaces : 
 * User-defined properties for this function:
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

/* The purpose of this file is to provide a wrapper around the user code,
 * with a single interface that is independent of the implementation language
 * of the function. The parameters of each PI are blackboxes encoded
 * in the form specified in the interface view (Native, uPER, or ACN)
*/

#pragma once
#if defined(__unix__) || defined (__MSP430__)
   #include <stdlib.h>
   #include <stdio.h>
#else
   typedef unsigned size_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif


// Function initialization - calls user startup code of all dependent functions
void init_sensors(void);

extern void adainit(void);

/* Provided interfaces */
void sensors_Get
      (char *OUT_ad, size_t *OUT_ad_len);


#ifdef __cplusplus
}
#endif

