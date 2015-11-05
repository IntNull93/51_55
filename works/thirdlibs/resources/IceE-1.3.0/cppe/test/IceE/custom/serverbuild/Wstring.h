// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Wstring.ice'

#ifndef __Wstring_h__
#define __Wstring_h__

#include <IceE/ProxyF.h>
#include <IceE/ObjectF.h>
#include <IceE/Exception.h>
#include <IceE/ScopedArray.h>
#include <IceE/Proxy.h>
#include <IceE/Object.h>
#ifndef ICEE_PURE_CLIENT
#  include <IceE/Incoming.h>
#endif
#include <IceE/Outgoing.h>
#ifdef ICEE_HAS_AMI
#   include <IceE/OutgoingAsync.h>
#endif
#include <IceE/UserExceptionFactory.h>
#include <IceE/FactoryTable.h>
#include <IceE/UndefSysMacros.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace Test1
{

class WstringClass;

}

namespace Test2
{

class WstringClass;

}

}

namespace Test1
{

class WstringClass;
bool operator==(const WstringClass&, const WstringClass&);
bool operator<(const WstringClass&, const WstringClass&);

}

namespace Test2
{

class WstringClass;
bool operator==(const WstringClass&, const WstringClass&);
bool operator<(const WstringClass&, const WstringClass&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test1::WstringClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test1::WstringClass*);

::Ice::Object* upCast(::Test2::WstringClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test2::WstringClass*);

}

