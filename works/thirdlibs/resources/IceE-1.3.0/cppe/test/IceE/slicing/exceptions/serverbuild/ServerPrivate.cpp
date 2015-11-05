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

#include <ServerPrivate.h>
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

Test::UnknownDerived::UnknownDerived(const ::std::string& __ice_b, const ::std::string& __ice_ud) :
    ::Test::Base(__ice_b),
    ud(__ice_ud)
{
}

Test::UnknownDerived::~UnknownDerived() throw()
{
}

static const char* __Test__UnknownDerived_name = "Test::UnknownDerived";

::std::string
Test::UnknownDerived::ice_name() const
{
    return __Test__UnknownDerived_name;
}

::Ice::Exception*
Test::UnknownDerived::ice_clone() const
{
    return new UnknownDerived(*this);
}

void
Test::UnknownDerived::ice_throw() const
{
    throw *this;
}

void
Test::UnknownDerived::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::UnknownDerived"), false);
    __os->startWriteSlice();
    __os->write(ud);
    __os->endWriteSlice();
    ::Test::Base::__write(__os);
}

void
Test::UnknownDerived::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(ud);
    __is->endReadSlice();
    ::Test::Base::__read(__is, true);
}

struct __F__Test__UnknownDerived : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::UnknownDerived();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__UnknownDerived__Ptr = new __F__Test__UnknownDerived;

const ::IceInternal::UserExceptionFactoryPtr&
Test::UnknownDerived::ice_factory()
{
    return __F__Test__UnknownDerived__Ptr;
}

class __F__Test__UnknownDerived__Init
{
public:

    __F__Test__UnknownDerived__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::UnknownDerived", ::Test::UnknownDerived::ice_factory());
    }

    ~__F__Test__UnknownDerived__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::UnknownDerived");
    }
};

static __F__Test__UnknownDerived__Init __F__Test__UnknownDerived__i;

#ifdef __APPLE__
extern "C" { void __F__Test__UnknownDerived__initializer() {} }
#endif

Test::UnknownIntermediate::UnknownIntermediate(const ::std::string& __ice_b, const ::std::string& __ice_ui) :
    ::Test::Base(__ice_b),
    ui(__ice_ui)
{
}

Test::UnknownIntermediate::~UnknownIntermediate() throw()
{
}

static const char* __Test__UnknownIntermediate_name = "Test::UnknownIntermediate";

::std::string
Test::UnknownIntermediate::ice_name() const
{
    return __Test__UnknownIntermediate_name;
}

::Ice::Exception*
Test::UnknownIntermediate::ice_clone() const
{
    return new UnknownIntermediate(*this);
}

void
Test::UnknownIntermediate::ice_throw() const
{
    throw *this;
}

void
Test::UnknownIntermediate::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::UnknownIntermediate"), false);
    __os->startWriteSlice();
    __os->write(ui);
    __os->endWriteSlice();
    ::Test::Base::__write(__os);
}

void
Test::UnknownIntermediate::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(ui);
    __is->endReadSlice();
    ::Test::Base::__read(__is, true);
}

struct __F__Test__UnknownIntermediate : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::UnknownIntermediate();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__UnknownIntermediate__Ptr = new __F__Test__UnknownIntermediate;

const ::IceInternal::UserExceptionFactoryPtr&
Test::UnknownIntermediate::ice_factory()
{
    return __F__Test__UnknownIntermediate__Ptr;
}

class __F__Test__UnknownIntermediate__Init
{
public:

    __F__Test__UnknownIntermediate__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::UnknownIntermediate", ::Test::UnknownIntermediate::ice_factory());
    }

    ~__F__Test__UnknownIntermediate__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::UnknownIntermediate");
    }
};

static __F__Test__UnknownIntermediate__Init __F__Test__UnknownIntermediate__i;

#ifdef __APPLE__
extern "C" { void __F__Test__UnknownIntermediate__initializer() {} }
#endif

Test::UnknownMostDerived1::UnknownMostDerived1(const ::std::string& __ice_b, const ::std::string& __ice_ki, const ::std::string& __ice_umd1) :
    ::Test::KnownIntermediate(__ice_b, __ice_ki),
    umd1(__ice_umd1)
{
}

