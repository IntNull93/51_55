// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `clientbuild/Forward.ice'

#ifndef __Forward_h__
#define __Forward_h__

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

class Forward;

class Hidden;

}

}

namespace Test
{

class Forward;
bool operator==(const Forward&, const Forward&);
bool operator<(const Forward&, const Forward&);

class Hidden;
bool operator==(const Hidden&, const Hidden&);
bool operator<(const Hidden&, const Hidden&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Forward*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Forward*);

::Ice::Object* upCast(::Test::Hidden*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Hidden*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Forward> ForwardPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Forward> ForwardPrx;

void __read(::IceInternal::BasicStream*, ForwardPrx&);
void __patch__ForwardPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::Hidden> HiddenPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Hidden> HiddenPrx;

void __read(::IceInternal::BasicStream*, HiddenPrx&);
void __patch__HiddenPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

}

namespace Test
{

class Hidden : virtual public ::Ice::Object
{
public:

    typedef HiddenPrx ProxyType;
    typedef HiddenPtr PointerType;
    
    Hidden() {}
    explicit Hidden(const ::Test::ForwardPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Hidden() {}


public:

    ::Test::ForwardPtr f;
};

class Forward : virtual public ::Ice::Object
{
public:

    typedef ForwardPrx ProxyType;
    typedef ForwardPtr PointerType;
    
    Forward() {}
    explicit Forward(const ::Test::HiddenPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Forward() {}


public:

    ::Test::HiddenPtr h;
};

}

namespace IceProxy
{

namespace Test
{

class Hidden : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Hidden> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_secure(bool __secure) const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Hidden> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Hidden> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Hidden> ice_twoway() const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_oneway() const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_batchOneway() const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_datagram() const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_batchDatagram() const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Hidden> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Hidden*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Forward : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Forward> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_secure(bool __secure) const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Forward> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Forward> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Forward> ice_twoway() const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_oneway() const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_batchOneway() const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_datagram() const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_batchDatagram() const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Forward> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Forward*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
