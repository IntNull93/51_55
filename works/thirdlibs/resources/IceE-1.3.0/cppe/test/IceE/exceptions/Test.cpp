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

#include <Test.h>
#include <IceE/LocalException.h>
#include <IceE/ObjectFactory.h>
#include <IceE/BasicStream.h>
#include <IceE/LocalException.h>
#include <IceE/Iterator.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

static const ::std::string __Test__Thrower__shutdown_name = "shutdown";

static const ::std::string __Test__Thrower__supportsUndeclaredExceptions_name = "supportsUndeclaredExceptions";

static const ::std::string __Test__Thrower__supportsAssertException_name = "supportsAssertException";

static const ::std::string __Test__Thrower__throwAasA_name = "throwAasA";

static const ::std::string __Test__Thrower__throwAorDasAorD_name = "throwAorDasAorD";

static const ::std::string __Test__Thrower__throwBasA_name = "throwBasA";

static const ::std::string __Test__Thrower__throwCasA_name = "throwCasA";

static const ::std::string __Test__Thrower__throwBasB_name = "throwBasB";

static const ::std::string __Test__Thrower__throwCasB_name = "throwCasB";

static const ::std::string __Test__Thrower__throwCasC_name = "throwCasC";

static const ::std::string __Test__Thrower__throwModA_name = "throwModA";

static const ::std::string __Test__Thrower__throwUndeclaredA_name = "throwUndeclaredA";

static const ::std::string __Test__Thrower__throwUndeclaredB_name = "throwUndeclaredB";

static const ::std::string __Test__Thrower__throwUndeclaredC_name = "throwUndeclaredC";

static const ::std::string __Test__Thrower__throwLocalException_name = "throwLocalException";

static const ::std::string __Test__Thrower__throwNonIceException_name = "throwNonIceException";

static const ::std::string __Test__Thrower__throwAssertException_name = "throwAssertException";

static const ::std::string __Test__WrongOperation__noSuchOperation_name = "noSuchOperation";

::Ice::Object* IceInternal::upCast(::Test::Empty* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Empty* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::Thrower* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Thrower* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::WrongOperation* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::WrongOperation* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::EmptyPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Empty;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::ThrowerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Thrower;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::WrongOperationPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::WrongOperation;
        v->__copyFrom(proxy);
    }
}

Test::A::A(::Ice::Int __ice_aMem) :
    ::Ice::UserException(),
    aMem(__ice_aMem)
{
}

Test::A::~A() throw()
{
}

static const char* __Test__A_name = "Test::A";

::std::string
Test::A::ice_name() const
{
    return __Test__A_name;
}

::Ice::Exception*
Test::A::ice_clone() const
{
    return new A(*this);
}

void
Test::A::ice_throw() const
{
    throw *this;
}

void
Test::A::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::A"), false);
    __os->startWriteSlice();
    __os->write(aMem);
    __os->endWriteSlice();
}

void
Test::A::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(aMem);
    __is->endReadSlice();
}

struct __F__Test__A : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::A();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__A__Ptr = new __F__Test__A;

const ::IceInternal::UserExceptionFactoryPtr&
Test::A::ice_factory()
{
    return __F__Test__A__Ptr;
}

class __F__Test__A__Init
{
public:

    __F__Test__A__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::A", ::Test::A::ice_factory());
    }

    ~__F__Test__A__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::A");
    }
};

static __F__Test__A__Init __F__Test__A__i;

#ifdef __APPLE__
extern "C" { void __F__Test__A__initializer() {} }
#endif

Test::B::B(::Ice::Int __ice_aMem, ::Ice::Int __ice_bMem) :
    ::Test::A(__ice_aMem),
    bMem(__ice_bMem)
{
}

Test::B::~B() throw()
{
}

static const char* __Test__B_name = "Test::B";

::std::string
Test::B::ice_name() const
{
    return __Test__B_name;
}

::Ice::Exception*
Test::B::ice_clone() const
{
    return new B(*this);
}

void
Test::B::ice_throw() const
{
    throw *this;
}

void
Test::B::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::B"), false);
    __os->startWriteSlice();
    __os->write(bMem);
    __os->endWriteSlice();
    ::Test::A::__write(__os);
}

void
Test::B::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(bMem);
    __is->endReadSlice();
    ::Test::A::__read(__is, true);
}

struct __F__Test__B : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::B();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__B__Ptr = new __F__Test__B;

