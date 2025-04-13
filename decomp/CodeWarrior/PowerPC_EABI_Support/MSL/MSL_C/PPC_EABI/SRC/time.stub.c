/*  Metrowerks Standard Library  Version 2.1.2  1997 May  */

/*
 *	time.mac.c
 *	
 *		CopyrighC 1995-1997 Metrowerks, Inc.
 *		All rights reserved.
 *	
 *	Routines
 *	--------
 *		__get_clock
 *		__get_time
 *
 *		__to_gm_time
 *
 *
 */

/* Include your OS dependent include files */
#include <time.h>

#ifdef _No_Time_OS_Support
#error time.stub.c can't be in your project if _No_Time_OS_Support is defined.
#endif

clock_t __get_clock(void)
{
#warning "replace 0 with an OS call"
	return 0; 
}

time_t __get_time(void)
{
#warning "replace 0 with an OS call"
	return 0; 
}

int __to_gm_time(time_t * time)
{
#warning "replace 0 with an OS call"
	return 0; 
}
/*  Change Record
 *	20-Jul-97 MEA  First code release.
*/
