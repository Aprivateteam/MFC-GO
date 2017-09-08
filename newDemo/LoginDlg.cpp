// LoginDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "newDemo.h"
#include "LoginDlg.h"
#include "afxdialogex.h"


// CLoginDlg 对话框

IMPLEMENT_DYNAMIC(CLoginDlg, CDialogEx)

CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_LOGIN_DIALOG, pParent)
	, m_name(_T(""))
	, m_password(_T(""))
{

}

CLoginDlg::~CLoginDlg()
{
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME_EDIT, m_name);
	DDX_Text(pDX, IDC_PASSWORD_EDIT, m_password);
	DDX_Control(pDX, IDC_ID_COMBO, m_idbox);
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialogEx)
	ON_BN_CLICKED(IDC_LOGIN_BUTTON, &CLoginDlg::OnBnClickedLoginButton)
	ON_BN_CLICKED(IDC_FREE_BUTTON, &CLoginDlg::OnBnClickedFreeButton)
END_MESSAGE_MAP()


// CLoginDlg 消息处理程序
BOOL CLoginDlg::Login_Check() {
	UpdateData(TRUE);
	if (m_name == _T("admin")) {
		if (m_password == _T("admin")) {
			return TRUE;
		}
	}
	
	MessageBox(_T("请输入正确的用户名及密码！"), _T("登录失败"), MB_ICONWARNING | MB_OK);
	return FALSE;
}

void CLoginDlg::OnBnClickedLoginButton()
{
	// TODO: 在此添加控件通知处理程序代码
	if (Login_Check()) {
		CDialogEx::OnOK();
	}
}


void CLoginDlg::OnBnClickedFreeButton()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
