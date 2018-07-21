
// BaumerSDKSetupDlg.h : ͷ�ļ�
//

#pragma once


// CBaumerSDKSetupDlg �Ի���
class CBaumerSDKSetupDlg : public CDialogEx
{
// ����
public:
	CBaumerSDKSetupDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BAUMERSDKSETUP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	BGAPI2::SystemList* m_pSystemList;
	BGAPI2::System* m_pSystem ;
	BGAPI2::String m_sSystemID;

	BGAPI2::InterfaceList *interfaceList;
	BGAPI2::Interface * pInterface;
	BGAPI2::String sInterfaceID;

	BGAPI2::DeviceList *deviceList;
	BGAPI2::Device * pDevice;
	BGAPI2::String sDeviceID;

	BGAPI2::DataStreamList *datastreamList;
	BGAPI2::DataStream * pDataStream ;
	BGAPI2::String sDataStreamID;

	BGAPI2::BufferList *bufferList = NULL;
	BGAPI2::Buffer * pBuffer = NULL;
	BGAPI2::String sBufferID;
	//int returncode = 0;
	afx_msg void OnBnClickedBtnInitialize();
};