namespace Test1
{

typedef ::IceInternal::Handle< ::Test1::WstringClass> WstringClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test1::WstringClass> WstringClassPrx;

void __read(::IceInternal::BasicStream*, WstringClassPrx&);
void __patch__WstringClassPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test2
{

typedef ::IceInternal::Handle< ::Test2::WstringClass> WstringClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test2::WstringClass> WstringClassPrx;

void __read(::IceInternal::BasicStream*, WstringClassPrx&);
void __patch__WstringClassPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test1
{

typedef ::std::vector< ::Ice::Wstring> WstringSeq;

typedef ::std::map< ::Ice::Wstring, ::Ice::Wstring> WstringWStringDict;
void __writeWstringWStringDict(::IceInternal::BasicStream*, const WstringWStringDict&);
void __readWstringWStringDict(::IceInternal::BasicStream*, WstringWStringDict&);

struct WstringStruct
{
    ::Ice::Wstring s;

    bool operator==(const WstringStruct&) const;
    bool operator<(const WstringStruct&) const;
    bool operator!=(const WstringStruct& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const WstringStruct& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const WstringStruct& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const WstringStruct& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

class WstringException : public ::Ice::UserException
{
public:

    WstringException() {}
    explicit WstringException(const ::Ice::Wstring&);
    virtual ~WstringException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Wstring reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static WstringException __WstringException_init;

}

namespace Test2
{

typedef ::std::vector< ::Ice::Wstring> WstringSeq;

typedef ::std::map< ::Ice::Wstring, ::Ice::Wstring> WstringWStringDict;
void __writeWstringWStringDict(::IceInternal::BasicStream*, const WstringWStringDict&);
void __readWstringWStringDict(::IceInternal::BasicStream*, WstringWStringDict&);

struct WstringStruct
{
    ::Ice::Wstring s;

    bool operator==(const WstringStruct&) const;
    bool operator<(const WstringStruct&) const;
    bool operator!=(const WstringStruct& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const WstringStruct& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const WstringStruct& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const WstringStruct& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

class WstringException : public ::Ice::UserException
{
public:

    WstringException() {}
    explicit WstringException(const ::Ice::Wstring&);
    virtual ~WstringException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Wstring reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace Test1
{

class WstringClass : virtual public ::Ice::Object
{
public:

    typedef WstringClassPrx ProxyType;
    typedef WstringClassPtr PointerType;
    
    WstringClass() {}
    explicit WstringClass(const ::Ice::Wstring&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Wstring opString(const ::Ice::Wstring&, ::Ice::Wstring&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opString(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test1::WstringStruct opStruct(const ::Test1::WstringStruct&, ::Test1::WstringStruct&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStruct(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwExcept(const ::Ice::Wstring&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwExcept(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::Ice::Wstring s;
};

}

namespace Test2
{

class WstringClass : virtual public ::Ice::Object
{
public:

    typedef WstringClassPrx ProxyType;
    typedef WstringClassPtr PointerType;
    
    WstringClass() {}
    explicit WstringClass(const ::Ice::Wstring&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Wstring opString(const ::Ice::Wstring&, ::Ice::Wstring&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opString(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test2::WstringStruct opStruct(const ::Test2::WstringStruct&, ::Test2::WstringStruct&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStruct(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwExcept(const ::Ice::Wstring&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwExcept(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::Ice::Wstring s;
};

}

namespace Test1
{
#ifdef ICEE_HAS_AMI

class AMI_WstringClass_opString : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::Wstring&, const ::Ice::Wstring&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test1::WstringClassPrx&, const ::Ice::Wstring&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test1::AMI_WstringClass_opString> AMI_WstringClass_opStringPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_WstringClass_opStruct : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test1::WstringStruct&, const ::Test1::WstringStruct&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test1::WstringClassPrx&, const ::Test1::WstringStruct&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test1::AMI_WstringClass_opStruct> AMI_WstringClass_opStructPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_WstringClass_throwExcept : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test1::WstringClassPrx&, const ::Ice::Wstring&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test1::AMI_WstringClass_throwExcept> AMI_WstringClass_throwExceptPtr;
#endif

}

namespace Test2
{
#ifdef ICEE_HAS_AMI

class AMI_WstringClass_opString : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::Wstring&, const ::Ice::Wstring&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test2::WstringClassPrx&, const ::Ice::Wstring&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test2::AMI_WstringClass_opString> AMI_WstringClass_opStringPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_WstringClass_opStruct : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test2::WstringStruct&, const ::Test2::WstringStruct&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test2::WstringClassPrx&, const ::Test2::WstringStruct&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test2::AMI_WstringClass_opStruct> AMI_WstringClass_opStructPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_WstringClass_throwExcept : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test2::WstringClassPrx&, const ::Ice::Wstring&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test2::AMI_WstringClass_throwExcept> AMI_WstringClass_throwExceptPtr;
#endif

}

namespace IceProxy
{

namespace Test1
{

class WstringClass : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Wstring opString(const ::Ice::Wstring& s1, ::Ice::Wstring& s2)
    {
        return opString(s1, s2, 0);
    }
    ::Ice::Wstring opString(const ::Ice::Wstring& s1, ::Ice::Wstring& s2, const ::Ice::Context& __ctx)
    {
        return opString(s1, s2, &__ctx);
    }
    
private:

    ::Ice::Wstring opString(const ::Ice::Wstring&, ::Ice::Wstring&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opString_async(const ::Test1::AMI_WstringClass_opStringPtr&, const ::Ice::Wstring&);
    bool opString_async(const ::Test1::AMI_WstringClass_opStringPtr&, const ::Ice::Wstring&, const ::Ice::Context&);
    #endif

    ::Test1::WstringStruct opStruct(const ::Test1::WstringStruct& s1, ::Test1::WstringStruct& s2)
    {
        return opStruct(s1, s2, 0);
    }
    ::Test1::WstringStruct opStruct(const ::Test1::WstringStruct& s1, ::Test1::WstringStruct& s2, const ::Ice::Context& __ctx)
    {
        return opStruct(s1, s2, &__ctx);
    }
    
private:

    ::Test1::WstringStruct opStruct(const ::Test1::WstringStruct&, ::Test1::WstringStruct&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStruct_async(const ::Test1::AMI_WstringClass_opStructPtr&, const ::Test1::WstringStruct&);
    bool opStruct_async(const ::Test1::AMI_WstringClass_opStructPtr&, const ::Test1::WstringStruct&, const ::Ice::Context&);
    #endif

    void throwExcept(const ::Ice::Wstring& reason)
    {
        throwExcept(reason, 0);
    }
    void throwExcept(const ::Ice::Wstring& reason, const ::Ice::Context& __ctx)
    {
        throwExcept(reason, &__ctx);
    }
    
private:

    void throwExcept(const ::Ice::Wstring&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwExcept_async(const ::Test1::AMI_WstringClass_throwExceptPtr&, const ::Ice::Wstring&);
    bool throwExcept_async(const ::Test1::AMI_WstringClass_throwExceptPtr&, const ::Ice::Wstring&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<WstringClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<WstringClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<WstringClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<WstringClass> ice_twoway() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_oneway() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_batchOneway() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_datagram() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_batchDatagram() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

namespace Test2
{

class WstringClass : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Wstring opString(const ::Ice::Wstring& s1, ::Ice::Wstring& s2)
    {
        return opString(s1, s2, 0);
    }
    ::Ice::Wstring opString(const ::Ice::Wstring& s1, ::Ice::Wstring& s2, const ::Ice::Context& __ctx)
    {
        return opString(s1, s2, &__ctx);
    }
    
private:

    ::Ice::Wstring opString(const ::Ice::Wstring&, ::Ice::Wstring&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opString_async(const ::Test2::AMI_WstringClass_opStringPtr&, const ::Ice::Wstring&);
    bool opString_async(const ::Test2::AMI_WstringClass_opStringPtr&, const ::Ice::Wstring&, const ::Ice::Context&);
    #endif

    ::Test2::WstringStruct opStruct(const ::Test2::WstringStruct& s1, ::Test2::WstringStruct& s2)
    {
        return opStruct(s1, s2, 0);
    }
    ::Test2::WstringStruct opStruct(const ::Test2::WstringStruct& s1, ::Test2::WstringStruct& s2, const ::Ice::Context& __ctx)
    {
        return opStruct(s1, s2, &__ctx);
    }
    
private:

    ::Test2::WstringStruct opStruct(const ::Test2::WstringStruct&, ::Test2::WstringStruct&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStruct_async(const ::Test2::AMI_WstringClass_opStructPtr&, const ::Test2::WstringStruct&);
    bool opStruct_async(const ::Test2::AMI_WstringClass_opStructPtr&, const ::Test2::WstringStruct&, const ::Ice::Context&);
    #endif

    void throwExcept(const ::Ice::Wstring& reason)
    {
        throwExcept(reason, 0);
    }
    void throwExcept(const ::Ice::Wstring& reason, const ::Ice::Context& __ctx)
    {
        throwExcept(reason, &__ctx);
    }
    
private:

    void throwExcept(const ::Ice::Wstring&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwExcept_async(const ::Test2::AMI_WstringClass_throwExceptPtr&, const ::Ice::Wstring&);
    bool throwExcept_async(const ::Test2::AMI_WstringClass_throwExceptPtr&, const ::Ice::Wstring&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<WstringClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<WstringClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<WstringClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<WstringClass> ice_twoway() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_oneway() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_batchOneway() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_datagram() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_batchDatagram() const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<WstringClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<WstringClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