const ::IceInternal::UserExceptionFactoryPtr&
Test::B::ice_factory()
{
    return __F__Test__B__Ptr;
}

class __F__Test__B__Init
{
public:

    __F__Test__B__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::B", ::Test::B::ice_factory());
    }

    ~__F__Test__B__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::B");
    }
};

static __F__Test__B__Init __F__Test__B__i;

#ifdef __APPLE__
extern "C" { void __F__Test__B__initializer() {} }
#endif

Test::C::C(::Ice::Int __ice_aMem, ::Ice::Int __ice_bMem, ::Ice::Int __ice_cMem) :
    ::Test::B(__ice_aMem, __ice_bMem),
    cMem(__ice_cMem)
{
}

Test::C::~C() throw()
{
}

static const char* __Test__C_name = "Test::C";

::std::string
Test::C::ice_name() const
{
    return __Test__C_name;
}

::Ice::Exception*
Test::C::ice_clone() const
{
    return new C(*this);
}

void
Test::C::ice_throw() const
{
    throw *this;
}

void
Test::C::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::C"), false);
    __os->startWriteSlice();
    __os->write(cMem);
    __os->endWriteSlice();
    ::Test::B::__write(__os);
}

void
Test::C::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(cMem);
    __is->endReadSlice();
    ::Test::B::__read(__is, true);
}

struct __F__Test__C : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::C();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__C__Ptr = new __F__Test__C;

const ::IceInternal::UserExceptionFactoryPtr&
Test::C::ice_factory()
{
    return __F__Test__C__Ptr;
}

class __F__Test__C__Init
{
public:

    __F__Test__C__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::C", ::Test::C::ice_factory());
    }

    ~__F__Test__C__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::C");
    }
};

static __F__Test__C__Init __F__Test__C__i;

#ifdef __APPLE__
extern "C" { void __F__Test__C__initializer() {} }
#endif

Test::D::D(::Ice::Int __ice_dMem) :
    ::Ice::UserException(),
    dMem(__ice_dMem)
{
}

Test::D::~D() throw()
{
}

static const char* __Test__D_name = "Test::D";

::std::string
Test::D::ice_name() const
{
    return __Test__D_name;
}

::Ice::Exception*
Test::D::ice_clone() const
{
    return new D(*this);
}

void
Test::D::ice_throw() const
{
    throw *this;
}

void
Test::D::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::D"), false);
    __os->startWriteSlice();
    __os->write(dMem);
    __os->endWriteSlice();
}

void
Test::D::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(dMem);
    __is->endReadSlice();
}

struct __F__Test__D : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::D();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__D__Ptr = new __F__Test__D;

const ::IceInternal::UserExceptionFactoryPtr&
Test::D::ice_factory()
{
    return __F__Test__D__Ptr;
}

class __F__Test__D__Init
{
public:

    __F__Test__D__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::D", ::Test::D::ice_factory());
    }

    ~__F__Test__D__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::D");
    }
};

static __F__Test__D__Init __F__Test__D__i;

#ifdef __APPLE__
extern "C" { void __F__Test__D__initializer() {} }
#endif

Test::Mod::A::A(::Ice::Int __ice_aMem, ::Ice::Int __ice_a2Mem) :
    ::Test::A(__ice_aMem),
    a2Mem(__ice_a2Mem)
{
}

Test::Mod::A::~A() throw()
{
}

static const char* __Test__Mod__A_name = "Test::Mod::A";

::std::string
Test::Mod::A::ice_name() const
{
    return __Test__Mod__A_name;
}

::Ice::Exception*
Test::Mod::A::ice_clone() const
{
    return new A(*this);
}

void
Test::Mod::A::ice_throw() const
{
    throw *this;
}

void
Test::Mod::A::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::Mod::A"), false);
    __os->startWriteSlice();
    __os->write(a2Mem);
    __os->endWriteSlice();
    ::Test::A::__write(__os);
}

void
Test::Mod::A::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(a2Mem);
    __is->endReadSlice();
    ::Test::A::__read(__is, true);
}

struct __F__Test__Mod__A : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::Mod::A();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__Mod__A__Ptr = new __F__Test__Mod__A;

const ::IceInternal::UserExceptionFactoryPtr&
Test::Mod::A::ice_factory()
{
    return __F__Test__Mod__A__Ptr;
}

class __F__Test__Mod__A__Init
{
public:

