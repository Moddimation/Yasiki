/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/30 20:15:26 $
 * $Revision: 1.10 $
 */

/*
 *	Routines
 *	--------
 *		signal
 *		raise
 *	
 *
 */

#include "critical_regions.h"
#include <errno.h>
#include <signal.h>
#include <stdlib.h>

static __signal_func_ptr	signal_funcs[__signal_max];

__signal_func_ptr signal(int signal, __signal_func_ptr signal_func)
{
	__signal_func_ptr	old_signal_func;
	
	if (signal < 1 || signal > __signal_max)
	{
		errno = ESIGPARM;
		return(SIG_ERR);
	}
	
	__begin_critical_region(signal_funcs_access);
	
	old_signal_func = signal_funcs[signal-1];
	
	signal_funcs[signal-1] = signal_func;
	
	__end_critical_region(signal_funcs_access);
	
	return(old_signal_func);
}

int raise(int signal)
{
	__signal_func_ptr	signal_func;
	
	if (signal < 1 || signal > __signal_max)
		return(-1);
	
	__begin_critical_region(signal_funcs_access);
	
	signal_func = signal_funcs[signal-1];
	
	if (signal_func != SIG_IGN)
		signal_funcs[signal-1] = SIG_DFL;
	
	__end_critical_region(signal_funcs_access);
	
	if (signal_func == SIG_IGN || (signal_func == SIG_DFL && signal == SIGABRT))
			return(0);
	
	if (signal_func == SIG_DFL)
		exit(0);
	
	(*signal_func)(signal);
	
	return(0);
}

/* Change record:
 * JFH 950914 First code release.
 * JFH 951012 Moved __myraise back to unix.c
 * JFH 951215 Changed code to make SIGABRT handler of SIG_DFL to return instead of exit().
 */
