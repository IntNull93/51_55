// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `clientbuild/ClientPrivate.ice'

#ifndef __ClientPrivate_h__
#define __ClientPrivate_h__

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
#include <Test.h>
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

class D3;

}

}

namespace Test
{

class D3;
bool operator==(const D3&, const D3&);
bool operator<(const D3&, const D3&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::D3*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::D3*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::D3> D3Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::D3> D3Prx;

void __read(::IceInternal::BasicStream*, D3Prx&);
void __patch__D3Ptr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

}

namespace Test
{

class D3 : virtual public ::Test::B
{
public:

    typedef D3Prx ProxyType;
    typedef D3Ptr PointerType;
    
    D3() {}
    D3(const ::std::string&, const ::Test::BPtr&, const ::std::string&, const ::Test::BPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~D3() {}


public:

    ::std::string sd3;
    ::Test::BPtr pd3;
};

}

namespace IceProxy
{

namespace Test
{

class D3 : virtual public ::IceProxy::Test::B
{
public:
    
    ::IceInternal::ProxyHandle<D3> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_secure(bool __secure) const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<D3> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<D3> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<D3> ice_twoway() const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_oneway() const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_batchOneway() const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_datagram() const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_batchDatagram() const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<D3> ice_timeout(int __timeout) const
    {
        return dynamic_cast<D3*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