    __F__Test__Mod__A__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::Mod::A", ::Test::Mod::A::ice_factory());
    }

    ~__F__Test__Mod__A__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::Mod::A");
    }
};

static __F__Test__Mod__A__Init __F__Test__Mod__A__i;

#ifdef __APPLE__
extern "C" { void __F__Test__Mod__A__initializer() {} }
#endif

static const ::std::string __Test__Empty_ids[2] =
{
    "::Ice::Object",
    "::Test::Empty"
};

bool
Test::Empty::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Empty_ids, __Test__Empty_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Empty::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Empty_ids[0], &__Test__Empty_ids[2]);
}

const ::std::string&
Test::Empty::ice_id(const ::Ice::Current&) const
{
    return __Test__Empty_ids[1];
}

const ::std::string&
Test::Empty::ice_staticId()
{
    return __Test__Empty_ids[1];
}

void
Test::Empty::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Empty::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::Empty& l, const ::Test::Empty& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Empty& l, const ::Test::Empty& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__EmptyPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::EmptyPtr* p = static_cast< ::Test::EmptyPtr*>(__addr);
    assert(p);
    *p = ::Test::EmptyPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Empty::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__Thrower_ids[2] =
{
    "::Ice::Object",
    "::Test::Thrower"
};

bool
Test::Thrower::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Thrower_ids, __Test__Thrower_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Thrower::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Thrower_ids[0], &__Test__Thrower_ids[2]);
}

const ::std::string&
Test::Thrower::ice_id(const ::Ice::Current&) const
{
    return __Test__Thrower_ids[1];
}

