// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

struct DXGI_JPEG_DC_HUFFMAN_TABLE
{
	typedef int CodeCounts[12];
	typedef int CodeValues[12];
};

struct DXGI_JPEG_AC_HUFFMAN_TABLE
{
	typedef int CodeCounts[16];
	typedef int CodeValues[162];
};

struct DXGI_JPEG_QUANTIZATION_TABLE
{
	typedef int  Elements[64];
};


#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows 95 and Windows NT 4 or later.
#define WINVER 0x0501		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows NT 4 or later.
#define _WIN32_WINNT 0x0501		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 4.0 or later.
#define _WIN32_IE 0x0400	// Change this to the appropriate value to target IE 5.0 or later.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#define _WIN32_DCOM 
#define NEW_IF

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <afxsock.h>
#include <direct.h>
#include <dbghelp.h>

#include <assert.h>
#include <fstream>
#include <iostream>
#include <tlhelp32.h>
#include <dxdiag.h>
#include <strsafe.h>
#include <winsvc.h>

#ifdef TEST_MODE
#include <conio.h>
#endif

#ifndef TEST_MODE
#include <XTrap4Client.h>
#endif

//#if defined _DEBUG || TEST_MODE
//#define NO_GAMEGUARD
//#endif
#include "NPGameLib.h"

#include <T3D.h>
#include <CSProtocol.h>
#include <NetCode.h>
#include <TClientID.h>

#include <TChartType.h>
#include "TClientType.h"

#endif // _AFX_NO_AFXCMN_SUPPORT
void  LogFileWrite(const char *pszParam, ...);
