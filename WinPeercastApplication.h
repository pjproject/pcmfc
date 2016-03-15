// WinPeercastApplication.h: interface for the CWinPeercastApplication class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WINPEERCASTAPPLICATION_H__84B01EAF_8263_4098_ADB6_C7E0D260DDC3__INCLUDED_)
#define AFX_WINPEERCASTAPPLICATION_H__84B01EAF_8263_4098_ADB6_C7E0D260DDC3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CWinPeercastApplication : public PeercastApplication  
{
public:
	CWinPeercastApplication();
	virtual ~CWinPeercastApplication();

	virtual const char* APICALL getIniFilename();
	virtual const char* APICALL getClientTypeOS();
	virtual void APICALL printLog(LogBuffer::TYPE t, const char *str);

protected:
	String m_strIniFileName;

};

#endif // !defined(AFX_WINPEERCASTAPPLICATION_H__84B01EAF_8263_4098_ADB6_C7E0D260DDC3__INCLUDED_)
