#pragma once
class CMyComboBox : public CComboBox
{
	DECLARE_DYNAMIC(CMyComboBox)

public:
	CMyComboBox();
	virtual ~CMyComboBox();

	void SetReadOnly(bool read_only = true);
	void SetEditReadOnly(bool read_only = true);

protected:
	bool m_read_only{ false };
	CRect m_arrow_rect;		//������ͷ�ľ�������

public:
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//virtual void PreSubclassWindow();
};
