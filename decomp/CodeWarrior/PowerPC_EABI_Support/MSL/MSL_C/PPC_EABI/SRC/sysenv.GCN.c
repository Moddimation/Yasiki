/*  Metrowerks Standard Library  */

/*  $Date: $
 *  $Revision: $
 *  $NoKeywords: $
 *
 *		CopyrighC 1995-2001 Metrowerks, Inc.
 *		All rights reserved.
 */

/*
 *	sysenv.GCN.c
 *
 *	Routines
 *	--------
 *		getenv
 *		system
 *
 */

#include <cstdlib> /* for getenv */
char*
getenv (const char* inVarName)
{
#pragma unused(inVarName)
    return 0;
}
int
system (const char* cmdLine)
{
#pragma unused(cmdLine)
    return 0;
}
/*  Change History
 *  swell - 09262001 - initial version to fix missing symbols for GCN
 */
