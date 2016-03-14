// WinPeercastInstance.cpp: implementation of the CWinPeercastInstance class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "pcmfc.h"
#include "WinPeercastInstance.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CWinPeercastInstance::CWinPeercastInstance()
{

}

CWinPeercastInstance::~CWinPeercastInstance()
{

}

Sys * APICALL CWinPeercastInstance::createSys()
{
	return new WSys(AfxGetMainWnd()->GetSafeHwnd());

}
