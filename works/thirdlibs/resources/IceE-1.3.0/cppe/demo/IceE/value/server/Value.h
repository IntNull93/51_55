// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Value.ice'

#ifndef __Value_h__
#define __Value_h__

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

namespace Demo
{

class Simple;

class Printer;

class DerivedPrinter;

class Initial;

}

}

namespace Demo
{

class Simple;
bool operator==(const Simple&, const Simple&);
bool operator<(const Simple&, const Simple&);

class Printer;
bool operator==(const Printer&, const Printer&);
bool operator<(const Printer&, const Printer&);

class DerivedPrinter;
bool operator==(const DerivedPrinter&, const DerivedPrinter&);
bool operator<(const DerivedPrinter&, const DerivedPrinter&);

class Initial;
bool operator==(const Initial&, const Initial&);
bool operator<(const Initial&, const Initial&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Demo::Simple*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Simple*);

::Ice::Object* upCast(::Demo::Printer*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Printer*);

::Ice::Object* upCast(::Demo::DerivedPrinter*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::DerivedPrinter*);

::Ice::Object* upCast(::Demo::Initial*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Initial*);

}

namespace Demo
{

typedef ::IceInternal::Handle< ::Demo::Simple> SimplePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Simple> SimplePrx;

void __read(::IceInternal::BasicStream*, SimplePrx&);
void __patch__SimplePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Demo::Printer> PrinterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Printer> PrinterPrx;

void __read(::IceInternal::BasicStream*, PrinterPrx&);
void __patch__PrinterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Demo::DerivedPrinter> DerivedPrinterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::DerivedPrinter> DerivedPrinterPrx;

void __read(::IceInternal::BasicStream*, DerivedPrinterPrx&);
void __patch__DerivedPrinterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Demo::Initial> InitialPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Initial> InitialPrx;

void __read(::IceInternal::BasicStream*, InitialPrx&);
void __patch__InitialPtr(void*, ::Ice::ObjectPtr&);

}

namespace Demo
{

class DerivedPrinterException : public ::Ice::UserException
{
public:

    DerivedPrinterException() {}
    explicit DerivedPrinterException(const ::Demo::DerivedPrinterPtr&);
    virtual ~DerivedPrinterException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Demo::DerivedPrinterPtr derived;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual bool __usesClasses() const;
};

static DerivedPrinterException __DerivedPrinterException_init;

}

namespace Demo
{

class Simple : virtual public ::Ice::Object
{
public:

    typedef SimplePrx ProxyType;
    typedef SimplePtr PointerType;
    
    Simple() {}
    explicit Simple(const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Simple() {}


public:

    ::std::string message;
};

class Printer : virtual public ::Ice::Object
{
public:

    typedef PrinterPrx ProxyType;
    typedef PrinterPtr PointerType;
    
    Printer() {}
    explicit Printer(const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void printBackwards(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___printBackwards(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::std::string message;
};

class DerivedPrinter : virtual public ::Demo::Printer
{
public:

    typedef DerivedPrinterPrx ProxyType;
    typedef DerivedPrinterPtr PointerType;
    
    DerivedPrinter() {}
    DerivedPrinter(const ::std::string&, const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void printUppercase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___printUppercase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::std::string derivedMessage;
};

class Initial : virtual public ::Ice::Object
{
public:

    typedef InitialPrx ProxyType;
    typedef InitialPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Demo::SimplePtr getSimple(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getSimple(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void getPrinter(::Demo::PrinterPtr&, ::Demo::PrinterPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getPrinter(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Demo::PrinterPtr getDerivedPrinter(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getDerivedPrinter(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwDerivedPrinter(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwDerivedPrinter(::IceInternal::Incoming&, const ::Ice::Current&);
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

class Simple : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Simple> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_secure(bool __secure) const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Simple> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Simple> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Simple> ice_twoway() const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_oneway() const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_batchOneway() const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_datagram() const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_batchDatagram() const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Simple> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Simple*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Printer : virtual public ::IceProxy::Ice::Object
{
public:

    void printBackwards()
    {
        printBackwards(0);
    }
    void printBackwards(const ::Ice::Context& __ctx)
    {
        printBackwards(&__ctx);
    }
    
private:

    void printBackwards(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Printer> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_secure(bool __secure) const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Printer> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Printer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Printer> ice_twoway() const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_oneway() const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_batchOneway() const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_datagram() const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_batchDatagram() const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Printer> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Printer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DerivedPrinter : virtual public ::IceProxy::Demo::Printer
{
public:

    void printUppercase()
    {
        printUppercase(0);
    }
    void printUppercase(const ::Ice::Context& __ctx)
    {
        printUppercase(&__ctx);
    }
    
private:

    void printUppercase(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_secure(bool __secure) const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_twoway() const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_oneway() const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_batchOneway() const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_datagram() const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_batchDatagram() const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedPrinter> ice_timeout(int __timeout) const
    {
        return dynamic_cast<DerivedPrinter*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Initial : virtual public ::IceProxy::Ice::Object
{
public:

    ::Demo::SimplePtr getSimple()
    {
        return getSimple(0);
    }
    ::Demo::SimplePtr getSimple(const ::Ice::Context& __ctx)
    {
        return getSimple(&__ctx);
    }
    
private:

    ::Demo::SimplePtr getSimple(const ::Ice::Context*);
    
public:

    void getPrinter(::Demo::PrinterPtr& impl, ::Demo::PrinterPrx& proxy)
    {
        getPrinter(impl, proxy, 0);
    }
    void getPrinter(::Demo::PrinterPtr& impl, ::Demo::PrinterPrx& proxy, const ::Ice::Context& __ctx)
    {
        getPrinter(impl, proxy, &__ctx);
    }
    
private:

    void getPrinter(::Demo::PrinterPtr&, ::Demo::PrinterPrx&, const ::Ice::Context*);
    
public:

    ::Demo::PrinterPtr getDerivedPrinter()
    {
        return getDerivedPrinter(0);
    }
    ::Demo::PrinterPtr getDerivedPrinter(const ::Ice::Context& __ctx)
    {
        return getDerivedPrinter(&__ctx);
    }
    
private:

    ::Demo::PrinterPtr getDerivedPrinter(const ::Ice::Context*);
    
public:

    void throwDerivedPrinter()
    {
        throwDerivedPrinter(0);
    }
    void throwDerivedPrinter(const ::Ice::Context& __ctx)
    {
        throwDerivedPrinter(&__ctx);
    }
    
private:

    void throwDerivedPrinter(const ::Ice::Context*);
    
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
