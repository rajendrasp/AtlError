/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Dec 21 19:57:39 2004
 */
 /* Compiler settings for C:\Limbl\Develope\CodeProject\CCOMThread\SimpleCOMObject2\SimpleCOMObject2.idl:
     Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
     error checks: allocation ref bounds_check enum stub_data
 */
 //@@MIDL_FILE_HEADING(  )


 /* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SimpleCOMObject2_h__
#define __SimpleCOMObject2_h__

#ifdef __cplusplus
extern "C" {
#endif 

    /* Forward Declarations */

#ifndef __ISimpleCOMObject2_FWD_DEFINED__
#define __ISimpleCOMObject2_FWD_DEFINED__
    typedef interface ISimpleCOMObject2 ISimpleCOMObject2;
#endif 	/* __ISimpleCOMObject2_FWD_DEFINED__ */


#ifndef ___ISimpleCOMObject2Events_FWD_DEFINED__
#define ___ISimpleCOMObject2Events_FWD_DEFINED__
    typedef interface _ISimpleCOMObject2Events _ISimpleCOMObject2Events;
#endif 	/* ___ISimpleCOMObject2Events_FWD_DEFINED__ */


#ifndef __SimpleCOMObject2_FWD_DEFINED__
#define __SimpleCOMObject2_FWD_DEFINED__

#ifdef __cplusplus
    typedef class SimpleCOMObject2 SimpleCOMObject2;
#else
    typedef struct SimpleCOMObject2 SimpleCOMObject2;
#endif /* __cplusplus */

#endif 	/* __SimpleCOMObject2_FWD_DEFINED__ */


    /* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

    void __RPC_FAR* __RPC_USER MIDL_user_allocate(size_t);
    void __RPC_USER MIDL_user_free(void __RPC_FAR*);

#ifndef __ISimpleCOMObject2_INTERFACE_DEFINED__
#define __ISimpleCOMObject2_INTERFACE_DEFINED__

    /* interface ISimpleCOMObject2 */
    /* [unique][helpstring][dual][uuid][object] */


    EXTERN_C const IID IID_ISimpleCOMObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8144D7D0-4516-4B64-AAE7-FA276C94D870")
        ISimpleCOMObject2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TestMethod1(void) = 0;

    };

#else 	/* C style interface */

    typedef struct ISimpleCOMObject2Vtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE __RPC_FAR* QueryInterface)(
                ISimpleCOMObject2 __RPC_FAR* This,
                /* [in] */ REFIID riid,
                /* [iid_is][out] */ void __RPC_FAR* __RPC_FAR* ppvObject);

        ULONG(STDMETHODCALLTYPE __RPC_FAR* AddRef)(
            ISimpleCOMObject2 __RPC_FAR* This);

        ULONG(STDMETHODCALLTYPE __RPC_FAR* Release)(
            ISimpleCOMObject2 __RPC_FAR* This);

        HRESULT(STDMETHODCALLTYPE __RPC_FAR* GetTypeInfoCount)(
            ISimpleCOMObject2 __RPC_FAR* This,
            /* [out] */ UINT __RPC_FAR* pctinfo);

        HRESULT(STDMETHODCALLTYPE __RPC_FAR* GetTypeInfo)(
            ISimpleCOMObject2 __RPC_FAR* This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR* __RPC_FAR* ppTInfo);

        HRESULT(STDMETHODCALLTYPE __RPC_FAR* GetIDsOfNames)(
            ISimpleCOMObject2 __RPC_FAR* This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR* rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR* rgDispId);

        /* [local] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR* Invoke)(
            ISimpleCOMObject2 __RPC_FAR* This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR* pDispParams,
            /* [out] */ VARIANT __RPC_FAR* pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR* pExcepInfo,
            /* [out] */ UINT __RPC_FAR* puArgErr);

        /* [helpstring][id] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR* TestMethod1)(
            ISimpleCOMObject2 __RPC_FAR* This);

        END_INTERFACE
    } ISimpleCOMObject2Vtbl;

    interface ISimpleCOMObject2
    {
        CONST_VTBL struct ISimpleCOMObject2Vtbl __RPC_FAR* lpVtbl;
    };



#ifdef COBJMACROS


#define ISimpleCOMObject2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISimpleCOMObject2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISimpleCOMObject2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISimpleCOMObject2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISimpleCOMObject2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISimpleCOMObject2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISimpleCOMObject2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISimpleCOMObject2_TestMethod1(This)	\
    (This)->lpVtbl -> TestMethod1(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



    /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISimpleCOMObject2_TestMethod1_Proxy(
        ISimpleCOMObject2 __RPC_FAR* This);


    void __RPC_STUB ISimpleCOMObject2_TestMethod1_Stub(
        IRpcStubBuffer* This,
        IRpcChannelBuffer* _pRpcChannelBuffer,
        PRPC_MESSAGE _pRpcMessage,
        DWORD* _pdwStubPhase);



#endif 	/* __ISimpleCOMObject2_INTERFACE_DEFINED__ */



