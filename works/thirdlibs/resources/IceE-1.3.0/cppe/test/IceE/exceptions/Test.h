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

class Empty;

class Thrower;

class WrongOperation;

}

}

namespace Test
{

class Empty;
bool operator==(const Empty&, const Empty&);
bool operator<(const Empty&, const Empty&);

class Thrower;
bool operator==(const Thrower&, const Thrower&);
bool operator<(const Thrower&, const Thrower&);

class WrongOperation;
bool operator==(const WrongOperation&, const WrongOperation&);
bool operator<(const WrongOperation&, const WrongOperation&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Empty*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Empty*);

::Ice::Object* upCast(::Test::Thrower*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Thrower*);

::Ice::Object* upCast(::Test::WrongOperation*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::WrongOperation*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Empty> EmptyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Empty> EmptyPrx;

void __read(::IceInternal::BasicStream*, EmptyPrx&);
void __patch__EmptyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::Thrower> ThrowerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Thrower> ThrowerPrx;

void __read(::IceInternal::BasicStream*, ThrowerPrx&);
void __patch__ThrowerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::WrongOperation> WrongOperationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::WrongOperation> WrongOperationPrx;

void __read(::IceInternal::BasicStream*, WrongOperationPrx&);
void __patch__WrongOperationPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

class A : public ::Ice::UserException
{
public:

    A() {}
    explicit A(::Ice::Int);
    virtual ~A() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int aMem;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static A __A_init;

class B : public ::Test::A
{
public:

    B() {}
    B(::Ice::Int, ::Ice::Int);
    virtual ~B() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int bMem;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class C : public ::Test::B
{
public:

    C() {}
    C(::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual ~C() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int cMem;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class D : public ::Ice::UserException
{
public:

    D() {}
    explicit D(::Ice::Int);
    virtual ~D() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int dMem;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

namespace Mod
{

class A : public ::Test::A
{
public:

    A() {}
    A(::Ice::Int, ::Ice::Int);
    virtual ~A() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int a2Mem;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

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

class Thrower : virtual public ::Ice::Object
{
public:

    typedef ThrowerPrx ProxyType;
    typedef ThrowerPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual bool supportsUndeclaredExceptions(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___supportsUndeclaredExceptions(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual bool supportsAssertException(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___supportsAssertException(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwAasA(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwAasA(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwAorDasAorD(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwAorDasAorD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwBasA(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwBasA(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwCasA(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwCasA(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwBasB(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwBasB(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwCasB(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwCasB(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwCasC(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwCasC(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwModA(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwModA(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwUndeclaredA(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwUndeclaredA(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwUndeclaredB(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwUndeclaredB(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwUndeclaredC(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwUndeclaredC(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwLocalException(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwLocalException(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwNonIceException(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwNonIceException(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void throwAssertException(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___throwAssertException(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class WrongOperation : virtual public ::Ice::Object
{
public:

    typedef WrongOperationPrx ProxyType;
    typedef WrongOperationPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void noSuchOperation(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___noSuchOperation(::IceInternal::Incoming&, const ::Ice::Current&);
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

class AMI_Thrower_shutdown : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_shutdown> AMI_Thrower_shutdownPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_supportsUndeclaredExceptions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_supportsUndeclaredExceptions> AMI_Thrower_supportsUndeclaredExceptionsPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_supportsAssertException : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_supportsAssertException> AMI_Thrower_supportsAssertExceptionPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwAasA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwAasA> AMI_Thrower_throwAasAPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwAorDasAorD : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwAorDasAorD> AMI_Thrower_throwAorDasAorDPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwBasA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwBasA> AMI_Thrower_throwBasAPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwCasA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwCasA> AMI_Thrower_throwCasAPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwBasB : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwBasB> AMI_Thrower_throwBasBPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwCasB : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwCasB> AMI_Thrower_throwCasBPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwCasC : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwCasC> AMI_Thrower_throwCasCPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwModA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwModA> AMI_Thrower_throwModAPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwUndeclaredA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwUndeclaredA> AMI_Thrower_throwUndeclaredAPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwUndeclaredB : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwUndeclaredB> AMI_Thrower_throwUndeclaredBPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwUndeclaredC : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwUndeclaredC> AMI_Thrower_throwUndeclaredCPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwLocalException : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwLocalException> AMI_Thrower_throwLocalExceptionPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwNonIceException : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwNonIceException> AMI_Thrower_throwNonIceExceptionPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_Thrower_throwAssertException : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::ThrowerPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_Thrower_throwAssertException> AMI_Thrower_throwAssertExceptionPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_WrongOperation_noSuchOperation : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::WrongOperationPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_WrongOperation_noSuchOperation> AMI_WrongOperation_noSuchOperationPtr;
#endif

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

class Thrower : virtual public ::IceProxy::Ice::Object
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
    #ifdef ICEE_HAS_AMI
    bool shutdown_async(const ::Test::AMI_Thrower_shutdownPtr&);
    bool shutdown_async(const ::Test::AMI_Thrower_shutdownPtr&, const ::Ice::Context&);
    #endif

    bool supportsUndeclaredExceptions()
    {
        return supportsUndeclaredExceptions(0);
    }
    bool supportsUndeclaredExceptions(const ::Ice::Context& __ctx)
    {
        return supportsUndeclaredExceptions(&__ctx);
    }
    
private:

    bool supportsUndeclaredExceptions(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool supportsUndeclaredExceptions_async(const ::Test::AMI_Thrower_supportsUndeclaredExceptionsPtr&);
    bool supportsUndeclaredExceptions_async(const ::Test::AMI_Thrower_supportsUndeclaredExceptionsPtr&, const ::Ice::Context&);
    #endif

    bool supportsAssertException()
    {
        return supportsAssertException(0);
    }
    bool supportsAssertException(const ::Ice::Context& __ctx)
    {
        return supportsAssertException(&__ctx);
    }
    
private:

    bool supportsAssertException(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool supportsAssertException_async(const ::Test::AMI_Thrower_supportsAssertExceptionPtr&);
    bool supportsAssertException_async(const ::Test::AMI_Thrower_supportsAssertExceptionPtr&, const ::Ice::Context&);
    #endif

    void throwAasA(::Ice::Int a)
    {
        throwAasA(a, 0);
    }
    void throwAasA(::Ice::Int a, const ::Ice::Context& __ctx)
    {
        throwAasA(a, &__ctx);
    }
    
private:

    void throwAasA(::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwAasA_async(const ::Test::AMI_Thrower_throwAasAPtr&, ::Ice::Int);
    bool throwAasA_async(const ::Test::AMI_Thrower_throwAasAPtr&, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwAorDasAorD(::Ice::Int a)
    {
        throwAorDasAorD(a, 0);
    }
    void throwAorDasAorD(::Ice::Int a, const ::Ice::Context& __ctx)
    {
        throwAorDasAorD(a, &__ctx);
    }
    
private:

    void throwAorDasAorD(::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwAorDasAorD_async(const ::Test::AMI_Thrower_throwAorDasAorDPtr&, ::Ice::Int);
    bool throwAorDasAorD_async(const ::Test::AMI_Thrower_throwAorDasAorDPtr&, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwBasA(::Ice::Int a, ::Ice::Int b)
    {
        throwBasA(a, b, 0);
    }
    void throwBasA(::Ice::Int a, ::Ice::Int b, const ::Ice::Context& __ctx)
    {
        throwBasA(a, b, &__ctx);
    }
    
private:

    void throwBasA(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwBasA_async(const ::Test::AMI_Thrower_throwBasAPtr&, ::Ice::Int, ::Ice::Int);
    bool throwBasA_async(const ::Test::AMI_Thrower_throwBasAPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwCasA(::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
    {
        throwCasA(a, b, c, 0);
    }
    void throwCasA(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
    {
        throwCasA(a, b, c, &__ctx);
    }
    
private:

    void throwCasA(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwCasA_async(const ::Test::AMI_Thrower_throwCasAPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool throwCasA_async(const ::Test::AMI_Thrower_throwCasAPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwBasB(::Ice::Int a, ::Ice::Int b)
    {
        throwBasB(a, b, 0);
    }
    void throwBasB(::Ice::Int a, ::Ice::Int b, const ::Ice::Context& __ctx)
    {
        throwBasB(a, b, &__ctx);
    }
    
private:

    void throwBasB(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwBasB_async(const ::Test::AMI_Thrower_throwBasBPtr&, ::Ice::Int, ::Ice::Int);
    bool throwBasB_async(const ::Test::AMI_Thrower_throwBasBPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwCasB(::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
    {
        throwCasB(a, b, c, 0);
    }
    void throwCasB(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
    {
        throwCasB(a, b, c, &__ctx);
    }
    
private:

    void throwCasB(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwCasB_async(const ::Test::AMI_Thrower_throwCasBPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool throwCasB_async(const ::Test::AMI_Thrower_throwCasBPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwCasC(::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
    {
        throwCasC(a, b, c, 0);
    }
    void throwCasC(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
    {
        throwCasC(a, b, c, &__ctx);
    }
    
private:

    void throwCasC(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwCasC_async(const ::Test::AMI_Thrower_throwCasCPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool throwCasC_async(const ::Test::AMI_Thrower_throwCasCPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwModA(::Ice::Int a, ::Ice::Int a2)
    {
        throwModA(a, a2, 0);
    }
    void throwModA(::Ice::Int a, ::Ice::Int a2, const ::Ice::Context& __ctx)
    {
        throwModA(a, a2, &__ctx);
    }
    
private:

    void throwModA(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwModA_async(const ::Test::AMI_Thrower_throwModAPtr&, ::Ice::Int, ::Ice::Int);
    bool throwModA_async(const ::Test::AMI_Thrower_throwModAPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwUndeclaredA(::Ice::Int a)
    {
        throwUndeclaredA(a, 0);
    }
    void throwUndeclaredA(::Ice::Int a, const ::Ice::Context& __ctx)
    {
        throwUndeclaredA(a, &__ctx);
    }
    
private:

    void throwUndeclaredA(::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwUndeclaredA_async(const ::Test::AMI_Thrower_throwUndeclaredAPtr&, ::Ice::Int);
    bool throwUndeclaredA_async(const ::Test::AMI_Thrower_throwUndeclaredAPtr&, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwUndeclaredB(::Ice::Int a, ::Ice::Int b)
    {
        throwUndeclaredB(a, b, 0);
    }
    void throwUndeclaredB(::Ice::Int a, ::Ice::Int b, const ::Ice::Context& __ctx)
    {
        throwUndeclaredB(a, b, &__ctx);
    }
    
private:

    void throwUndeclaredB(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwUndeclaredB_async(const ::Test::AMI_Thrower_throwUndeclaredBPtr&, ::Ice::Int, ::Ice::Int);
    bool throwUndeclaredB_async(const ::Test::AMI_Thrower_throwUndeclaredBPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwUndeclaredC(::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
    {
        throwUndeclaredC(a, b, c, 0);
    }
    void throwUndeclaredC(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
    {
        throwUndeclaredC(a, b, c, &__ctx);
    }
    
private:

    void throwUndeclaredC(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwUndeclaredC_async(const ::Test::AMI_Thrower_throwUndeclaredCPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool throwUndeclaredC_async(const ::Test::AMI_Thrower_throwUndeclaredCPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);
    #endif

    void throwLocalException()
    {
        throwLocalException(0);
    }
    void throwLocalException(const ::Ice::Context& __ctx)
    {
        throwLocalException(&__ctx);
    }
    
private:

    void throwLocalException(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwLocalException_async(const ::Test::AMI_Thrower_throwLocalExceptionPtr&);
    bool throwLocalException_async(const ::Test::AMI_Thrower_throwLocalExceptionPtr&, const ::Ice::Context&);
    #endif

    void throwNonIceException()
    {
        throwNonIceException(0);
    }
    void throwNonIceException(const ::Ice::Context& __ctx)
    {
        throwNonIceException(&__ctx);
    }
    
private:

    void throwNonIceException(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwNonIceException_async(const ::Test::AMI_Thrower_throwNonIceExceptionPtr&);
    bool throwNonIceException_async(const ::Test::AMI_Thrower_throwNonIceExceptionPtr&, const ::Ice::Context&);
    #endif

    void throwAssertException()
    {
        throwAssertException(0);
    }
    void throwAssertException(const ::Ice::Context& __ctx)
    {
        throwAssertException(&__ctx);
    }
    
private:

    void throwAssertException(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool throwAssertException_async(const ::Test::AMI_Thrower_throwAssertExceptionPtr&);
    bool throwAssertException_async(const ::Test::AMI_Thrower_throwAssertExceptionPtr&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<Thrower> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_secure(bool __secure) const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Thrower> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Thrower> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Thrower> ice_twoway() const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_oneway() const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_batchOneway() const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_datagram() const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_batchDatagram() const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Thrower> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Thrower*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class WrongOperation : virtual public ::IceProxy::Ice::Object
{
public:

    void noSuchOperation()
    {
        noSuchOperation(0);
    }
    void noSuchOperation(const ::Ice::Context& __ctx)
    {
        noSuchOperation(&__ctx);
    }
    
private:

    void noSuchOperation(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool noSuchOperation_async(const ::Test::AMI_WrongOperation_noSuchOperationPtr&);
    bool noSuchOperation_async(const ::Test::AMI_WrongOperation_noSuchOperationPtr&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_secure(bool __secure) const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<WrongOperation> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<WrongOperation> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_twoway() const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_oneway() const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_batchOneway() const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_datagram() const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_batchDatagram() const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<WrongOperation> ice_timeout(int __timeout) const
    {
        return dynamic_cast<WrongOperation*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
