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

namespace MA
{

class IA;

class CA;

}

namespace MB
{

class IB1;

class IB2;

class CB;

}

namespace MA
{

class IC;

class CC;

class CD;

}

class Initial;

}

}

namespace Test
{

namespace MA
{

class IA;
bool operator==(const IA&, const IA&);
bool operator<(const IA&, const IA&);

class CA;
bool operator==(const CA&, const CA&);
bool operator<(const CA&, const CA&);

}

namespace MB
{

class IB1;
bool operator==(const IB1&, const IB1&);
bool operator<(const IB1&, const IB1&);

class IB2;
bool operator==(const IB2&, const IB2&);
bool operator<(const IB2&, const IB2&);

class CB;
bool operator==(const CB&, const CB&);
bool operator<(const CB&, const CB&);

}

namespace MA
{

class IC;
bool operator==(const IC&, const IC&);
bool operator<(const IC&, const IC&);

class CC;
bool operator==(const CC&, const CC&);
bool operator<(const CC&, const CC&);

class CD;
bool operator==(const CD&, const CD&);
bool operator<(const CD&, const CD&);

}

class Initial;
bool operator==(const Initial&, const Initial&);
bool operator<(const Initial&, const Initial&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::MA::IA*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MA::IA*);

::Ice::Object* upCast(::Test::MA::CA*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MA::CA*);

::Ice::Object* upCast(::Test::MB::IB1*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MB::IB1*);

::Ice::Object* upCast(::Test::MB::IB2*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MB::IB2*);

::Ice::Object* upCast(::Test::MB::CB*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MB::CB*);

::Ice::Object* upCast(::Test::MA::IC*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MA::IC*);

::Ice::Object* upCast(::Test::MA::CC*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MA::CC*);

::Ice::Object* upCast(::Test::MA::CD*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MA::CD*);

::Ice::Object* upCast(::Test::Initial*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Initial*);

}

namespace Test
{

namespace MA
{

typedef ::IceInternal::Handle< ::Test::MA::IA> IAPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MA::IA> IAPrx;

void __read(::IceInternal::BasicStream*, IAPrx&);
void __patch__IAPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MA::CA> CAPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MA::CA> CAPrx;

void __read(::IceInternal::BasicStream*, CAPrx&);
void __patch__CAPtr(void*, ::Ice::ObjectPtr&);

}

namespace MB
{

typedef ::IceInternal::Handle< ::Test::MB::IB1> IB1Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MB::IB1> IB1Prx;

void __read(::IceInternal::BasicStream*, IB1Prx&);
void __patch__IB1Ptr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MB::IB2> IB2Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MB::IB2> IB2Prx;

void __read(::IceInternal::BasicStream*, IB2Prx&);
void __patch__IB2Ptr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MB::CB> CBPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MB::CB> CBPrx;

void __read(::IceInternal::BasicStream*, CBPrx&);
void __patch__CBPtr(void*, ::Ice::ObjectPtr&);

}

namespace MA
{

typedef ::IceInternal::Handle< ::Test::MA::IC> ICPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MA::IC> ICPrx;

void __read(::IceInternal::BasicStream*, ICPrx&);
void __patch__ICPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MA::CC> CCPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MA::CC> CCPrx;

void __read(::IceInternal::BasicStream*, CCPrx&);
void __patch__CCPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MA::CD> CDPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MA::CD> CDPrx;

void __read(::IceInternal::BasicStream*, CDPrx&);
void __patch__CDPtr(void*, ::Ice::ObjectPtr&);

}

typedef ::IceInternal::Handle< ::Test::Initial> InitialPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Initial> InitialPrx;

void __read(::IceInternal::BasicStream*, InitialPrx&);
void __patch__InitialPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

namespace MA
{

}

namespace MB
{

}

namespace MA
{

}

}

namespace Test
{

namespace MA
{

class IA : virtual public ::Ice::Object
{
public:

