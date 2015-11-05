// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Test.ice'

#ifndef __Test_h__
#define __Test_h__

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

namespace Test
{

class MyObject;

}

}

namespace Test
{

class MyObject;
bool operator==(const MyObject&, const MyObject&);
bool operator<(const MyObject&, const MyObject&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::MyObject*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MyObject*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::MyObject> MyObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MyObject> MyObjectPrx;

void __read(::IceInternal::BasicStream*, MyObjectPrx&);
void __patch__MyObjectPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

class InvalidInputException : public ::Ice::UserException
{
public:

    InvalidInputException() {}
    explicit InvalidInputException(const ::std::string&);
    virtual ~InvalidInputException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string message;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static InvalidInputException __InvalidInputException_init;

class RetryException : public ::Ice::LocalException
{
public:

    RetryException(const char*, int);
    virtual ~RetryException() throw();

    virtual ::std::string ice_name() const;
    virtual ::std::string  toString() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;
};

}

namespace Test
{

class MyObject : virtual public ::Ice::Object
{
public:

    typedef MyObjectPrx ProxyType;
    typedef MyObjectPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___add(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Int addWithRetry(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___addWithRetry(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Int badAdd(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___badAdd(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Int notExistAdd(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___notExistAdd(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Int badSystemAdd(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___badSystemAdd(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace IceProxy
{

namespace Test
{

class MyObject : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int add(::Ice::Int x, ::Ice::Int y)
    {
        return add(x, y, 0);
    }
    ::Ice::Int add(::Ice::Int x, ::Ice::Int y, const ::Ice::Context& __ctx)
    {
        return add(x, y, &__ctx);
    }
    
private:

    ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int addWithRetry(::Ice::Int x, ::Ice::Int y)
    {
        return addWithRetry(x, y, 0);
    }
    ::Ice::Int addWithRetry(::Ice::Int x, ::Ice::Int y, const ::Ice::Context& __ctx)
    {
        return addWithRetry(x, y, &__ctx);
    }
    
private:

    ::Ice::Int addWithRetry(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int badAdd(::Ice::Int x, ::Ice::Int y)
    {
        return badAdd(x, y, 0);
    }
    ::Ice::Int badAdd(::Ice::Int x, ::Ice::Int y, const ::Ice::Context& __ctx)
    {
        return badAdd(x, y, &__ctx);
    }
    
private:

    ::Ice::Int badAdd(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int notExistAdd(::Ice::Int x, ::Ice::Int y)
    {
        return notExistAdd(x, y, 0);
    }
    ::Ice::Int notExistAdd(::Ice::Int x, ::Ice::Int y, const ::Ice::Context& __ctx)
    {
        return notExistAdd(x, y, &__ctx);
    }
    
private:

    ::Ice::Int notExistAdd(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int badSystemAdd(::Ice::Int x, ::Ice::Int y)
    {
        return badSystemAdd(x, y, 0);
    }
    ::Ice::Int badSystemAdd(::Ice::Int x, ::Ice::Int y, const ::Ice::Context& __ctx)
    {
        return badSystemAdd(x, y, &__ctx);
    }
    
private:

    ::Ice::Int badSystemAdd(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MyObject> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_secure(bool __secure) const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<MyObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<MyObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<MyObject> ice_twoway() const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_oneway() const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_batchOneway() const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_datagram() const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_batchDatagram() const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyObject> ice_timeout(int __timeout) const
    {
        return dynamic_cast<MyObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
