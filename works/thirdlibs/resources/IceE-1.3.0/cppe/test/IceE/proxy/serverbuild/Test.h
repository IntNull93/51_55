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

class MyClass;

class MyDerivedClass;

}

}

namespace Test
{

class MyClass;
bool operator==(const MyClass&, const MyClass&);
bool operator<(const MyClass&, const MyClass&);

class MyDerivedClass;
bool operator==(const MyDerivedClass&, const MyDerivedClass&);
bool operator<(const MyDerivedClass&, const MyDerivedClass&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::MyClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MyClass*);

::Ice::Object* upCast(::Test::MyDerivedClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MyDerivedClass*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::MyClass> MyClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MyClass> MyClassPrx;

void __read(::IceInternal::BasicStream*, MyClassPrx&);
void __patch__MyClassPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MyDerivedClass> MyDerivedClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MyDerivedClass> MyDerivedClassPrx;

void __read(::IceInternal::BasicStream*, MyDerivedClassPrx&);
void __patch__MyDerivedClassPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

typedef ::std::map< ::std::string, ::std::string> Context;
void __writeContext(::IceInternal::BasicStream*, const Context&);
void __readContext(::IceInternal::BasicStream*, Context&);

}

namespace Test
{

class MyClass : virtual public ::Ice::Object
{
public:

    typedef MyClassPrx ProxyType;
    typedef MyClassPtr PointerType;
    
    MyClass() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::Context getContext(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getContext(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class MyDerivedClass : virtual public ::Test::MyClass
{
public:

    typedef MyDerivedClassPrx ProxyType;
    typedef MyDerivedClassPtr PointerType;
    
    MyDerivedClass() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::ObjectPrx echo(const ::Ice::ObjectPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___echo(::IceInternal::Incoming&, const ::Ice::Current&);
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

class MyClass : virtual public ::IceProxy::Ice::Object
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

    ::Test::Context getContext()
    {
        return getContext(0);
    }
    ::Test::Context getContext(const ::Ice::Context& __ctx)
    {
        return getContext(&__ctx);
    }
    
private:

    ::Test::Context getContext(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MyClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<MyClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<MyClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<MyClass> ice_twoway() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_oneway() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_batchOneway() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_datagram() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_batchDatagram() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class MyDerivedClass : virtual public ::IceProxy::Test::MyClass
{
public:

    ::Ice::ObjectPrx echo(const ::Ice::ObjectPrx& obj)
    {
        return echo(obj, 0);
    }
    ::Ice::ObjectPrx echo(const ::Ice::ObjectPrx& obj, const ::Ice::Context& __ctx)
    {
        return echo(obj, &__ctx);
    }
    
private:

    ::Ice::ObjectPrx echo(const ::Ice::ObjectPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_twoway() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_oneway() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_batchOneway() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_datagram() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_batchDatagram() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
