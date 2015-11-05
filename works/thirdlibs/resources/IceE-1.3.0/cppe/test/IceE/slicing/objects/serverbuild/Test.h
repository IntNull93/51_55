// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `serverbuild/Test.ice'

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
#include <IceE/UserExceptionFactory.h>
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

class SBase;

class SBSKnownDerived;

class B;

class D1;

class SS1;

class SS2;

class Forward;

class TestIntf;

}

}

namespace Test
{

class SBase;
bool operator==(const SBase&, const SBase&);
bool operator<(const SBase&, const SBase&);

class SBSKnownDerived;
bool operator==(const SBSKnownDerived&, const SBSKnownDerived&);
bool operator<(const SBSKnownDerived&, const SBSKnownDerived&);

class B;
bool operator==(const B&, const B&);
bool operator<(const B&, const B&);

class D1;
bool operator==(const D1&, const D1&);
bool operator<(const D1&, const D1&);

class SS1;
bool operator==(const SS1&, const SS1&);
bool operator<(const SS1&, const SS1&);

class SS2;
bool operator==(const SS2&, const SS2&);
bool operator<(const SS2&, const SS2&);

class Forward;
bool operator==(const Forward&, const Forward&);
bool operator<(const Forward&, const Forward&);

class TestIntf;
bool operator==(const TestIntf&, const TestIntf&);
bool operator<(const TestIntf&, const TestIntf&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::SBase*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::SBase*);

::Ice::Object* upCast(::Test::SBSKnownDerived*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::SBSKnownDerived*);

::Ice::Object* upCast(::Test::B*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::B*);

::Ice::Object* upCast(::Test::D1*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::D1*);

::Ice::Object* upCast(::Test::SS1*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::SS1*);

::Ice::Object* upCast(::Test::SS2*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::SS2*);

::Ice::Object* upCast(::Test::Forward*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Forward*);

::Ice::Object* upCast(::Test::TestIntf*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::TestIntf*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::SBase> SBasePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::SBase> SBasePrx;

void __read(::IceInternal::BasicStream*, SBasePrx&);
void __patch__SBasePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::SBSKnownDerived> SBSKnownDerivedPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::SBSKnownDerived> SBSKnownDerivedPrx;

void __read(::IceInternal::BasicStream*, SBSKnownDerivedPrx&);
void __patch__SBSKnownDerivedPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::B> BPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::B> BPrx;

void __read(::IceInternal::BasicStream*, BPrx&);
void __patch__BPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::D1> D1Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::D1> D1Prx;

void __read(::IceInternal::BasicStream*, D1Prx&);
void __patch__D1Ptr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::SS1> SS1Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::SS1> SS1Prx;

void __read(::IceInternal::BasicStream*, SS1Prx&);
void __patch__SS1Ptr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::SS2> SS2Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::SS2> SS2Prx;

void __read(::IceInternal::BasicStream*, SS2Prx&);
void __patch__SS2Ptr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::Forward> ForwardPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Forward> ForwardPrx;

void __read(::IceInternal::BasicStream*, ForwardPrx&);
void __patch__ForwardPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::TestIntf> TestIntfPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf> TestIntfPrx;

void __read(::IceInternal::BasicStream*, TestIntfPrx&);
void __patch__TestIntfPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

typedef ::std::vector< ::Test::BPtr> BSeq;
void __writeBSeq(::IceInternal::BasicStream*, const ::Test::BPtr*, const ::Test::BPtr*);
void __readBSeq(::IceInternal::BasicStream*, BSeq&);

struct SS
{
    ::Test::SS1Ptr c1;
    ::Test::SS2Ptr c2;

    bool operator==(const SS&) const;
    bool operator<(const SS&) const;
    bool operator!=(const SS& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const SS& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SS& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SS& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::Ice::Int, ::Test::BPtr> BDict;
void __writeBDict(::IceInternal::BasicStream*, const BDict&);
void __readBDict(::IceInternal::BasicStream*, BDict&);

class BaseException : public ::Ice::UserException
{
public:

    BaseException() {}
    BaseException(const ::std::string&, const ::Test::BPtr&);
    virtual ~BaseException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string sbe;
    ::Test::BPtr pb;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual bool __usesClasses() const;
};

static BaseException __BaseException_init;

class DerivedException : public ::Test::BaseException
{
public:

    DerivedException() {}
    DerivedException(const ::std::string&, const ::Test::BPtr&, const ::std::string&, const ::Test::D1Ptr&);
    virtual ~DerivedException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string sde;
    ::Test::D1Ptr pd1;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace Test
{

class SBase : virtual public ::Ice::Object
{
public:

    typedef SBasePrx ProxyType;
    typedef SBasePtr PointerType;
    
    SBase() {}
    explicit SBase(const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~SBase() {}


public:

    ::std::string sb;
};

class SBSKnownDerived : virtual public ::Test::SBase
{
public:

    typedef SBSKnownDerivedPrx ProxyType;
    typedef SBSKnownDerivedPtr PointerType;
    
    SBSKnownDerived() {}
    SBSKnownDerived(const ::std::string&, const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~SBSKnownDerived() {}


public:

    ::std::string sbskd;
};

class B : virtual public ::Ice::Object
{
public:

    typedef BPrx ProxyType;
    typedef BPtr PointerType;
    
    B() {}
    B(const ::std::string&, const ::Test::BPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~B() {}


public:

    ::std::string sb;
    ::Test::BPtr pb;
};

class D1 : virtual public ::Test::B
{
public:

    typedef D1Prx ProxyType;
    typedef D1Ptr PointerType;
    
    D1() {}
    D1(const ::std::string&, const ::Test::BPtr&, const ::std::string&, const ::Test::BPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~D1() {}


public:

    ::std::string sd1;
    ::Test::BPtr pd1;
};

class SS1 : virtual public ::Ice::Object
{
public:

    typedef SS1Prx ProxyType;
    typedef SS1Ptr PointerType;
    
    SS1() {}
    explicit SS1(const ::Test::BSeq&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~SS1() {}


public:

    ::Test::BSeq s;
};

class SS2 : virtual public ::Ice::Object
{
public:

    typedef SS2Prx ProxyType;
    typedef SS2Ptr PointerType;
    
    SS2() {}
    explicit SS2(const ::Test::BSeq&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~SS2() {}


public:

    ::Test::BSeq s;
};

class TestIntf : virtual public ::Ice::Object
{
public:

    typedef TestIntfPrx ProxyType;
    typedef TestIntfPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::ObjectPtr SBaseAsObject(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___SBaseAsObject(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::SBasePtr SBaseAsSBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___SBaseAsSBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::SBasePtr SBSKnownDerivedAsSBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___SBSKnownDerivedAsSBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::SBSKnownDerivedPtr SBSKnownDerivedAsSBSKnownDerived(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___SBSKnownDerivedAsSBSKnownDerived(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::SBasePtr SBSUnknownDerivedAsSBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___SBSUnknownDerivedAsSBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::ObjectPtr SUnknownAsObject(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___SUnknownAsObject(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr oneElementCycle(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___oneElementCycle(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr twoElementCycle(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___twoElementCycle(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr D1AsB(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___D1AsB(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::D1Ptr D1AsD1(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___D1AsD1(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr D2AsB(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___D2AsB(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void paramTest1(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___paramTest1(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void paramTest2(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___paramTest2(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr paramTest3(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___paramTest3(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr paramTest4(::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___paramTest4(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr returnTest1(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___returnTest1(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr returnTest2(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___returnTest2(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr returnTest3(const ::Test::BPtr&, const ::Test::BPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___returnTest3(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::SS sequenceTest(const ::Test::SS1Ptr&, const ::Test::SS2Ptr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___sequenceTest(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BDict dictionaryTest(const ::Test::BDict&, ::Test::BDict&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___dictionaryTest(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwBaseAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwBaseAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwDerivedAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwDerivedAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwDerivedAsDerived(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwDerivedAsDerived(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwUnknownDerivedAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwUnknownDerivedAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void useForward(::Test::ForwardPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___useForward(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace Test
{

class SBase : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<SBase> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_secure(bool __secure) const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SBase> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SBase> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SBase> ice_twoway() const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_oneway() const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_batchOneway() const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_datagram() const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_batchDatagram() const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SBase> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SBase*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SBSKnownDerived : virtual public ::IceProxy::Test::SBase
{
public:
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_secure(bool __secure) const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_twoway() const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_oneway() const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_batchOneway() const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_datagram() const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_batchDatagram() const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SBSKnownDerived> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SBSKnownDerived*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class B : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<B> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_secure(bool __secure) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<B> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<B> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<B> ice_twoway() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_oneway() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_batchOneway() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_datagram() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_batchDatagram() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_timeout(int __timeout) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class D1 : virtual public ::IceProxy::Test::B
{
public:
    
    ::IceInternal::ProxyHandle<D1> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_secure(bool __secure) const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<D1> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<D1> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<D1> ice_twoway() const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_oneway() const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_batchOneway() const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_datagram() const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_batchDatagram() const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<D1> ice_timeout(int __timeout) const
    {
        return dynamic_cast<D1*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SS1 : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<SS1> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_secure(bool __secure) const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SS1> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SS1> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SS1> ice_twoway() const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_oneway() const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_batchOneway() const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_datagram() const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_batchDatagram() const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SS1> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SS1*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SS2 : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<SS2> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_secure(bool __secure) const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SS2> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SS2> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SS2> ice_twoway() const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_oneway() const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_batchOneway() const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_datagram() const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_batchDatagram() const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SS2> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SS2*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class TestIntf : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::ObjectPtr SBaseAsObject()
    {
        return SBaseAsObject(0);
    }
    ::Ice::ObjectPtr SBaseAsObject(const ::Ice::Context& __ctx)
    {
        return SBaseAsObject(&__ctx);
    }
    
private:

    ::Ice::ObjectPtr SBaseAsObject(const ::Ice::Context*);
    
public:

    ::Test::SBasePtr SBaseAsSBase()
    {
        return SBaseAsSBase(0);
    }
    ::Test::SBasePtr SBaseAsSBase(const ::Ice::Context& __ctx)
    {
        return SBaseAsSBase(&__ctx);
    }
    
private:

    ::Test::SBasePtr SBaseAsSBase(const ::Ice::Context*);
    
public:

    ::Test::SBasePtr SBSKnownDerivedAsSBase()
    {
        return SBSKnownDerivedAsSBase(0);
    }
    ::Test::SBasePtr SBSKnownDerivedAsSBase(const ::Ice::Context& __ctx)
    {
        return SBSKnownDerivedAsSBase(&__ctx);
    }
    
private:

    ::Test::SBasePtr SBSKnownDerivedAsSBase(const ::Ice::Context*);
    
public:

    ::Test::SBSKnownDerivedPtr SBSKnownDerivedAsSBSKnownDerived()
    {
        return SBSKnownDerivedAsSBSKnownDerived(0);
    }
    ::Test::SBSKnownDerivedPtr SBSKnownDerivedAsSBSKnownDerived(const ::Ice::Context& __ctx)
    {
        return SBSKnownDerivedAsSBSKnownDerived(&__ctx);
    }
    
private:

    ::Test::SBSKnownDerivedPtr SBSKnownDerivedAsSBSKnownDerived(const ::Ice::Context*);
    
public:

    ::Test::SBasePtr SBSUnknownDerivedAsSBase()
    {
        return SBSUnknownDerivedAsSBase(0);
    }
    ::Test::SBasePtr SBSUnknownDerivedAsSBase(const ::Ice::Context& __ctx)
    {
        return SBSUnknownDerivedAsSBase(&__ctx);
    }
    
private:

    ::Test::SBasePtr SBSUnknownDerivedAsSBase(const ::Ice::Context*);
    
public:

    ::Ice::ObjectPtr SUnknownAsObject()
    {
        return SUnknownAsObject(0);
    }
    ::Ice::ObjectPtr SUnknownAsObject(const ::Ice::Context& __ctx)
    {
        return SUnknownAsObject(&__ctx);
    }
    
private:

    ::Ice::ObjectPtr SUnknownAsObject(const ::Ice::Context*);
    
public:

    ::Test::BPtr oneElementCycle()
    {
        return oneElementCycle(0);
    }
    ::Test::BPtr oneElementCycle(const ::Ice::Context& __ctx)
    {
        return oneElementCycle(&__ctx);
    }
    
private:

    ::Test::BPtr oneElementCycle(const ::Ice::Context*);
    
public:

    ::Test::BPtr twoElementCycle()
    {
        return twoElementCycle(0);
    }
    ::Test::BPtr twoElementCycle(const ::Ice::Context& __ctx)
    {
        return twoElementCycle(&__ctx);
    }
    
private:

    ::Test::BPtr twoElementCycle(const ::Ice::Context*);
    
public:

    ::Test::BPtr D1AsB()
    {
        return D1AsB(0);
    }
    ::Test::BPtr D1AsB(const ::Ice::Context& __ctx)
    {
        return D1AsB(&__ctx);
    }
    
private:

    ::Test::BPtr D1AsB(const ::Ice::Context*);
    
public:

    ::Test::D1Ptr D1AsD1()
    {
        return D1AsD1(0);
    }
    ::Test::D1Ptr D1AsD1(const ::Ice::Context& __ctx)
    {
        return D1AsD1(&__ctx);
    }
    
private:

    ::Test::D1Ptr D1AsD1(const ::Ice::Context*);
    
public:

    ::Test::BPtr D2AsB()
    {
        return D2AsB(0);
    }
    ::Test::BPtr D2AsB(const ::Ice::Context& __ctx)
    {
        return D2AsB(&__ctx);
    }
    
private:

    ::Test::BPtr D2AsB(const ::Ice::Context*);
    
public:

    void paramTest1(::Test::BPtr& p1, ::Test::BPtr& p2)
    {
        paramTest1(p1, p2, 0);
    }
    void paramTest1(::Test::BPtr& p1, ::Test::BPtr& p2, const ::Ice::Context& __ctx)
    {
        paramTest1(p1, p2, &__ctx);
    }
    
private:

    void paramTest1(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Context*);
    
public:

    void paramTest2(::Test::BPtr& p2, ::Test::BPtr& p1)
    {
        paramTest2(p2, p1, 0);
    }
    void paramTest2(::Test::BPtr& p2, ::Test::BPtr& p1, const ::Ice::Context& __ctx)
    {
        paramTest2(p2, p1, &__ctx);
    }
    
private:

    void paramTest2(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Context*);
    
public:

    ::Test::BPtr paramTest3(::Test::BPtr& p1, ::Test::BPtr& p2)
    {
        return paramTest3(p1, p2, 0);
    }
    ::Test::BPtr paramTest3(::Test::BPtr& p1, ::Test::BPtr& p2, const ::Ice::Context& __ctx)
    {
        return paramTest3(p1, p2, &__ctx);
    }
    
private:

    ::Test::BPtr paramTest3(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Context*);
    
public:

    ::Test::BPtr paramTest4(::Test::BPtr& p)
    {
        return paramTest4(p, 0);
    }
    ::Test::BPtr paramTest4(::Test::BPtr& p, const ::Ice::Context& __ctx)
    {
        return paramTest4(p, &__ctx);
    }
    
private:

    ::Test::BPtr paramTest4(::Test::BPtr&, const ::Ice::Context*);
    
public:

    ::Test::BPtr returnTest1(::Test::BPtr& p1, ::Test::BPtr& p2)
    {
        return returnTest1(p1, p2, 0);
    }
    ::Test::BPtr returnTest1(::Test::BPtr& p1, ::Test::BPtr& p2, const ::Ice::Context& __ctx)
    {
        return returnTest1(p1, p2, &__ctx);
    }
    
private:

    ::Test::BPtr returnTest1(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Context*);
    
public:

    ::Test::BPtr returnTest2(::Test::BPtr& p2, ::Test::BPtr& p1)
    {
        return returnTest2(p2, p1, 0);
    }
    ::Test::BPtr returnTest2(::Test::BPtr& p2, ::Test::BPtr& p1, const ::Ice::Context& __ctx)
    {
        return returnTest2(p2, p1, &__ctx);
    }
    
private:

    ::Test::BPtr returnTest2(::Test::BPtr&, ::Test::BPtr&, const ::Ice::Context*);
    
public:

    ::Test::BPtr returnTest3(const ::Test::BPtr& p1, const ::Test::BPtr& p2)
    {
        return returnTest3(p1, p2, 0);
    }
    ::Test::BPtr returnTest3(const ::Test::BPtr& p1, const ::Test::BPtr& p2, const ::Ice::Context& __ctx)
    {
        return returnTest3(p1, p2, &__ctx);
    }
    
private:

    ::Test::BPtr returnTest3(const ::Test::BPtr&, const ::Test::BPtr&, const ::Ice::Context*);
    
public:

    ::Test::SS sequenceTest(const ::Test::SS1Ptr& p1, const ::Test::SS2Ptr& p2)
    {
        return sequenceTest(p1, p2, 0);
    }
    ::Test::SS sequenceTest(const ::Test::SS1Ptr& p1, const ::Test::SS2Ptr& p2, const ::Ice::Context& __ctx)
    {
        return sequenceTest(p1, p2, &__ctx);
    }
    
private:

    ::Test::SS sequenceTest(const ::Test::SS1Ptr&, const ::Test::SS2Ptr&, const ::Ice::Context*);
    
public:

    ::Test::BDict dictionaryTest(const ::Test::BDict& bin, ::Test::BDict& bout)
    {
        return dictionaryTest(bin, bout, 0);
    }
    ::Test::BDict dictionaryTest(const ::Test::BDict& bin, ::Test::BDict& bout, const ::Ice::Context& __ctx)
    {
        return dictionaryTest(bin, bout, &__ctx);
    }
    
private:

    ::Test::BDict dictionaryTest(const ::Test::BDict&, ::Test::BDict&, const ::Ice::Context*);
    
public:

    void throwBaseAsBase()
    {
        throwBaseAsBase(0);
    }
    void throwBaseAsBase(const ::Ice::Context& __ctx)
    {
        throwBaseAsBase(&__ctx);
    }
    
private:

    void throwBaseAsBase(const ::Ice::Context*);
    
public:

    void throwDerivedAsBase()
    {
        throwDerivedAsBase(0);
    }
    void throwDerivedAsBase(const ::Ice::Context& __ctx)
    {
        throwDerivedAsBase(&__ctx);
    }
    
private:

    void throwDerivedAsBase(const ::Ice::Context*);
    
public:

    void throwDerivedAsDerived()
    {
        throwDerivedAsDerived(0);
    }
    void throwDerivedAsDerived(const ::Ice::Context& __ctx)
    {
        throwDerivedAsDerived(&__ctx);
    }
    
private:

    void throwDerivedAsDerived(const ::Ice::Context*);
    
public:

    void throwUnknownDerivedAsBase()
    {
        throwUnknownDerivedAsBase(0);
    }
    void throwUnknownDerivedAsBase(const ::Ice::Context& __ctx)
    {
        throwUnknownDerivedAsBase(&__ctx);
    }
    
private:

    void throwUnknownDerivedAsBase(const ::Ice::Context*);
    
public:

    void useForward(::Test::ForwardPtr& f)
    {
        useForward(f, 0);
    }
    void useForward(::Test::ForwardPtr& f, const ::Ice::Context& __ctx)
    {
        useForward(f, &__ctx);
    }
    
private:

    void useForward(::Test::ForwardPtr&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<TestIntf> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_secure(bool __secure) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<TestIntf> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<TestIntf> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<TestIntf> ice_twoway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_oneway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_batchOneway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_datagram() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_batchDatagram() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_timeout(int __timeout) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
