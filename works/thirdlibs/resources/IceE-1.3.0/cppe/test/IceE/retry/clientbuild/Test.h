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
#ifdef ICEE_HAS_AMI
#   include <IceE/OutgoingAsync.h>
#endif
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

class Retry;

}

}

namespace Test
{

class Retry;
bool operator==(const Retry&, const Retry&);
bool operator<(const Retry&, const Retry&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Retry*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Retry*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Retry> RetryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Retry> RetryPrx;

void __read(::IceInternal::BasicStream*, RetryPrx&);
void __patch__RetryPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

}

namespace Test
{

class Retry : virtual public ::Ice::Object
{
public:

    typedef RetryPrx ProxyType;
    typedef RetryPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void op(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace Test
{
#ifdef ICEE_HAS_AMI

class AMI_Retry_op : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::RetryPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Retry_op> AMI_Retry_opPtr;
#endif

}

namespace IceProxy
{

namespace Test
{

class Retry : virtual public ::IceProxy::Ice::Object
{
public:

    void op(bool kill)
    {
        op(kill, 0);
    }
    void op(bool kill, const ::Ice::Context& __ctx)
    {
        op(kill, &__ctx);
    }
    
private:

    void op(bool, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool op_async(const ::Test::AMI_Retry_opPtr&, bool);
    bool op_async(const ::Test::AMI_Retry_opPtr&, bool, const ::Ice::Context&);
    #endif

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
    
    ::IceInternal::ProxyHandle<Retry> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_secure(bool __secure) const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Retry> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Retry> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Retry> ice_twoway() const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_oneway() const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_batchOneway() const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_datagram() const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_batchDatagram() const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Retry> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Retry*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