#ifndef __SIMPLECOMOBJECT2Lib_LIBRARY_DEFINED__
#define __SIMPLECOMOBJECT2Lib_LIBRARY_DEFINED__

    /* library SIMPLECOMOBJECT2Lib */
    /* [helpstring][version][uuid] */


    EXTERN_C const IID LIBID_SIMPLECOMOBJECT2Lib;

#ifndef ___ISimpleCOMObject2Events_DISPINTERFACE_DEFINED__
#define ___ISimpleCOMObject2Events_DISPINTERFACE_DEFINED__

    /* dispinterface _ISimpleCOMObject2Events */
    /* [helpstring][uuid] */


    EXTERN_C const IID DIID__ISimpleCOMObject2Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("02CE2476-7F6D-4699-96D2-17FF53758221")
        _ISimpleCOMObject2Events : public IDispatch
    {
    };

#else 	/* C style interface */

    typedef struct _ISimpleCOMObject2EventsVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE __RPC_FAR* QueryInterface)(
                _ISimpleCOMObject2Events __RPC_FAR* This,
                /* [in] */ REFIID riid,
                /* [iid_is][out] */ void __RPC_FAR* __RPC_FAR* ppvObject);

        ULONG(STDMETHODCALLTYPE __RPC_FAR* AddRef)(
            _ISimpleCOMObject2Events __RPC_FAR* This);

        ULONG(STDMETHODCALLTYPE __RPC_FAR* Release)(
            _ISimpleCOMObject2Events __RPC_FAR* This);

        HRESULT(STDMETHODCALLTYPE __RPC_FAR* GetTypeInfoCount)(
            _ISimpleCOMObject2Events __RPC_FAR* This,
            /* [out] */ UINT __RPC_FAR* pctinfo);

        HRESULT(STDMETHODCALLTYPE __RPC_FAR* GetTypeInfo)(
            _ISimpleCOMObject2Events __RPC_FAR* This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR* __RPC_FAR* ppTInfo);

        HRESULT(STDMETHODCALLTYPE __RPC_FAR* GetIDsOfNames)(
            _ISimpleCOMObject2Events __RPC_FAR* This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR* rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR* rgDispId);

        /* [local] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR* Invoke)(
            _ISimpleCOMObject2Events __RPC_FAR* This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR* pDispParams,
            /* [out] */ VARIANT __RPC_FAR* pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR* pExcepInfo,
            /* [out] */ UINT __RPC_FAR* puArgErr);

        END_INTERFACE
    } _ISimpleCOMObject2EventsVtbl;

    interface _ISimpleCOMObject2Events
    {
        CONST_VTBL struct _ISimpleCOMObject2EventsVtbl __RPC_FAR* lpVtbl;
    };



#ifdef COBJMACROS


#define _ISimpleCOMObject2Events_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISimpleCOMObject2Events_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISimpleCOMObject2Events_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISimpleCOMObject2Events_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ISimpleCOMObject2Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ISimpleCOMObject2Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ISimpleCOMObject2Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISimpleCOMObject2Events_DISPINTERFACE_DEFINED__ */


    EXTERN_C const CLSID CLSID_SimpleCOMObject2;

#ifdef __cplusplus

    class DECLSPEC_UUID("993B1ECD-61D0-41D3-A4A9-293FB47F83FF")
        SimpleCOMObject2;
#endif
#endif /* __SIMPLECOMOBJECT2Lib_LIBRARY_DEFINED__ */

    /* Additional Prototypes for ALL interfaces */

    /* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
