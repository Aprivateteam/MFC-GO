#pragma once
#include "afxwin.h"


// CLoginDlg �Ի���

class CLoginDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDlg)
private:
	CString m_name;
	CString m_password;
	CComboBox m_idbox;

public:
	CLoginDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLoginDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	BOOL Login_Check();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLoginButton();

	afx_msg void OnBnClickedFreeButton();
};
