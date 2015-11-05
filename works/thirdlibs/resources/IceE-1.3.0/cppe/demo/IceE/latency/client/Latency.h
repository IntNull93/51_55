// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Latency.ice'

#ifndef __Latency_h__
#define __Latency_h__

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

class Ping;

}

}

namespace Demo
{

class Ping;
bool operator==(const Ping&, const Ping&);
bool operator<(const Ping&, const Ping&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Demo::Ping*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Ping*);

}

namespace Demo
{

typedef ::IceInternal::Handle< ::Demo::Ping> PingPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Ping> PingPrx;

void __read(::IceInternal::BasicStream*, PingPrx&);
void __patch__PingPtr(void*, ::Ice::ObjectPtr&);

}

namespace Demo
{

}

namespace Demo
{

class Ping : virtual public ::Ice::Object
{
public:

    typedef PingPrx ProxyType;
    typedef PingPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace IceProxy
{

namespace Demo
{

class Ping : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Ping> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_secure(bool __secure) const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Ping> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Ping> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Ping> ice_twoway() const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_oneway() const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_batchOneway() const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_datagram() const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_batchDatagram() const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Ping> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Ping*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
