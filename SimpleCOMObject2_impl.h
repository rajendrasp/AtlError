// SimpleCOMObject2_impl.h : Declaration of the CSimpleCOMObject2

#ifndef __SIMPLECOMOBJECT2_H_
#define __SIMPLECOMOBJECT2_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSimpleCOMObject2
class ATL_NO_VTABLE CSimpleCOMObject2 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSimpleCOMObject2, &CLSID_SimpleCOMObject2>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CSimpleCOMObject2>,
	public IDispatchImpl<ISimpleCOMObject2, &IID_ISimpleCOMObject2, &LIBID_SIMPLECOMOBJECT2Lib>
{
public:
	CSimpleCOMObject2()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLECOMOBJECT2)

		DECLARE_PROTECT_FINAL_CONSTRUCT()

	BEGIN_COM_MAP(CSimpleCOMObject2)
		COM_INTERFACE_ENTRY(ISimpleCOMObject2)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(ISupportErrorInfo)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()
	BEGIN_CONNECTION_POINT_MAP(CSimpleCOMObject2)
	END_CONNECTION_POINT_MAP()


	// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

	// ISimpleCOMObject2
public:
	STDMETHOD(TestMethod1)();
};

#endif //__SIMPLECOMOBJECT2_H_
