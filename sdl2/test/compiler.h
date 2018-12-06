/**
 * @file	compiler.h
 * @brief	include file for standard system include files,
 *			or project specific include files that are used frequently,
 *			but are changed infrequently
 */

#pragma once

#define NP2_SDL2

#include <stdio.h>
#include <stddef.h>
#include <setjmp.h>
#include <SDL.h>

#ifdef WIN32
#define _WINDOWS
#define _WIN32_WINNT 0x0500
#include <windows.h>
#endif

#define	BYTESEX_LITTLE
#define	OSLANG_UTF8
#define	OSLINEBREAK_CRLF
#define RESOURCE_US

typedef	signed int			SINT;
typedef	unsigned int		UINT;
typedef	signed char			SINT8;
typedef	unsigned char		UINT8;
typedef	signed short		SINT16;
typedef	unsigned short		UINT16;
typedef	signed int			SINT32;
typedef	unsigned int		UINT32;
typedef signed long long	SINT64;
typedef unsigned long long	UINT64;

#ifndef INT
#define INT UINT32
#endif

#ifndef BYTE
#define BYTE unsigned char
#endif

#ifndef DWORD
#define DWORD SINT32
#endif

#ifndef WORD
#define WORD SINT16
#endif

#ifndef INT8
#define INT8 char
#endif

#ifndef INT16
#define INT16 SINT16
#endif

#ifndef INT32
#define INT32 SINT32
#endif

#ifndef INT64
#define INT64 SINT64
#endif

#define	sigjmp_buf				jmp_buf
#ifndef	sigsetjmp
#define	sigsetjmp(env, mask)	setjmp(env)
#endif
#ifndef	siglongjmp
#define	siglongjmp(env, val)	longjmp(env, val)
#endif

#if defined(SUPPORT_LARGE_HDD)
typedef SINT64	FILEPOS;
typedef SINT64	FILELEN;
#define	NHD_MAXSIZE		8000
#define	NHD_MAXSIZE2	32000
#else
typedef SINT32	FILEPOS;
typedef SINT32	FILELEN;
#define	NHD_MAXSIZE		2000
#define	NHD_MAXSIZE2	2000
#endif

#define	BRESULT				UINT
#define	OEMCHAR				char
#define	OEMTEXT(string)		string
#define	OEMSPRINTF			sprintf
#define	OEMSTRLEN			strlen
#define	_tcsicmp	strcasecmp
#define	_tcsnicmp	strncasecmp
#define _T
#define _tcscpy strcpy
#define _tcslen strlen


#define SIZE_VGA
#if !defined(SIZE_VGA)
#define	RGB16		UINT32
#define	SIZE_QVGA
#endif

#if !defined(OBJC_BOOL_DEFINED) && !defined (WIN32)
typedef	unsigned char	BOOL;
#endif

#ifndef	TRUE
#define	TRUE	1
#endif

#ifndef	FALSE
#define	FALSE	0
#endif

#ifndef	MAX_PATH
#define	MAX_PATH	256
#endif

#ifndef __cplusplus
#ifndef	max
#define	max(a,b)	(((a) > (b)) ? (a) : (b))
#endif
#ifndef	min
#define	min(a,b)	(((a) < (b)) ? (a) : (b))
#endif
#endif	/* __cplusplus */

#ifndef	ZeroMemory
#define	ZeroMemory(d,n)		memset((d), 0, (n))
#endif
#ifndef	CopyMemory
#define	CopyMemory(d,s,n)	memcpy((d), (s), (n))
#endif
#ifndef	FillMemory
#define	FillMemory(a, b, c)	memset((a), (c), (b))
#endif

#include "common.h"
#include "milstr.h"
#include "_memory.h"
#include "rect.h"
#include "lstarray.h"
#include "trace.h"


#define	GETTICK()			SDL_GetTicks()
#define	__ASSERT(s)
#define	SPRINTF				sprintf
#define	STRLEN				strlen

#define	VERMOUTH_LIB

#define	SUPPORT_UTF8

#define	SUPPORT_16BPP
#define	MEMOPTIMIZE		2

#ifdef WIN32
#define SOUND_CRITICAL
#endif

#define	SOUNDRESERVE	100

#define SUPPORT_NORMALDISP
#define	SUPPORT_CRT15KHZ
//#define	SUPPORT_HOSTDRV
#define	SUPPORT_SWSEEKSND
#define	SUPPORT_SASI
#define	SUPPORT_SCSI

#if defined(SUPPORT_PC9821)
#define	CPUCORE_IA32
#define	IA32_PAGING_EACHSIZE
#define	IA32_REBOOT_ON_PANIC
#define	SUPPORT_CRT31KHZ
#define	SUPPORT_PC9801_119
#endif

#if defined(CPUCORE_IA32)
#define IA32_PAGING_EACHSIZE
#define IA32_REBOOT_ON_PANIC
#endif

#define SUPPORT_ARC
#define SUPPORT_ZLIB

#define	SCREEN_BPP		16

#if !defined(__i386__) && !defined(__x86_64__)
#define __fastcall
#endif

#ifndef WIN32
#define	FASTCALL
#endif
#define	CPUCALL
#define	MEMCALL
#define	DMACCALL
#define	IOOUTCALL
#define	IOINPCALL
#define	SOUNDCALL
#define	VRAMCALL
#define	SCRNCALL
#define	VERMOUTHCL

#define	msgbox(title, msg)