    typedef IAPrx ProxyType;
    typedef IAPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MA::IAPrx iaop(const ::Test::MA::IAPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___iaop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class CA : virtual public ::Ice::Object
{
public:

    typedef CAPrx ProxyType;
    typedef CAPtr PointerType;
    
    CA() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MA::CAPrx caop(const ::Test::MA::CAPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___caop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace MB
{

class IB1 : virtual public ::Test::MA::IA
{
public:

    typedef IB1Prx ProxyType;
    typedef IB1Ptr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MB::IB1Prx ib1op(const ::Test::MB::IB1Prx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___ib1op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class IB2 : virtual public ::Test::MA::IA
{
public:

    typedef IB2Prx ProxyType;
    typedef IB2Ptr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MB::IB2Prx ib2op(const ::Test::MB::IB2Prx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___ib2op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class CB : virtual public ::Test::MA::CA
{
public:

    typedef CBPrx ProxyType;
    typedef CBPtr PointerType;
    
    CB() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MB::CBPrx cbop(const ::Test::MB::CBPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___cbop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace MA
{

class IC : virtual public ::Test::MB::IB1,
           virtual public ::Test::MB::IB2
{
public:

    typedef ICPrx ProxyType;
    typedef ICPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MA::ICPrx icop(const ::Test::MA::ICPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___icop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class CC : virtual public ::Test::MB::CB
{
public:

    typedef CCPrx ProxyType;
    typedef CCPtr PointerType;
    
    CC() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MA::CCPrx ccop(const ::Test::MA::CCPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___ccop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class CD : virtual public ::Test::MA::CC,
           virtual public ::Test::MB::IB1,
           virtual public ::Test::MB::IB2
{
public:

    typedef CDPrx ProxyType;
    typedef CDPtr PointerType;
    
    CD() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::MA::CDPrx cdop(const ::Test::MA::CDPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___cdop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

class Initial : virtual public ::Ice::Object
{
public:

    typedef InitialPrx ProxyType;
    typedef InitialPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MA::CAPrx caop(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___caop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MB::CBPrx cbop(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___cbop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MA::CCPrx ccop(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___ccop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MA::CDPrx cdop(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___cdop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MA::IAPrx iaop(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___iaop(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MB::IB1Prx ib1op(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___ib1op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MB::IB2Prx ib2op(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___ib2op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MA::ICPrx icop(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___icop(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace MA
{

class IA : virtual public ::IceProxy::Ice::Object
{
public:

    ::Test::MA::IAPrx iaop(const ::Test::MA::IAPrx& p)
    {
        return iaop(p, 0);
    }
    ::Test::MA::IAPrx iaop(const ::Test::MA::IAPrx& p, const ::Ice::Context& __ctx)
    {
        return iaop(p, &__ctx);
    }
    
private:

    ::Test::MA::IAPrx iaop(const ::Test::MA::IAPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IA> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_secure(bool __secure) const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<IA> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<IA> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<IA> ice_twoway() const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_oneway() const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_batchOneway() const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_datagram() const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_batchDatagram() const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<IA> ice_timeout(int __timeout) const
    {
        return dynamic_cast<IA*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CA : virtual public ::IceProxy::Ice::Object
{
public:

    ::Test::MA::CAPrx caop(const ::Test::MA::CAPrx& p)
    {
        return caop(p, 0);
    }
    ::Test::MA::CAPrx caop(const ::Test::MA::CAPrx& p, const ::Ice::Context& __ctx)
    {
        return caop(p, &__ctx);
    }
    
private:

    ::Test::MA::CAPrx caop(const ::Test::MA::CAPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CA> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_secure(bool __secure) const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CA> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CA> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CA> ice_twoway() const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_oneway() const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_batchOneway() const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_datagram() const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_batchDatagram() const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CA> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CA*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

namespace MB
{

class IB1 : virtual public ::IceProxy::Test::MA::IA
{
public:

    ::Test::MB::IB1Prx ib1op(const ::Test::MB::IB1Prx& p)
    {
        return ib1op(p, 0);
    }
    ::Test::MB::IB1Prx ib1op(const ::Test::MB::IB1Prx& p, const ::Ice::Context& __ctx)
    {
        return ib1op(p, &__ctx);
    }
    
private:

    ::Test::MB::IB1Prx ib1op(const ::Test::MB::IB1Prx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IB1> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_secure(bool __secure) const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<IB1> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<IB1> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<IB1> ice_twoway() const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_oneway() const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_batchOneway() const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_datagram() const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_batchDatagram() const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<IB1> ice_timeout(int __timeout) const
    {
        return dynamic_cast<IB1*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class IB2 : virtual public ::IceProxy::Test::MA::IA
{
public:

    ::Test::MB::IB2Prx ib2op(const ::Test::MB::IB2Prx& p)
    {
        return ib2op(p, 0);
    }
    ::Test::MB::IB2Prx ib2op(const ::Test::MB::IB2Prx& p, const ::Ice::Context& __ctx)
    {
        return ib2op(p, &__ctx);
    }
    
private:

    ::Test::MB::IB2Prx ib2op(const ::Test::MB::IB2Prx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IB2> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_secure(bool __secure) const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<IB2> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<IB2> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<IB2> ice_twoway() const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_oneway() const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_batchOneway() const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_datagram() const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_batchDatagram() const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<IB2> ice_timeout(int __timeout) const
    {
        return dynamic_cast<IB2*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CB : virtual public ::IceProxy::Test::MA::CA
{
public:

    ::Test::MB::CBPrx cbop(const ::Test::MB::CBPrx& p)
    {
        return cbop(p, 0);
    }
    ::Test::MB::CBPrx cbop(const ::Test::MB::CBPrx& p, const ::Ice::Context& __ctx)
    {
        return cbop(p, &__ctx);
    }
    
private:

    ::Test::MB::CBPrx cbop(const ::Test::MB::CBPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CB> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_secure(bool __secure) const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CB> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CB> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CB> ice_twoway() const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_oneway() const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_batchOneway() const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_datagram() const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_batchDatagram() const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CB> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CB*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

namespace MA
{

class IC : virtual public ::IceProxy::Test::MB::IB1,
           virtual public ::IceProxy::Test::MB::IB2
{
public:

    ::Test::MA::ICPrx icop(const ::Test::MA::ICPrx& p)
    {
        return icop(p, 0);
    }
    ::Test::MA::ICPrx icop(const ::Test::MA::ICPrx& p, const ::Ice::Context& __ctx)
    {
        return icop(p, &__ctx);
    }
    
private:

    ::Test::MA::ICPrx icop(const ::Test::MA::ICPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IC> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_secure(bool __secure) const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<IC> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<IC> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<IC> ice_twoway() const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_oneway() const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_batchOneway() const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_datagram() const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_batchDatagram() const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<IC> ice_timeout(int __timeout) const
    {
        return dynamic_cast<IC*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CC : virtual public ::IceProxy::Test::MB::CB
{
public:

    ::Test::MA::CCPrx ccop(const ::Test::MA::CCPrx& p)
    {
        return ccop(p, 0);
    }
    ::Test::MA::CCPrx ccop(const ::Test::MA::CCPrx& p, const ::Ice::Context& __ctx)
    {
        return ccop(p, &__ctx);
    }
    
private:

    ::Test::MA::CCPrx ccop(const ::Test::MA::CCPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CC> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_secure(bool __secure) const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CC> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CC> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CC> ice_twoway() const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_oneway() const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_batchOneway() const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_datagram() const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_batchDatagram() const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CC> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CC*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CD : virtual public ::IceProxy::Test::MA::CC,
           virtual public ::IceProxy::Test::MB::IB1,
           virtual public ::IceProxy::Test::MB::IB2
{
public:

    ::Test::MA::CDPrx cdop(const ::Test::MA::CDPrx& p)
    {
        return cdop(p, 0);
    }
    ::Test::MA::CDPrx cdop(const ::Test::MA::CDPrx& p, const ::Ice::Context& __ctx)
    {
        return cdop(p, &__ctx);
    }
    
private:

    ::Test::MA::CDPrx cdop(const ::Test::MA::CDPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CD> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_secure(bool __secure) const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CD> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CD> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CD> ice_twoway() const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_oneway() const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_batchOneway() const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_datagram() const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_batchDatagram() const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CD> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CD*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

class Initial : virtual public ::IceProxy::Ice::Object
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

    ::Test::MA::CAPrx caop()
    {
        return caop(0);
    }
    ::Test::MA::CAPrx caop(const ::Ice::Context& __ctx)
    {
        return caop(&__ctx);
    }
    
private:

    ::Test::MA::CAPrx caop(const ::Ice::Context*);
    
public:

    ::Test::MB::CBPrx cbop()
    {
        return cbop(0);
    }
    ::Test::MB::CBPrx cbop(const ::Ice::Context& __ctx)
    {
        return cbop(&__ctx);
    }
    
private:

    ::Test::MB::CBPrx cbop(const ::Ice::Context*);
    
public:

    ::Test::MA::CCPrx ccop()
    {
        return ccop(0);
    }
    ::Test::MA::CCPrx ccop(const ::Ice::Context& __ctx)
    {
        return ccop(&__ctx);
    }
    
private:

    ::Test::MA::CCPrx ccop(const ::Ice::Context*);
    
public:

    ::Test::MA::CDPrx cdop()
    {
        return cdop(0);
    }
    ::Test::MA::CDPrx cdop(const ::Ice::Context& __ctx)
    {
        return cdop(&__ctx);
    }
    
private:

    ::Test::MA::CDPrx cdop(const ::Ice::Context*);
    
public:

    ::Test::MA::IAPrx iaop()
    {
        return iaop(0);
    }
    ::Test::MA::IAPrx iaop(const ::Ice::Context& __ctx)
    {
        return iaop(&__ctx);
    }
    
private:

    ::Test::MA::IAPrx iaop(const ::Ice::Context*);
    
public:

    ::Test::MB::IB1Prx ib1op()
    {
        return ib1op(0);
    }
    ::Test::MB::IB1Prx ib1op(const ::Ice::Context& __ctx)
    {
        return ib1op(&__ctx);
    }
    
private:

    ::Test::MB::IB1Prx ib1op(const ::Ice::Context*);
    
public:

    ::Test::MB::IB2Prx ib2op()
    {
        return ib2op(0);
    }
    ::Test::MB::IB2Prx ib2op(const ::Ice::Context& __ctx)
    {
        return ib2op(&__ctx);
    }
    
private:

    ::Test::MB::IB2Prx ib2op(const ::Ice::Context*);
    
public:

    ::Test::MA::ICPrx icop()
    {
        return icop(0);
    }
    ::Test::MA::ICPrx icop(const ::Ice::Context& __ctx)
    {
        return icop(&__ctx);
    }
    
private:

    ::Test::MA::ICPrx icop(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Initial> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_secure(bool __secure) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Initial> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Initial> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Initial> ice_twoway() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_oneway() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_batchOneway() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_datagram() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_batchDatagram() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
