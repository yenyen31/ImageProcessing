﻿// CHarrisCornerDlg.cpp: 구현 파일
//

#include "pch.h"
#include "ImageTool.h"
#include "CHarrisCornerDlg.h"
#include "afxdialogex.h"


// CHarrisCornerDlg 대화 상자

IMPLEMENT_DYNAMIC(CHarrisCornerDlg, CDialogEx)

CHarrisCornerDlg::CHarrisCornerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_HARRIS_CORNER, pParent)
	, m_nHarrisTh(2000) // 초기값 2000으로 수정함
{

}

CHarrisCornerDlg::~CHarrisCornerDlg()
{
}

void CHarrisCornerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_HARRIS_THRESHOLD, m_nHarrisTh);
}


BEGIN_MESSAGE_MAP(CHarrisCornerDlg, CDialogEx)
END_MESSAGE_MAP()


// CHarrisCornerDlg 메시지 처리기
