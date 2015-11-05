// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Nested.ice'

#ifndef __Nested_h__
#define __Nested_h__

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

namespace Demo
{

class Nested;

}

}

namespace Demo
{

class Nested;
bool operator==(const Nested&, const Nested&);
bool operator<(const Nested&, const Nested&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Demo::Nested*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Nested*);

}

namespace Demo
{

typedef ::IceInternal::Handle< ::Demo::Nested> NestedPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Nested> NestedPrx;

void __read(::IceInternal::BasicStream*, NestedPrx&);
void __patch__NestedPtr(void*, ::Ice::ObjectPtr&);

}

namespace Demo
{

}

namespace Demo
{

class Nested : virtual public ::Ice::Object
{
public:

    typedef NestedPrx ProxyType;
    typedef NestedPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void nestedCall(::Ice::Int, const ::Demo::NestedPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___nestedCall(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace Demo
{

class Nested : virtual public ::IceProxy::Ice::Object
{
public:

    void nestedCall(::Ice::Int level, const ::Demo::NestedPrx& proxy)
    {
        nestedCall(level, proxy, 0);
    }
    void nestedCall(::Ice::Int level, const ::Demo::NestedPrx& proxy, const ::Ice::Context& __ctx)
    {
        nestedCall(level, proxy, &__ctx);
    }
    
private:

    void nestedCall(::Ice::Int, const ::Demo::NestedPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Nested> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_secure(bool __secure) const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Nested> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Nested> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Nested> ice_twoway() const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_oneway() const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_batchOneway() const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_datagram() const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_batchDatagram() const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Nested> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Nested*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
