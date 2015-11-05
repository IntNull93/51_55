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

    virtual ::std::string getName(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);
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

    ::std::string getName()
    {
        return getName(0);
    }
    ::std::string getName(const ::Ice::Context& __ctx)
    {
        return getName(&__ctx);
    }
    
private:

    ::std::string getName(const ::Ice::Context*);
    
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
