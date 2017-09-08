#pragma once
#include "afxwin.h"


// CLoginDlg 对话框

class CLoginDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDlg)
private:
	CString m_name;
	CString m_password;
	CComboBox m_idbox;

public:
	CLoginDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLoginDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	BOOL Login_Check();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLoginButton();

	afx_msg void OnBnClickedFreeButton();
};
