// SimpleCOMObject2_impl.cpp : Implementation of CSimpleCOMObject2
#include "stdafx.h"
#include "SimpleCOMObject2.h"
#include "SimpleCOMObject2_impl.h"

/////////////////////////////////////////////////////////////////////////////
// CSimpleCOMObject2

STDMETHODIMP CSimpleCOMObject2::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] =
	{
		&IID_ISimpleCOMObject2
	};
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CSimpleCOMObject2::TestMethod1()
{
	// TODO: Add your implementation code here
	char szMessage[256];
	wchar_t wtext[256];

	sprintf_s(szMessage, "Thread ID : 0x%X", GetCurrentThreadId());

	mbstowcs(wtext, szMessage, strlen(szMessage) + 1);//Plus null

	::MessageBox(NULL, wtext, L"TestMethod1()", MB_OK);

	return S_OK;
}
