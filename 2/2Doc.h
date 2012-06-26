// 2Doc.h : interface of the CMy2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_2DOC_H__B4488FEA_64A6_4525_806D_66FBA2FDE499__INCLUDED_)
#define AFX_2DOC_H__B4488FEA_64A6_4525_806D_66FBA2FDE499__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy2Doc : public CDocument
{
protected: // create from serialization only
	CMy2Doc();
	DECLARE_DYNCREATE(CMy2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2DOC_H__B4488FEA_64A6_4525_806D_66FBA2FDE499__INCLUDED_)
