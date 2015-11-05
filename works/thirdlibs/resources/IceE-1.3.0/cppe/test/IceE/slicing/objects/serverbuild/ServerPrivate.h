// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `serverbuild/ServerPrivate.ice'

#ifndef __ServerPrivate_h__
#define __ServerPrivate_h__

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

class SBSUnknownDerived;

class SUnknown;

class D2;

class D4;

}

}

namespace Test
{

class SBSUnknownDerived;
bool operator==(const SBSUnknownDerived&, const SBSUnknownDerived&);
bool operator<(const SBSUnknownDerived&, const SBSUnknownDerived&);

class SUnknown;
bool operator==(const SUnknown&, const SUnknown&);
bool operator<(const SUnknown&, const SUnknown&);

class D2;
bool operator==(const D2&, const D2&);
bool operator<(const D2&, const D2&);

class D4;
bool operator==(const D4&, const D4&);
bool operator<(const D4&, const D4&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::SBSUnknownDerived*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::SBSUnknownDerived*);

::Ice::Object* upCast(::Test::SUnknown*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::SUnknown*);

::Ice::Object* upCast(::Test::D2*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::D2*);

::Ice::Object* upCast(::Test::D4*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::D4*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::SBSUnknownDerived> SBSUnknownDerivedPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::SBSUnknownDerived> SBSUnknownDerivedPrx;

void __read(::IceInternal::BasicStream*, SBSUnknownDerivedPrx&);
void __patch__SBSUnknownDerivedPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::SUnknown> SUnknownPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::SUnknown> SUnknownPrx;

void __read(::IceInternal::BasicStream*, SUnknownPrx&);
void __patch__SUnknownPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::D2> D2Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::D2> D2Prx;

void __read(::IceInternal::BasicStream*, D2Prx&);
void __patch__D2Ptr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::D4> D4Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::D4> D4Prx;

void __read(::IceInternal::BasicStream*, D4Prx&);
void __patch__D4Ptr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

class UnknownDerivedException : public ::Test::BaseException
{
public:

    UnknownDerivedException() {}
    UnknownDerivedException(const ::std::string&, const ::Test::BPtr&, const ::std::string&, const ::Test::D2Ptr&);
    virtual ~UnknownDerivedException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string sude;
    ::Test::D2Ptr pd2;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static UnknownDerivedException __UnknownDerivedException_init;

}

namespace Test
{

class SBSUnknownDerived : virtual public ::Test::SBase
{
public:

    typedef SBSUnknownDerivedPrx ProxyType;
    typedef SBSUnknownDerivedPtr PointerType;
    
    SBSUnknownDerived() {}
    SBSUnknownDerived(const ::std::string&, const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~SBSUnknownDerived() {}


public:

    ::std::string sbsud;
};

class SUnknown : virtual public ::Ice::Object
{
public:

    typedef SUnknownPrx ProxyType;
    typedef SUnknownPtr PointerType;
    
    SUnknown() {}
    explicit SUnknown(const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~SUnknown() {}


public:

    ::std::string su;
};

class D2 : virtual public ::Test::B
{
public:

    typedef D2Prx ProxyType;
    typedef D2Ptr PointerType;
    
    D2() {}
    D2(const ::std::string&, const ::Test::BPtr&, const ::std::string&, const ::Test::BPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~D2() {}


public:

    ::std::string sd2;
    ::Test::BPtr pd2;
};

class D4 : virtual public ::Test::B
{
public:

    typedef D4Prx ProxyType;
    typedef D4Ptr PointerType;
    
    D4() {}
    D4(const ::std::string&, const ::Test::BPtr&, const ::Test::BPtr&, const ::Test::BPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~D4() {}


public:

    ::Test::BPtr p1;
    ::Test::BPtr p2;
};

}

namespace IceProxy
{

namespace Test
{

class SBSUnknownDerived : virtual public ::IceProxy::Test::SBase
{
public:
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_secure(bool __secure) const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_twoway() const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_oneway() const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_batchOneway() const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_datagram() const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_batchDatagram() const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SBSUnknownDerived> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SBSUnknownDerived*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SUnknown : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<SUnknown> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_secure(bool __secure) const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SUnknown> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SUnknown> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SUnknown> ice_twoway() const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_oneway() const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_batchOneway() const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_datagram() const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_batchDatagram() const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SUnknown> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SUnknown*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class D2 : virtual public ::IceProxy::Test::B
{
public:
    
    ::IceInternal::ProxyHandle<D2> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_secure(bool __secure) const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<D2> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<D2> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<D2> ice_twoway() const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_oneway() const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_batchOneway() const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_datagram() const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_batchDatagram() const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<D2> ice_timeout(int __timeout) const
    {
        return dynamic_cast<D2*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class D4 : virtual public ::IceProxy::Test::B
{
public:
    
    ::IceInternal::ProxyHandle<D4> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_secure(bool __secure) const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<D4> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<D4> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<D4> ice_twoway() const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_oneway() const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_batchOneway() const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_datagram() const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_batchDatagram() const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<D4> ice_timeout(int __timeout) const
    {
        return dynamic_cast<D4*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
