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

class Timeout;

}

}

namespace Test
{

class Timeout;
bool operator==(const Timeout&, const Timeout&);
bool operator<(const Timeout&, const Timeout&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Timeout*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Timeout*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Timeout> TimeoutPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Timeout> TimeoutPrx;

void __read(::IceInternal::BasicStream*, TimeoutPrx&);
void __patch__TimeoutPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

typedef ::std::vector< ::Ice::Byte> ByteSeq;

}

namespace Test
{

class Timeout : virtual public ::Ice::Object
{
public:

    typedef TimeoutPrx ProxyType;
    typedef TimeoutPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void op(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void sendData(const ::Test::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sendData(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void sleep(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sleep(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void holdAdapter(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___holdAdapter(::IceInternal::Incoming&, const ::Ice::Current&);
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

class AMI_Timeout_op : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TimeoutPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Timeout_op> AMI_Timeout_opPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Timeout_sendData : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TimeoutPrx&, const ::Test::ByteSeq&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Timeout_sendData> AMI_Timeout_sendDataPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Timeout_sleep : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TimeoutPrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Timeout_sleep> AMI_Timeout_sleepPtr;
#endif

}

namespace IceProxy
{

namespace Test
{

class Timeout : virtual public ::IceProxy::Ice::Object
{
public:

    void op()
    {
        op(0);
    }
    void op(const ::Ice::Context& __ctx)
    {
        op(&__ctx);
    }
    
private:

    void op(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool op_async(const ::Test::AMI_Timeout_opPtr&);
    bool op_async(const ::Test::AMI_Timeout_opPtr&, const ::Ice::Context&);
    #endif

    void sendData(const ::Test::ByteSeq& seq)
    {
        sendData(seq, 0);
    }
    void sendData(const ::Test::ByteSeq& seq, const ::Ice::Context& __ctx)
    {
        sendData(seq, &__ctx);
    }
    
private:

    void sendData(const ::Test::ByteSeq&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool sendData_async(const ::Test::AMI_Timeout_sendDataPtr&, const ::Test::ByteSeq&);
    bool sendData_async(const ::Test::AMI_Timeout_sendDataPtr&, const ::Test::ByteSeq&, const ::Ice::Context&);
    #endif

    void sleep(::Ice::Int to)
    {
        sleep(to, 0);
    }
    void sleep(::Ice::Int to, const ::Ice::Context& __ctx)
    {
        sleep(to, &__ctx);
    }
    
private:

    void sleep(::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool sleep_async(const ::Test::AMI_Timeout_sleepPtr&, ::Ice::Int);
    bool sleep_async(const ::Test::AMI_Timeout_sleepPtr&, ::Ice::Int, const ::Ice::Context&);
    #endif

    void holdAdapter(::Ice::Int to)
    {
        holdAdapter(to, 0);
    }
    void holdAdapter(::Ice::Int to, const ::Ice::Context& __ctx)
    {
        holdAdapter(to, &__ctx);
    }
    
private:

    void holdAdapter(::Ice::Int, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Timeout> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_secure(bool __secure) const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Timeout> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Timeout> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Timeout> ice_twoway() const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_oneway() const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_batchOneway() const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_datagram() const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_batchDatagram() const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Timeout> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Timeout*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
