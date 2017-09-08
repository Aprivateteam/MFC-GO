// LoginDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "newDemo.h"
#include "LoginDlg.h"
#include "afxdialogex.h"


// CLoginDlg �Ի���

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


// CLoginDlg ��Ϣ�������
BOOL CLoginDlg::Login_Check() {
	UpdateData(TRUE);
	if (m_name == _T("admin")) {
		if (m_password == _T("admin")) {
			return TRUE;
		}
	}
	
	MessageBox(_T("��������ȷ���û��������룡"), _T("��¼ʧ��"), MB_ICONWARNING | MB_OK);
	return FALSE;
}

void CLoginDlg::OnBnClickedLoginButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if (Login_Check()) {
		CDialogEx::OnOK();
	}
}


void CLoginDlg::OnBnClickedFreeButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