Test::UnknownMostDerived1::~UnknownMostDerived1() throw()
{
}

static const char* __Test__UnknownMostDerived1_name = "Test::UnknownMostDerived1";

::std::string
Test::UnknownMostDerived1::ice_name() const
{
    return __Test__UnknownMostDerived1_name;
}

::Ice::Exception*
Test::UnknownMostDerived1::ice_clone() const
{
    return new UnknownMostDerived1(*this);
}

void
Test::UnknownMostDerived1::ice_throw() const
{
    throw *this;
}

void
Test::UnknownMostDerived1::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::UnknownMostDerived1"), false);
    __os->startWriteSlice();
    __os->write(umd1);
    __os->endWriteSlice();
    ::Test::KnownIntermediate::__write(__os);
}

void
Test::UnknownMostDerived1::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(umd1);
    __is->endReadSlice();
    ::Test::KnownIntermediate::__read(__is, true);
}

struct __F__Test__UnknownMostDerived1 : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::UnknownMostDerived1();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__UnknownMostDerived1__Ptr = new __F__Test__UnknownMostDerived1;

const ::IceInternal::UserExceptionFactoryPtr&
Test::UnknownMostDerived1::ice_factory()
{
    return __F__Test__UnknownMostDerived1__Ptr;
}

class __F__Test__UnknownMostDerived1__Init
{
public:

    __F__Test__UnknownMostDerived1__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::UnknownMostDerived1", ::Test::UnknownMostDerived1::ice_factory());
    }

    ~__F__Test__UnknownMostDerived1__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::UnknownMostDerived1");
    }
};

static __F__Test__UnknownMostDerived1__Init __F__Test__UnknownMostDerived1__i;

#ifdef __APPLE__
extern "C" { void __F__Test__UnknownMostDerived1__initializer() {} }
#endif

Test::UnknownMostDerived2::UnknownMostDerived2(const ::std::string& __ice_b, const ::std::string& __ice_ui, const ::std::string& __ice_umd2) :
    ::Test::UnknownIntermediate(__ice_b, __ice_ui),
    umd2(__ice_umd2)
{
}

Test::UnknownMostDerived2::~UnknownMostDerived2() throw()
{
}

static const char* __Test__UnknownMostDerived2_name = "Test::UnknownMostDerived2";

::std::string
Test::UnknownMostDerived2::ice_name() const
{
    return __Test__UnknownMostDerived2_name;
}

::Ice::Exception*
Test::UnknownMostDerived2::ice_clone() const
{
    return new UnknownMostDerived2(*this);
}

void
Test::UnknownMostDerived2::ice_throw() const
{
    throw *this;
}

void
Test::UnknownMostDerived2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::UnknownMostDerived2"), false);
    __os->startWriteSlice();
    __os->write(umd2);
    __os->endWriteSlice();
    ::Test::UnknownIntermediate::__write(__os);
}

void
Test::UnknownMostDerived2::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(umd2);
    __is->endReadSlice();
    ::Test::UnknownIntermediate::__read(__is, true);
}

struct __F__Test__UnknownMostDerived2 : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::UnknownMostDerived2();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__UnknownMostDerived2__Ptr = new __F__Test__UnknownMostDerived2;

const ::IceInternal::UserExceptionFactoryPtr&
Test::UnknownMostDerived2::ice_factory()
{
    return __F__Test__UnknownMostDerived2__Ptr;
}

class __F__Test__UnknownMostDerived2__Init
{
public:

    __F__Test__UnknownMostDerived2__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::UnknownMostDerived2", ::Test::UnknownMostDerived2::ice_factory());
    }

    ~__F__Test__UnknownMostDerived2__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::UnknownMostDerived2");
    }
};

static __F__Test__UnknownMostDerived2__Init __F__Test__UnknownMostDerived2__i;

#ifdef __APPLE__
extern "C" { void __F__Test__UnknownMostDerived2__initializer() {} }
#endif
