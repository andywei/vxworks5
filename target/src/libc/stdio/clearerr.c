/* clearerr.c - clear error file for stdio.h */

/* Copyright 1992-1993 Wind River Systems, Inc. */

/* 
modification history 
-------------------- 
01d,05mar93,jdi  documentation cleanup for 5.1.
01c,21sep92,smb  corrected first line of file.
01b,20sep92,smb  documentation additions
01a,29jul92,smb  taken from UCB stdio
*/ 
 
/*
DESCRIPTION
* Copyright (c) 1990 The Regents of the University of California.
* All rights reserved.
*
* This code is derived from software contributed to Berkeley by
* Chris Torek.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the distribution.
* 3. All advertising materials mentioning features or use of this software
*    must display the following acknowledgement:
*	This product includes software developed by the University of
*	California, Berkeley and its contributors.
* 4. Neither the name of the University nor the names of its contributors
*    may be used to endorse or promote products derived from this software
*    without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
*
NOMANUAL
*/

#include "vxWorks.h"
#include "stdio.h"

#undef	clearerr

/******************************************************************************
*
* clearerr - clear end-of-file and error flags for a stream (ANSI)
* 
* This routine clears the end-of-file and error flags for a specified stream.
*
* INCLUDE FILES: stdio.h 
*
* RETURNS: N/A
*
* SEE ALSO: feof(), ferror()
*/

void clearerr
    (
    FILE * fp		/* stream to clear EOF and ERROR flags for */
    )
    {
    __sclearerr(fp);
    }
