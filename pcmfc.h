// pcmfc.h : main header file for the PCMFC application
//

#if !defined(AFX_PCMFC_H__9AA8B27E_F283_4624_8914_8A6AAC964A1D__INCLUDED_)
#define AFX_PCMFC_H__9AA8B27E_F283_4624_8914_8A6AAC964A1D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPcmfcApp:
// See pcmfc.cpp for the implementation of this class
//

class CPcmfcApp : public CWinApp
{
public:
	CPcmfcApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPcmfcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPcmfcApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PCMFC_H__9AA8B27E_F283_4624_8914_8A6AAC964A1D__INCLUDED_)
