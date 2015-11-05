// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Throughput.ice'

#ifndef __Throughput_h__
#define __Throughput_h__

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

class Throughput;

}

}

namespace Demo
{

class Throughput;
bool operator==(const Throughput&, const Throughput&);
bool operator<(const Throughput&, const Throughput&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Demo::Throughput*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Throughput*);

}

namespace Demo
{

typedef ::IceInternal::Handle< ::Demo::Throughput> ThroughputPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Throughput> ThroughputPrx;

void __read(::IceInternal::BasicStream*, ThroughputPrx&);
void __patch__ThroughputPtr(void*, ::Ice::ObjectPtr&);

}

namespace Demo
{

typedef ::std::vector< ::Ice::Byte> ByteSeq;

const ::Ice::Int ByteSeqSize = 500000;

typedef ::std::vector< ::std::string> StringSeq;

const ::Ice::Int StringSeqSize = 50000;

struct StringDouble
{
    ::std::string s;
    ::Ice::Double d;

    bool operator==(const StringDouble&) const;
    bool operator<(const StringDouble&) const;
    bool operator!=(const StringDouble& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const StringDouble& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const StringDouble& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const StringDouble& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::Demo::StringDouble> StringDoubleSeq;
void __writeStringDoubleSeq(::IceInternal::BasicStream*, const ::Demo::StringDouble*, const ::Demo::StringDouble*);
void __readStringDoubleSeq(::IceInternal::BasicStream*, StringDoubleSeq&);

const ::Ice::Int StringDoubleSeqSize = 50000;

struct Fixed
{
    ::Ice::Int i;
    ::Ice::Int j;
    ::Ice::Double d;

    bool operator==(const Fixed&) const;
    bool operator<(const Fixed&) const;
    bool operator!=(const Fixed& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Fixed& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Fixed& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Fixed& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::Demo::Fixed> FixedSeq;
void __writeFixedSeq(::IceInternal::BasicStream*, const ::Demo::Fixed*, const ::Demo::Fixed*);
void __readFixedSeq(::IceInternal::BasicStream*, FixedSeq&);

const ::Ice::Int FixedSeqSize = 50000;

}

namespace Demo
{

class Throughput : virtual public ::Ice::Object
{
public:

    typedef ThroughputPrx ProxyType;
    typedef ThroughputPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual bool needsWarmup(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___needsWarmup(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void startWarmup(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___startWarmup(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void endWarmup(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___endWarmup(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void sendByteSeq(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sendByteSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::ByteSeq recvByteSeq(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___recvByteSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::ByteSeq echoByteSeq(const ::Demo::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___echoByteSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void sendStringSeq(const ::Demo::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sendStringSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::StringSeq recvStringSeq(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___recvStringSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::StringSeq echoStringSeq(const ::Demo::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___echoStringSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void sendStructSeq(const ::Demo::StringDoubleSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sendStructSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::StringDoubleSeq recvStructSeq(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___recvStructSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::StringDoubleSeq echoStructSeq(const ::Demo::StringDoubleSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___echoStructSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void sendFixedSeq(const ::Demo::FixedSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sendFixedSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::FixedSeq recvFixedSeq(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___recvFixedSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::FixedSeq echoFixedSeq(const ::Demo::FixedSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___echoFixedSeq(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace IceProxy
{

namespace Demo
{

class Throughput : virtual public ::IceProxy::Ice::Object
{
public:

    bool needsWarmup()
    {
        return needsWarmup(0);
    }
    bool needsWarmup(const ::Ice::Context& __ctx)
    {
        return needsWarmup(&__ctx);
    }
    
private:

    bool needsWarmup(const ::Ice::Context*);
    
public:

    void startWarmup()
    {
        startWarmup(0);
    }
    void startWarmup(const ::Ice::Context& __ctx)
    {
        startWarmup(&__ctx);
    }
    
private:

    void startWarmup(const ::Ice::Context*);
    
public:

    void endWarmup()
    {
        endWarmup(0);
    }
    void endWarmup(const ::Ice::Context& __ctx)
    {
        endWarmup(&__ctx);
    }
    
private:

    void endWarmup(const ::Ice::Context*);
    
public:

    void sendByteSeq(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& seq)
    {
        sendByteSeq(seq, 0);
    }
    void sendByteSeq(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& seq, const ::Ice::Context& __ctx)
    {
        sendByteSeq(seq, &__ctx);
    }
    
private:

    void sendByteSeq(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, const ::Ice::Context*);
    
public:

    ::Demo::ByteSeq recvByteSeq()
    {
        return recvByteSeq(0);
    }
    ::Demo::ByteSeq recvByteSeq(const ::Ice::Context& __ctx)
    {
        return recvByteSeq(&__ctx);
    }
    
private:

    ::Demo::ByteSeq recvByteSeq(const ::Ice::Context*);
    
public:

    ::Demo::ByteSeq echoByteSeq(const ::Demo::ByteSeq& seq)
    {
        return echoByteSeq(seq, 0);
    }
    ::Demo::ByteSeq echoByteSeq(const ::Demo::ByteSeq& seq, const ::Ice::Context& __ctx)
    {
        return echoByteSeq(seq, &__ctx);
    }
    
private:

    ::Demo::ByteSeq echoByteSeq(const ::Demo::ByteSeq&, const ::Ice::Context*);
    
public:

    void sendStringSeq(const ::Demo::StringSeq& seq)
    {
        sendStringSeq(seq, 0);
    }
    void sendStringSeq(const ::Demo::StringSeq& seq, const ::Ice::Context& __ctx)
    {
        sendStringSeq(seq, &__ctx);
    }
    
private:

    void sendStringSeq(const ::Demo::StringSeq&, const ::Ice::Context*);
    
public:

    ::Demo::StringSeq recvStringSeq()
    {
        return recvStringSeq(0);
    }
    ::Demo::StringSeq recvStringSeq(const ::Ice::Context& __ctx)
    {
        return recvStringSeq(&__ctx);
    }
    
private:

    ::Demo::StringSeq recvStringSeq(const ::Ice::Context*);
    
public:

    ::Demo::StringSeq echoStringSeq(const ::Demo::StringSeq& seq)
    {
        return echoStringSeq(seq, 0);
    }
    ::Demo::StringSeq echoStringSeq(const ::Demo::StringSeq& seq, const ::Ice::Context& __ctx)
    {
        return echoStringSeq(seq, &__ctx);
    }
    
private:

    ::Demo::StringSeq echoStringSeq(const ::Demo::StringSeq&, const ::Ice::Context*);
    
public:

    void sendStructSeq(const ::Demo::StringDoubleSeq& seq)
    {
        sendStructSeq(seq, 0);
    }
    void sendStructSeq(const ::Demo::StringDoubleSeq& seq, const ::Ice::Context& __ctx)
    {
        sendStructSeq(seq, &__ctx);
    }
    
private:

    void sendStructSeq(const ::Demo::StringDoubleSeq&, const ::Ice::Context*);
    
public:

    ::Demo::StringDoubleSeq recvStructSeq()
    {
        return recvStructSeq(0);
    }
    ::Demo::StringDoubleSeq recvStructSeq(const ::Ice::Context& __ctx)
    {
        return recvStructSeq(&__ctx);
    }
    
private:

    ::Demo::StringDoubleSeq recvStructSeq(const ::Ice::Context*);
    
public:

    ::Demo::StringDoubleSeq echoStructSeq(const ::Demo::StringDoubleSeq& seq)
    {
        return echoStructSeq(seq, 0);
    }
    ::Demo::StringDoubleSeq echoStructSeq(const ::Demo::StringDoubleSeq& seq, const ::Ice::Context& __ctx)
    {
        return echoStructSeq(seq, &__ctx);
    }
    
private:

    ::Demo::StringDoubleSeq echoStructSeq(const ::Demo::StringDoubleSeq&, const ::Ice::Context*);
    
public:

    void sendFixedSeq(const ::Demo::FixedSeq& seq)
    {
        sendFixedSeq(seq, 0);
    }
    void sendFixedSeq(const ::Demo::FixedSeq& seq, const ::Ice::Context& __ctx)
    {
        sendFixedSeq(seq, &__ctx);
    }
    
private:

    void sendFixedSeq(const ::Demo::FixedSeq&, const ::Ice::Context*);
    
public:

    ::Demo::FixedSeq recvFixedSeq()
    {
        return recvFixedSeq(0);
    }
    ::Demo::FixedSeq recvFixedSeq(const ::Ice::Context& __ctx)
    {
        return recvFixedSeq(&__ctx);
    }
    
private:

    ::Demo::FixedSeq recvFixedSeq(const ::Ice::Context*);
    
public:

    ::Demo::FixedSeq echoFixedSeq(const ::Demo::FixedSeq& seq)
    {
        return echoFixedSeq(seq, 0);
    }
    ::Demo::FixedSeq echoFixedSeq(const ::Demo::FixedSeq& seq, const ::Ice::Context& __ctx)
    {
        return echoFixedSeq(seq, &__ctx);
    }
    
private:

    ::Demo::FixedSeq echoFixedSeq(const ::Demo::FixedSeq&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Throughput> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_secure(bool __secure) const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Throughput> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Throughput> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Throughput> ice_twoway() const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_oneway() const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_batchOneway() const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_datagram() const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_batchDatagram() const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Throughput> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Throughput*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
