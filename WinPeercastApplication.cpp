// WinPeercastApplication.cpp: implementation of the CWinPeercastApplication class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "WinPeercastApplication.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CWinPeercastApplication::CWinPeercastApplication()
{
	m_strIniFileName = "C:\\pcmfc.ini";

}

CWinPeercastApplication::~CWinPeercastApplication()
{

}

const char* APICALL CWinPeercastApplication::getIniFilename()
{
	return m_strIniFileName;
}

const char* APICALL CWinPeercastApplication::getClientTypeOS()
{
	return PCX_OS_WIN32;
}

void APICALL CWinPeercastApplication::printLog(LogBuffer::TYPE t, const char *str)
{
}
