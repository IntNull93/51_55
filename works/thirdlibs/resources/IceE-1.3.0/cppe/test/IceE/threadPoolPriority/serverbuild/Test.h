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

class Priority;

}

}

namespace Test
{

class Priority;
bool operator==(const Priority&, const Priority&);
bool operator<(const Priority&, const Priority&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Priority*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Priority*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Priority> PriorityPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Priority> PriorityPrx;

void __read(::IceInternal::BasicStream*, PriorityPrx&);
void __patch__PriorityPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

}

namespace Test
{

class Priority : virtual public ::Ice::Object
{
public:

    typedef PriorityPrx ProxyType;
    typedef PriorityPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Int getPriority(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getPriority(::IceInternal::Incoming&, const ::Ice::Current&);
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

class Priority : virtual public ::IceProxy::Ice::Object
{
public:

    void shutdown()
    {
        shutdown(0);
    }
    void shutdown(const ::Ice::Context& __ctx)
    {
        shutdown(&__ctx);
    }
    
private:

    void shutdown(const ::Ice::Context*);
    
public:

    ::Ice::Int getPriority()
    {
        return getPriority(0);
    }
    ::Ice::Int getPriority(const ::Ice::Context& __ctx)
    {
        return getPriority(&__ctx);
    }
    
private:

    ::Ice::Int getPriority(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Priority> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_secure(bool __secure) const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Priority> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Priority> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Priority> ice_twoway() const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_oneway() const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_batchOneway() const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_datagram() const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_batchDatagram() const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Priority> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Priority*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
