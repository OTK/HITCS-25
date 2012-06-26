// 2Doc.cpp : implementation of the CMy2Doc class
//

#include "stdafx.h"
#include "2.h"

#include "2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy2Doc

IMPLEMENT_DYNCREATE(CMy2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy2Doc, CDocument)
	//{{AFX_MSG_MAP(CMy2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy2Doc construction/destruction

CMy2Doc::CMy2Doc()
{
	// TODO: add one-time construction code here

}

CMy2Doc::~CMy2Doc()
{
}

BOOL CMy2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy2Doc serialization

void CMy2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy2Doc diagnostics

#ifdef _DEBUG
void CMy2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy2Doc commands