const ::std::string&
Test::Thrower::ice_staticId()
{
    return __Test__Thrower_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___supportsUndeclaredExceptions(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = supportsUndeclaredExceptions(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___supportsAssertException(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = supportsAssertException(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwAasA(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    __is->read(a);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwAasA(a, __current);
    }
    catch(const ::Test::A& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwAorDasAorD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    __is->read(a);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwAorDasAorD(a, __current);
    }
    catch(const ::Test::A& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    catch(const ::Test::D& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwBasA(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    __is->read(a);
    __is->read(b);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwBasA(a, b, __current);
    }
    catch(const ::Test::A& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwCasA(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    ::Ice::Int c;
    __is->read(a);
    __is->read(b);
    __is->read(c);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwCasA(a, b, c, __current);
    }
    catch(const ::Test::A& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwBasB(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    __is->read(a);
    __is->read(b);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwBasB(a, b, __current);
    }
    catch(const ::Test::B& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwCasB(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    ::Ice::Int c;
    __is->read(a);
    __is->read(b);
    __is->read(c);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwCasB(a, b, c, __current);
    }
    catch(const ::Test::B& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwCasC(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    ::Ice::Int c;
    __is->read(a);
    __is->read(b);
    __is->read(c);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwCasC(a, b, c, __current);
    }
    catch(const ::Test::C& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwModA(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int a2;
    __is->read(a);
    __is->read(a2);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwModA(a, a2, __current);
    }
    catch(const ::Test::Mod::A& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwUndeclaredA(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    __is->read(a);
    throwUndeclaredA(a, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwUndeclaredB(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    __is->read(a);
    __is->read(b);
    throwUndeclaredB(a, b, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwUndeclaredC(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int a;
    ::Ice::Int b;
    ::Ice::Int c;
    __is->read(a);
    __is->read(b);
    __is->read(c);
    throwUndeclaredC(a, b, c, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwLocalException(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    throwLocalException(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwNonIceException(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    throwNonIceException(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Thrower::___throwAssertException(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    throwAssertException(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__Thrower_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown",
    "supportsAssertException",
    "supportsUndeclaredExceptions",
    "throwAasA",
    "throwAorDasAorD",
    "throwAssertException",
    "throwBasA",
    "throwBasB",
    "throwCasA",
    "throwCasB",
    "throwCasC",
    "throwLocalException",
    "throwModA",
    "throwNonIceException",
    "throwUndeclaredA",
    "throwUndeclaredB",
    "throwUndeclaredC"
};

::Ice::DispatchStatus
Test::Thrower::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__Thrower_all, __Test__Thrower_all + 21, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Thrower_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___shutdown(in, current);
        }
        case 5:
        {
            return ___supportsAssertException(in, current);
        }
        case 6:
        {
            return ___supportsUndeclaredExceptions(in, current);
        }
        case 7:
        {
            return ___throwAasA(in, current);
        }
        case 8:
        {
            return ___throwAorDasAorD(in, current);
        }
        case 9:
        {
            return ___throwAssertException(in, current);
        }
        case 10:
        {
            return ___throwBasA(in, current);
        }
        case 11:
        {
            return ___throwBasB(in, current);
        }
        case 12:
        {
            return ___throwCasA(in, current);
        }
        case 13:
        {
            return ___throwCasB(in, current);
        }
        case 14:
        {
            return ___throwCasC(in, current);
        }
        case 15:
        {
            return ___throwLocalException(in, current);
        }
        case 16:
        {
            return ___throwModA(in, current);
        }
        case 17:
        {
            return ___throwNonIceException(in, current);
        }
        case 18:
        {
            return ___throwUndeclaredA(in, current);
        }
        case 19:
        {
            return ___throwUndeclaredB(in, current);
        }
        case 20:
        {
            return ___throwUndeclaredC(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::Thrower::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Thrower::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::Thrower& l, const ::Test::Thrower& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Thrower& l, const ::Test::Thrower& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__ThrowerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::ThrowerPtr* p = static_cast< ::Test::ThrowerPtr*>(__addr);
    assert(p);
    *p = ::Test::ThrowerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Thrower::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__WrongOperation_ids[2] =
{
    "::Ice::Object",
    "::Test::WrongOperation"
};

bool
Test::WrongOperation::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__WrongOperation_ids, __Test__WrongOperation_ids + 2, _s);
}

::std::vector< ::std::string>
Test::WrongOperation::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__WrongOperation_ids[0], &__Test__WrongOperation_ids[2]);
}

const ::std::string&
Test::WrongOperation::ice_id(const ::Ice::Current&) const
{
    return __Test__WrongOperation_ids[1];
}

const ::std::string&
Test::WrongOperation::ice_staticId()
{
    return __Test__WrongOperation_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::WrongOperation::___noSuchOperation(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    noSuchOperation(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__WrongOperation_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "noSuchOperation"
};

::Ice::DispatchStatus
Test::WrongOperation::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__WrongOperation_all, __Test__WrongOperation_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__WrongOperation_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___noSuchOperation(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::WrongOperation::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::WrongOperation::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::WrongOperation& l, const ::Test::WrongOperation& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::WrongOperation& l, const ::Test::WrongOperation& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__WrongOperationPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::WrongOperationPtr* p = static_cast< ::Test::WrongOperationPtr*>(__addr);
    assert(p);
    *p = ::Test::WrongOperationPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::WrongOperation::ice_staticId(), v->ice_id());
    }
}
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_shutdown::__invoke(const ::Test::ThrowerPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__shutdown_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_shutdown::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_supportsUndeclaredExceptions::__invoke(const ::Test::ThrowerPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__supportsUndeclaredExceptions_name);
        __prepare(__prx, __Test__Thrower__supportsUndeclaredExceptions_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_supportsUndeclaredExceptions::__response(bool __ok)
{
    bool __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(__ret);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response(__ret);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_supportsAssertException::__invoke(const ::Test::ThrowerPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__supportsAssertException_name);
        __prepare(__prx, __Test__Thrower__supportsAssertException_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_supportsAssertException::__response(bool __ok)
{
    bool __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(__ret);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response(__ret);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwAasA::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwAasA_name);
        __prepare(__prx, __Test__Thrower__throwAasA_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwAasA::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::A& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwAorDasAorD::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwAorDasAorD_name);
        __prepare(__prx, __Test__Thrower__throwAorDasAorD_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwAorDasAorD::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::A& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Test::D& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwBasA::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwBasA_name);
        __prepare(__prx, __Test__Thrower__throwBasA_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwBasA::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::A& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwCasA::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwCasA_name);
        __prepare(__prx, __Test__Thrower__throwCasA_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->write(c);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwCasA::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::A& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwBasB::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwBasB_name);
        __prepare(__prx, __Test__Thrower__throwBasB_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwBasB::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::B& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwCasB::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwCasB_name);
        __prepare(__prx, __Test__Thrower__throwCasB_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->write(c);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwCasB::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::B& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwCasC::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwCasC_name);
        __prepare(__prx, __Test__Thrower__throwCasC_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->write(c);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwCasC::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::C& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwModA::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int a2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__Thrower__throwModA_name);
        __prepare(__prx, __Test__Thrower__throwModA_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(a2);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwModA::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Mod::A& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwUndeclaredA::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__throwUndeclaredA_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwUndeclaredA::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwUndeclaredB::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__throwUndeclaredB_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwUndeclaredB::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwUndeclaredC::__invoke(const ::Test::ThrowerPrx& __prx, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__throwUndeclaredC_name, ::Ice::Normal, __ctx);
        __os->write(a);
        __os->write(b);
        __os->write(c);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwUndeclaredC::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwLocalException::__invoke(const ::Test::ThrowerPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__throwLocalException_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwLocalException::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwNonIceException::__invoke(const ::Test::ThrowerPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__throwNonIceException_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwNonIceException::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Thrower_throwAssertException::__invoke(const ::Test::ThrowerPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Thrower__throwAssertException_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_Thrower_throwAssertException::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_WrongOperation_noSuchOperation::__invoke(const ::Test::WrongOperationPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__WrongOperation__noSuchOperation_name, ::Ice::Normal, __ctx);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
}

void
Test::AMI_WrongOperation_noSuchOperation::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
    catch(...)
    {
        throw;
    }
#endif
    ice_response();
    __releaseCallback();
}
#endif

const ::std::string&
IceProxy::Test::Empty::ice_staticId()
{
    return __Test__Empty_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Empty::__newInstance() const
{
    return new Empty;
}

void
IceProxy::Test::Thrower::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__shutdown_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::shutdown_async(const ::Test::AMI_Thrower_shutdownPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Thrower::shutdown_async(const ::Test::AMI_Thrower_shutdownPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

bool
IceProxy::Test::Thrower::supportsUndeclaredExceptions(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__supportsUndeclaredExceptions_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__supportsUndeclaredExceptions_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                bool __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(__ret);
                return __ret;
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::supportsUndeclaredExceptions_async(const ::Test::AMI_Thrower_supportsUndeclaredExceptionsPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Thrower::supportsUndeclaredExceptions_async(const ::Test::AMI_Thrower_supportsUndeclaredExceptionsPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

bool
IceProxy::Test::Thrower::supportsAssertException(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__supportsAssertException_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__supportsAssertException_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                bool __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(__ret);
                return __ret;
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::supportsAssertException_async(const ::Test::AMI_Thrower_supportsAssertExceptionPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Thrower::supportsAssertException_async(const ::Test::AMI_Thrower_supportsAssertExceptionPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwAasA(::Ice::Int a, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwAasA_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwAasA_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::A&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwAasA_async(const ::Test::AMI_Thrower_throwAasAPtr& __cb, ::Ice::Int a)
{
    return __cb->__invoke(this, a, 0);
}

bool
IceProxy::Test::Thrower::throwAasA_async(const ::Test::AMI_Thrower_throwAasAPtr& __cb, ::Ice::Int a, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwAorDasAorD(::Ice::Int a, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwAorDasAorD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwAorDasAorD_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::A&)
                    {
                        throw;
                    }
                    catch(const ::Test::D&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwAorDasAorD_async(const ::Test::AMI_Thrower_throwAorDasAorDPtr& __cb, ::Ice::Int a)
{
    return __cb->__invoke(this, a, 0);
}

bool
IceProxy::Test::Thrower::throwAorDasAorD_async(const ::Test::AMI_Thrower_throwAorDasAorDPtr& __cb, ::Ice::Int a, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwBasA(::Ice::Int a, ::Ice::Int b, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwBasA_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwBasA_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::A&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwBasA_async(const ::Test::AMI_Thrower_throwBasAPtr& __cb, ::Ice::Int a, ::Ice::Int b)
{
    return __cb->__invoke(this, a, b, 0);
}

bool
IceProxy::Test::Thrower::throwBasA_async(const ::Test::AMI_Thrower_throwBasAPtr& __cb, ::Ice::Int a, ::Ice::Int b, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwCasA(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwCasA_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwCasA_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
                __os->write(c);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::A&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwCasA_async(const ::Test::AMI_Thrower_throwCasAPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
{
    return __cb->__invoke(this, a, b, c, 0);
}

bool
IceProxy::Test::Thrower::throwCasA_async(const ::Test::AMI_Thrower_throwCasAPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, c, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwBasB(::Ice::Int a, ::Ice::Int b, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwBasB_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwBasB_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::B&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwBasB_async(const ::Test::AMI_Thrower_throwBasBPtr& __cb, ::Ice::Int a, ::Ice::Int b)
{
    return __cb->__invoke(this, a, b, 0);
}

bool
IceProxy::Test::Thrower::throwBasB_async(const ::Test::AMI_Thrower_throwBasBPtr& __cb, ::Ice::Int a, ::Ice::Int b, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwCasB(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwCasB_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwCasB_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
                __os->write(c);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::B&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwCasB_async(const ::Test::AMI_Thrower_throwCasBPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
{
    return __cb->__invoke(this, a, b, c, 0);
}

bool
IceProxy::Test::Thrower::throwCasB_async(const ::Test::AMI_Thrower_throwCasBPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, c, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwCasC(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwCasC_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwCasC_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
                __os->write(c);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::C&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwCasC_async(const ::Test::AMI_Thrower_throwCasCPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
{
    return __cb->__invoke(this, a, b, c, 0);
}

bool
IceProxy::Test::Thrower::throwCasC_async(const ::Test::AMI_Thrower_throwCasCPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, c, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwModA(::Ice::Int a, ::Ice::Int a2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Thrower__throwModA_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwModA_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(a2);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Mod::A&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwModA_async(const ::Test::AMI_Thrower_throwModAPtr& __cb, ::Ice::Int a, ::Ice::Int a2)
{
    return __cb->__invoke(this, a, a2, 0);
}

bool
IceProxy::Test::Thrower::throwModA_async(const ::Test::AMI_Thrower_throwModAPtr& __cb, ::Ice::Int a, ::Ice::Int a2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, a2, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwUndeclaredA(::Ice::Int a, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwUndeclaredA_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwUndeclaredA_async(const ::Test::AMI_Thrower_throwUndeclaredAPtr& __cb, ::Ice::Int a)
{
    return __cb->__invoke(this, a, 0);
}

bool
IceProxy::Test::Thrower::throwUndeclaredA_async(const ::Test::AMI_Thrower_throwUndeclaredAPtr& __cb, ::Ice::Int a, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwUndeclaredB(::Ice::Int a, ::Ice::Int b, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwUndeclaredB_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwUndeclaredB_async(const ::Test::AMI_Thrower_throwUndeclaredBPtr& __cb, ::Ice::Int a, ::Ice::Int b)
{
    return __cb->__invoke(this, a, b, 0);
}

bool
IceProxy::Test::Thrower::throwUndeclaredB_async(const ::Test::AMI_Thrower_throwUndeclaredBPtr& __cb, ::Ice::Int a, ::Ice::Int b, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwUndeclaredC(::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwUndeclaredC_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(a);
                __os->write(b);
                __os->write(c);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwUndeclaredC_async(const ::Test::AMI_Thrower_throwUndeclaredCPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c)
{
    return __cb->__invoke(this, a, b, c, 0);
}

bool
IceProxy::Test::Thrower::throwUndeclaredC_async(const ::Test::AMI_Thrower_throwUndeclaredCPtr& __cb, ::Ice::Int a, ::Ice::Int b, ::Ice::Int c, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, a, b, c, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwLocalException(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwLocalException_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwLocalException_async(const ::Test::AMI_Thrower_throwLocalExceptionPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Thrower::throwLocalException_async(const ::Test::AMI_Thrower_throwLocalExceptionPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwNonIceException(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwNonIceException_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwNonIceException_async(const ::Test::AMI_Thrower_throwNonIceExceptionPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Thrower::throwNonIceException_async(const ::Test::AMI_Thrower_throwNonIceExceptionPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::Thrower::throwAssertException(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Thrower__throwAssertException_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Thrower::throwAssertException_async(const ::Test::AMI_Thrower_throwAssertExceptionPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Thrower::throwAssertException_async(const ::Test::AMI_Thrower_throwAssertExceptionPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

const ::std::string&
IceProxy::Test::Thrower::ice_staticId()
{
    return __Test__Thrower_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Thrower::__newInstance() const
{
    return new Thrower;
}

void
IceProxy::Test::WrongOperation::noSuchOperation(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__WrongOperation__noSuchOperation_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::WrongOperation::noSuchOperation_async(const ::Test::AMI_WrongOperation_noSuchOperationPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::WrongOperation::noSuchOperation_async(const ::Test::AMI_WrongOperation_noSuchOperationPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

const ::std::string&
IceProxy::Test::WrongOperation::ice_staticId()
{
    return __Test__WrongOperation_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::WrongOperation::__newInstance() const
{
    return new WrongOperation;
}
