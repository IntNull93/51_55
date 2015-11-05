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

class TestIntf;

}

}

namespace Test
{

class TestIntf;
bool operator==(const TestIntf&, const TestIntf&);
bool operator<(const TestIntf&, const TestIntf&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::TestIntf*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::TestIntf*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::TestIntf> TestIntfPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf> TestIntfPrx;

void __read(::IceInternal::BasicStream*, TestIntfPrx&);
void __patch__TestIntfPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

class Base : public ::Ice::UserException
{
public:

    Base() {}
    explicit Base(const ::std::string&);
    virtual ~Base() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string b;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static Base __Base_init;

class KnownDerived : public ::Test::Base
{
public:

    KnownDerived() {}
    KnownDerived(const ::std::string&, const ::std::string&);
    virtual ~KnownDerived() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string kd;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class KnownIntermediate : public ::Test::Base
{
public:

    KnownIntermediate() {}
    KnownIntermediate(const ::std::string&, const ::std::string&);
    virtual ~KnownIntermediate() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string ki;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class KnownMostDerived : public ::Test::KnownIntermediate
{
public:

    KnownMostDerived() {}
    KnownMostDerived(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~KnownMostDerived() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string kmd;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace Test
{

class TestIntf : virtual public ::Ice::Object
{
public:

    typedef TestIntfPrx ProxyType;
    typedef TestIntfPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void baseAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___baseAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void unknownDerivedAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___unknownDerivedAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownDerivedAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownDerivedAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownDerivedAsKnownDerived(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownDerivedAsKnownDerived(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void unknownIntermediateAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___unknownIntermediateAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownIntermediateAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownIntermediateAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownMostDerivedAsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownMostDerivedAsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownIntermediateAsKnownIntermediate(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownIntermediateAsKnownIntermediate(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownMostDerivedAsKnownIntermediate(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownMostDerivedAsKnownIntermediate(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void knownMostDerivedAsKnownMostDerived(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___knownMostDerivedAsKnownMostDerived(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void unknownMostDerived1AsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___unknownMostDerived1AsBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void unknownMostDerived1AsKnownIntermediate(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___unknownMostDerived1AsKnownIntermediate(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void unknownMostDerived2AsBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___unknownMostDerived2AsBase(::IceInternal::Incoming&, const ::Ice::Current&);
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

class AMI_TestIntf_baseAsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_baseAsBase> AMI_TestIntf_baseAsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_unknownDerivedAsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_unknownDerivedAsBase> AMI_TestIntf_unknownDerivedAsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownDerivedAsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownDerivedAsBase> AMI_TestIntf_knownDerivedAsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownDerivedAsKnownDerived : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownDerivedAsKnownDerived> AMI_TestIntf_knownDerivedAsKnownDerivedPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_unknownIntermediateAsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_unknownIntermediateAsBase> AMI_TestIntf_unknownIntermediateAsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownIntermediateAsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownIntermediateAsBase> AMI_TestIntf_knownIntermediateAsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownMostDerivedAsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownMostDerivedAsBase> AMI_TestIntf_knownMostDerivedAsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownIntermediateAsKnownIntermediate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownIntermediateAsKnownIntermediate> AMI_TestIntf_knownIntermediateAsKnownIntermediatePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownMostDerivedAsKnownIntermediate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediate> AMI_TestIntf_knownMostDerivedAsKnownIntermediatePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_knownMostDerivedAsKnownMostDerived : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerived> AMI_TestIntf_knownMostDerivedAsKnownMostDerivedPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_unknownMostDerived1AsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_unknownMostDerived1AsBase> AMI_TestIntf_unknownMostDerived1AsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_unknownMostDerived1AsKnownIntermediate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediate> AMI_TestIntf_unknownMostDerived1AsKnownIntermediatePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_unknownMostDerived2AsBase : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_unknownMostDerived2AsBase> AMI_TestIntf_unknownMostDerived2AsBasePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_shutdown : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_shutdown> AMI_TestIntf_shutdownPtr;
#endif

}

namespace IceProxy
{

namespace Test
{

class TestIntf : virtual public ::IceProxy::Ice::Object
{
public:

    void baseAsBase()
    {
        baseAsBase(0);
    }
    void baseAsBase(const ::Ice::Context& __ctx)
    {
        baseAsBase(&__ctx);
    }
    
private:

    void baseAsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool baseAsBase_async(const ::Test::AMI_TestIntf_baseAsBasePtr&);
    bool baseAsBase_async(const ::Test::AMI_TestIntf_baseAsBasePtr&, const ::Ice::Context&);
    #endif

    void unknownDerivedAsBase()
    {
        unknownDerivedAsBase(0);
    }
    void unknownDerivedAsBase(const ::Ice::Context& __ctx)
    {
        unknownDerivedAsBase(&__ctx);
    }
    
private:

    void unknownDerivedAsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool unknownDerivedAsBase_async(const ::Test::AMI_TestIntf_unknownDerivedAsBasePtr&);
    bool unknownDerivedAsBase_async(const ::Test::AMI_TestIntf_unknownDerivedAsBasePtr&, const ::Ice::Context&);
    #endif

    void knownDerivedAsBase()
    {
        knownDerivedAsBase(0);
    }
    void knownDerivedAsBase(const ::Ice::Context& __ctx)
    {
        knownDerivedAsBase(&__ctx);
    }
    
private:

    void knownDerivedAsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownDerivedAsBase_async(const ::Test::AMI_TestIntf_knownDerivedAsBasePtr&);
    bool knownDerivedAsBase_async(const ::Test::AMI_TestIntf_knownDerivedAsBasePtr&, const ::Ice::Context&);
    #endif

    void knownDerivedAsKnownDerived()
    {
        knownDerivedAsKnownDerived(0);
    }
    void knownDerivedAsKnownDerived(const ::Ice::Context& __ctx)
    {
        knownDerivedAsKnownDerived(&__ctx);
    }
    
private:

    void knownDerivedAsKnownDerived(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownDerivedAsKnownDerived_async(const ::Test::AMI_TestIntf_knownDerivedAsKnownDerivedPtr&);
    bool knownDerivedAsKnownDerived_async(const ::Test::AMI_TestIntf_knownDerivedAsKnownDerivedPtr&, const ::Ice::Context&);
    #endif

    void unknownIntermediateAsBase()
    {
        unknownIntermediateAsBase(0);
    }
    void unknownIntermediateAsBase(const ::Ice::Context& __ctx)
    {
        unknownIntermediateAsBase(&__ctx);
    }
    
private:

    void unknownIntermediateAsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool unknownIntermediateAsBase_async(const ::Test::AMI_TestIntf_unknownIntermediateAsBasePtr&);
    bool unknownIntermediateAsBase_async(const ::Test::AMI_TestIntf_unknownIntermediateAsBasePtr&, const ::Ice::Context&);
    #endif

    void knownIntermediateAsBase()
    {
        knownIntermediateAsBase(0);
    }
    void knownIntermediateAsBase(const ::Ice::Context& __ctx)
    {
        knownIntermediateAsBase(&__ctx);
    }
    
private:

    void knownIntermediateAsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownIntermediateAsBase_async(const ::Test::AMI_TestIntf_knownIntermediateAsBasePtr&);
    bool knownIntermediateAsBase_async(const ::Test::AMI_TestIntf_knownIntermediateAsBasePtr&, const ::Ice::Context&);
    #endif

    void knownMostDerivedAsBase()
    {
        knownMostDerivedAsBase(0);
    }
    void knownMostDerivedAsBase(const ::Ice::Context& __ctx)
    {
        knownMostDerivedAsBase(&__ctx);
    }
    
private:

    void knownMostDerivedAsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownMostDerivedAsBase_async(const ::Test::AMI_TestIntf_knownMostDerivedAsBasePtr&);
    bool knownMostDerivedAsBase_async(const ::Test::AMI_TestIntf_knownMostDerivedAsBasePtr&, const ::Ice::Context&);
    #endif

    void knownIntermediateAsKnownIntermediate()
    {
        knownIntermediateAsKnownIntermediate(0);
    }
    void knownIntermediateAsKnownIntermediate(const ::Ice::Context& __ctx)
    {
        knownIntermediateAsKnownIntermediate(&__ctx);
    }
    
private:

    void knownIntermediateAsKnownIntermediate(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownIntermediateAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownIntermediateAsKnownIntermediatePtr&);
    bool knownIntermediateAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownIntermediateAsKnownIntermediatePtr&, const ::Ice::Context&);
    #endif

    void knownMostDerivedAsKnownIntermediate()
    {
        knownMostDerivedAsKnownIntermediate(0);
    }
    void knownMostDerivedAsKnownIntermediate(const ::Ice::Context& __ctx)
    {
        knownMostDerivedAsKnownIntermediate(&__ctx);
    }
    
private:

    void knownMostDerivedAsKnownIntermediate(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownMostDerivedAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediatePtr&);
    bool knownMostDerivedAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediatePtr&, const ::Ice::Context&);
    #endif

    void knownMostDerivedAsKnownMostDerived()
    {
        knownMostDerivedAsKnownMostDerived(0);
    }
    void knownMostDerivedAsKnownMostDerived(const ::Ice::Context& __ctx)
    {
        knownMostDerivedAsKnownMostDerived(&__ctx);
    }
    
private:

    void knownMostDerivedAsKnownMostDerived(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool knownMostDerivedAsKnownMostDerived_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerivedPtr&);
    bool knownMostDerivedAsKnownMostDerived_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerivedPtr&, const ::Ice::Context&);
    #endif

    void unknownMostDerived1AsBase()
    {
        unknownMostDerived1AsBase(0);
    }
    void unknownMostDerived1AsBase(const ::Ice::Context& __ctx)
    {
        unknownMostDerived1AsBase(&__ctx);
    }
    
private:

    void unknownMostDerived1AsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool unknownMostDerived1AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsBasePtr&);
    bool unknownMostDerived1AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsBasePtr&, const ::Ice::Context&);
    #endif

    void unknownMostDerived1AsKnownIntermediate()
    {
        unknownMostDerived1AsKnownIntermediate(0);
    }
    void unknownMostDerived1AsKnownIntermediate(const ::Ice::Context& __ctx)
    {
        unknownMostDerived1AsKnownIntermediate(&__ctx);
    }
    
private:

    void unknownMostDerived1AsKnownIntermediate(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool unknownMostDerived1AsKnownIntermediate_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediatePtr&);
    bool unknownMostDerived1AsKnownIntermediate_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediatePtr&, const ::Ice::Context&);
    #endif

    void unknownMostDerived2AsBase()
    {
        unknownMostDerived2AsBase(0);
    }
    void unknownMostDerived2AsBase(const ::Ice::Context& __ctx)
    {
        unknownMostDerived2AsBase(&__ctx);
    }
    
private:

    void unknownMostDerived2AsBase(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool unknownMostDerived2AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived2AsBasePtr&);
    bool unknownMostDerived2AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived2AsBasePtr&, const ::Ice::Context&);
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
    #ifdef ICEE_HAS_AMI
    bool shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr&);
    bool shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr&, const ::Ice::Context&);
    #endif
    
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
