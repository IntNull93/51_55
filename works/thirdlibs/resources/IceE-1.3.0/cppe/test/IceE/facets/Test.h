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

class Empty;

class A;

class B;

class C;

class D;

class E;

class F;

class G;

class H;

}

}

namespace Test
{

class Empty;
bool operator==(const Empty&, const Empty&);
bool operator<(const Empty&, const Empty&);

class A;
bool operator==(const A&, const A&);
bool operator<(const A&, const A&);

class B;
bool operator==(const B&, const B&);
bool operator<(const B&, const B&);

class C;
bool operator==(const C&, const C&);
bool operator<(const C&, const C&);

class D;
bool operator==(const D&, const D&);
bool operator<(const D&, const D&);

class E;
bool operator==(const E&, const E&);
bool operator<(const E&, const E&);

class F;
bool operator==(const F&, const F&);
bool operator<(const F&, const F&);

class G;
bool operator==(const G&, const G&);
bool operator<(const G&, const G&);

class H;
bool operator==(const H&, const H&);
bool operator<(const H&, const H&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Empty*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Empty*);

::Ice::Object* upCast(::Test::A*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::A*);

::Ice::Object* upCast(::Test::B*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::B*);

::Ice::Object* upCast(::Test::C*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::C*);

::Ice::Object* upCast(::Test::D*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::D*);

::Ice::Object* upCast(::Test::E*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::E*);

::Ice::Object* upCast(::Test::F*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::F*);

::Ice::Object* upCast(::Test::G*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::G*);

::Ice::Object* upCast(::Test::H*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::H*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Empty> EmptyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Empty> EmptyPrx;

void __read(::IceInternal::BasicStream*, EmptyPrx&);
void __patch__EmptyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::A> APtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::A> APrx;

void __read(::IceInternal::BasicStream*, APrx&);
void __patch__APtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::B> BPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::B> BPrx;

void __read(::IceInternal::BasicStream*, BPrx&);
void __patch__BPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::C> CPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::C> CPrx;

void __read(::IceInternal::BasicStream*, CPrx&);
void __patch__CPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::D> DPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::D> DPrx;

void __read(::IceInternal::BasicStream*, DPrx&);
void __patch__DPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::E> EPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::E> EPrx;

void __read(::IceInternal::BasicStream*, EPrx&);
void __patch__EPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::F> FPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::F> FPrx;

void __read(::IceInternal::BasicStream*, FPrx&);
void __patch__FPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::G> GPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::G> GPrx;

void __read(::IceInternal::BasicStream*, GPrx&);
void __patch__GPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::H> HPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::H> HPrx;

void __read(::IceInternal::BasicStream*, HPrx&);
void __patch__HPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

}

namespace Test
{

class Empty : virtual public ::Ice::Object
{
public:

    typedef EmptyPrx ProxyType;
    typedef EmptyPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class A : virtual public ::Ice::Object
{
public:

    typedef APrx ProxyType;
    typedef APtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callA(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callA(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class B : virtual public ::Test::A
{
public:

    typedef BPrx ProxyType;
    typedef BPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callB(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callB(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class C : virtual public ::Test::A
{
public:

    typedef CPrx ProxyType;
    typedef CPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callC(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callC(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class D : virtual public ::Test::B,
          virtual public ::Test::C
{
public:

    typedef DPrx ProxyType;
    typedef DPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callD(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class E : virtual public ::Ice::Object
{
public:

    typedef EPrx ProxyType;
    typedef EPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callE(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callE(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class F : virtual public ::Test::E
{
public:

    typedef FPrx ProxyType;
    typedef FPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callF(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callF(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class G : virtual public ::Ice::Object
{
public:

    typedef GPrx ProxyType;
    typedef GPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::std::string callG(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callG(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class H : virtual public ::Test::G
{
public:

    typedef HPrx ProxyType;
    typedef HPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string callH(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___callH(::IceInternal::Incoming&, const ::Ice::Current&);
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

class Empty : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Empty> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_secure(bool __secure) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Empty> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Empty> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Empty> ice_twoway() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_oneway() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_batchOneway() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_datagram() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_batchDatagram() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class A : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string callA()
    {
        return callA(0);
    }
    ::std::string callA(const ::Ice::Context& __ctx)
    {
        return callA(&__ctx);
    }
    
private:

    ::std::string callA(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<A> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_secure(bool __secure) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<A> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<A> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<A> ice_twoway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_oneway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_batchOneway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_datagram() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_batchDatagram() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_timeout(int __timeout) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class B : virtual public ::IceProxy::Test::A
{
public:

    ::std::string callB()
    {
        return callB(0);
    }
    ::std::string callB(const ::Ice::Context& __ctx)
    {
        return callB(&__ctx);
    }
    
private:

    ::std::string callB(const ::Ice::Context*);
    
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

class C : virtual public ::IceProxy::Test::A
{
public:

    ::std::string callC()
    {
        return callC(0);
    }
    ::std::string callC(const ::Ice::Context& __ctx)
    {
        return callC(&__ctx);
    }
    
private:

    ::std::string callC(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<C> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_secure(bool __secure) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<C> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<C> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<C> ice_twoway() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_oneway() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_batchOneway() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_datagram() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_batchDatagram() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_timeout(int __timeout) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class D : virtual public ::IceProxy::Test::B,
          virtual public ::IceProxy::Test::C
{
public:

    ::std::string callD()
    {
        return callD(0);
    }
    ::std::string callD(const ::Ice::Context& __ctx)
    {
        return callD(&__ctx);
    }
    
private:

    ::std::string callD(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<D> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_secure(bool __secure) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<D> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<D> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<D> ice_twoway() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_oneway() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_batchOneway() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_datagram() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_batchDatagram() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_timeout(int __timeout) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class E : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string callE()
    {
        return callE(0);
    }
    ::std::string callE(const ::Ice::Context& __ctx)
    {
        return callE(&__ctx);
    }
    
private:

    ::std::string callE(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<E> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_secure(bool __secure) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<E> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<E> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<E> ice_twoway() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_oneway() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_batchOneway() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_datagram() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_batchDatagram() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_timeout(int __timeout) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class F : virtual public ::IceProxy::Test::E
{
public:

    ::std::string callF()
    {
        return callF(0);
    }
    ::std::string callF(const ::Ice::Context& __ctx)
    {
        return callF(&__ctx);
    }
    
private:

    ::std::string callF(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<F> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_secure(bool __secure) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<F> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<F> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<F> ice_twoway() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_oneway() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_batchOneway() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_datagram() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_batchDatagram() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_timeout(int __timeout) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class G : virtual public ::IceProxy::Ice::Object
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

    ::std::string callG()
    {
        return callG(0);
    }
    ::std::string callG(const ::Ice::Context& __ctx)
    {
        return callG(&__ctx);
    }
    
private:

    ::std::string callG(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<G> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_secure(bool __secure) const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<G> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<G> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<G> ice_twoway() const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_oneway() const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_batchOneway() const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_datagram() const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_batchDatagram() const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<G> ice_timeout(int __timeout) const
    {
        return dynamic_cast<G*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class H : virtual public ::IceProxy::Test::G
{
public:

    ::std::string callH()
    {
        return callH(0);
    }
    ::std::string callH(const ::Ice::Context& __ctx)
    {
        return callH(&__ctx);
    }
    
private:

    ::std::string callH(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<H> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_secure(bool __secure) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<H> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<H> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<H> ice_twoway() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_oneway() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_batchOneway() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_datagram() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_batchDatagram() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_timeout(int __timeout) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
