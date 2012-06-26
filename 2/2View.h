// 2View.h : interface of the CMy2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_2VIEW_H__97EE948B_9F88_4BB6_8968_4EEE2BD38185__INCLUDED_)
#define AFX_2VIEW_H__97EE948B_9F88_4BB6_8968_4EEE2BD38185__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy2View : public CView
{
protected: // create from serialization only
	CMy2View();
	DECLARE_DYNCREATE(CMy2View)

// Attributes
public:
	CMy2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 2View.cpp
inline CMy2Doc* CMy2View::GetDocument()
   { return (CMy2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2VIEW_H__97EE948B_9F88_4BB6_8968_4EEE2BD38185__INCLUDED_)
