// WinPeercastInstance.h: interface for the CWinPeercastInstance class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WINPEERCASTINSTANCE_H__D92832B8_5B56_4FD0_ADD4_29D433361565__INCLUDED_)
#define AFX_WINPEERCASTINSTANCE_H__D92832B8_5B56_4FD0_ADD4_29D433361565__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CWinPeercastInstance : public PeercastInstance  
{
public:
	CWinPeercastInstance();
	virtual ~CWinPeercastInstance();

	virtual Sys * APICALL createSys();

};

#endif // !defined(AFX_WINPEERCASTINSTANCE_H__D92832B8_5B56_4FD0_ADD4_29D433361565__INCLUDED_)
