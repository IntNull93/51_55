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

static const ::std::string __Test__TestIntf__baseAsBase_name = "baseAsBase";

static const ::std::string __Test__TestIntf__unknownDerivedAsBase_name = "unknownDerivedAsBase";

static const ::std::string __Test__TestIntf__knownDerivedAsBase_name = "knownDerivedAsBase";

static const ::std::string __Test__TestIntf__knownDerivedAsKnownDerived_name = "knownDerivedAsKnownDerived";

static const ::std::string __Test__TestIntf__unknownIntermediateAsBase_name = "unknownIntermediateAsBase";

static const ::std::string __Test__TestIntf__knownIntermediateAsBase_name = "knownIntermediateAsBase";

static const ::std::string __Test__TestIntf__knownMostDerivedAsBase_name = "knownMostDerivedAsBase";

static const ::std::string __Test__TestIntf__knownIntermediateAsKnownIntermediate_name = "knownIntermediateAsKnownIntermediate";

static const ::std::string __Test__TestIntf__knownMostDerivedAsKnownIntermediate_name = "knownMostDerivedAsKnownIntermediate";

static const ::std::string __Test__TestIntf__knownMostDerivedAsKnownMostDerived_name = "knownMostDerivedAsKnownMostDerived";

static const ::std::string __Test__TestIntf__unknownMostDerived1AsBase_name = "unknownMostDerived1AsBase";

static const ::std::string __Test__TestIntf__unknownMostDerived1AsKnownIntermediate_name = "unknownMostDerived1AsKnownIntermediate";

static const ::std::string __Test__TestIntf__unknownMostDerived2AsBase_name = "unknownMostDerived2AsBase";

static const ::std::string __Test__TestIntf__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Test::TestIntf* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::TestIntf* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::TestIntfPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::TestIntf;
        v->__copyFrom(proxy);
    }
}

Test::Base::Base(const ::std::string& __ice_b) :
    ::Ice::UserException(),
    b(__ice_b)
{
}

Test::Base::~Base() throw()
{
}

static const char* __Test__Base_name = "Test::Base";

::std::string
Test::Base::ice_name() const
{
    return __Test__Base_name;
}

::Ice::Exception*
Test::Base::ice_clone() const
{
    return new Base(*this);
}

void
Test::Base::ice_throw() const
{
    throw *this;
}

void
Test::Base::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::Base"), false);
    __os->startWriteSlice();
    __os->write(b);
    __os->endWriteSlice();
}

void
Test::Base::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(b);
    __is->endReadSlice();
}

struct __F__Test__Base : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::Base();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__Base__Ptr = new __F__Test__Base;

const ::IceInternal::UserExceptionFactoryPtr&
Test::Base::ice_factory()
{
    return __F__Test__Base__Ptr;
}

class __F__Test__Base__Init
{
public:

    __F__Test__Base__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::Base", ::Test::Base::ice_factory());
    }

    ~__F__Test__Base__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::Base");
    }
};

static __F__Test__Base__Init __F__Test__Base__i;

#ifdef __APPLE__
extern "C" { void __F__Test__Base__initializer() {} }
#endif

Test::KnownDerived::KnownDerived(const ::std::string& __ice_b, const ::std::string& __ice_kd) :
    ::Test::Base(__ice_b),
    kd(__ice_kd)
{
}

Test::KnownDerived::~KnownDerived() throw()
{
}

static const char* __Test__KnownDerived_name = "Test::KnownDerived";

::std::string
Test::KnownDerived::ice_name() const
{
    return __Test__KnownDerived_name;
}

::Ice::Exception*
Test::KnownDerived::ice_clone() const
{
    return new KnownDerived(*this);
}

void
Test::KnownDerived::ice_throw() const
{
    throw *this;
}

void
Test::KnownDerived::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::KnownDerived"), false);
    __os->startWriteSlice();
    __os->write(kd);
    __os->endWriteSlice();
    ::Test::Base::__write(__os);
}

void
Test::KnownDerived::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(kd);
    __is->endReadSlice();
    ::Test::Base::__read(__is, true);
}

struct __F__Test__KnownDerived : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::KnownDerived();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__KnownDerived__Ptr = new __F__Test__KnownDerived;

const ::IceInternal::UserExceptionFactoryPtr&
Test::KnownDerived::ice_factory()
{
    return __F__Test__KnownDerived__Ptr;
}

class __F__Test__KnownDerived__Init
{
public:

    __F__Test__KnownDerived__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::KnownDerived", ::Test::KnownDerived::ice_factory());
    }

    ~__F__Test__KnownDerived__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::KnownDerived");
    }
};

static __F__Test__KnownDerived__Init __F__Test__KnownDerived__i;

#ifdef __APPLE__
extern "C" { void __F__Test__KnownDerived__initializer() {} }
#endif

Test::KnownIntermediate::KnownIntermediate(const ::std::string& __ice_b, const ::std::string& __ice_ki) :
    ::Test::Base(__ice_b),
    ki(__ice_ki)
{
}

Test::KnownIntermediate::~KnownIntermediate() throw()
{
}

static const char* __Test__KnownIntermediate_name = "Test::KnownIntermediate";

::std::string
Test::KnownIntermediate::ice_name() const
{
    return __Test__KnownIntermediate_name;
}

::Ice::Exception*
Test::KnownIntermediate::ice_clone() const
{
    return new KnownIntermediate(*this);
}

void
Test::KnownIntermediate::ice_throw() const
{
    throw *this;
}

void
Test::KnownIntermediate::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::KnownIntermediate"), false);
    __os->startWriteSlice();
    __os->write(ki);
    __os->endWriteSlice();
    ::Test::Base::__write(__os);
}

void
Test::KnownIntermediate::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(ki);
    __is->endReadSlice();
    ::Test::Base::__read(__is, true);
}

struct __F__Test__KnownIntermediate : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::KnownIntermediate();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__KnownIntermediate__Ptr = new __F__Test__KnownIntermediate;

const ::IceInternal::UserExceptionFactoryPtr&
Test::KnownIntermediate::ice_factory()
{
    return __F__Test__KnownIntermediate__Ptr;
}

class __F__Test__KnownIntermediate__Init
{
public:

    __F__Test__KnownIntermediate__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::KnownIntermediate", ::Test::KnownIntermediate::ice_factory());
    }

    ~__F__Test__KnownIntermediate__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::KnownIntermediate");
    }
};

static __F__Test__KnownIntermediate__Init __F__Test__KnownIntermediate__i;

#ifdef __APPLE__
extern "C" { void __F__Test__KnownIntermediate__initializer() {} }
#endif

Test::KnownMostDerived::KnownMostDerived(const ::std::string& __ice_b, const ::std::string& __ice_ki, const ::std::string& __ice_kmd) :
    ::Test::KnownIntermediate(__ice_b, __ice_ki),
    kmd(__ice_kmd)
{
}

Test::KnownMostDerived::~KnownMostDerived() throw()
{
}

static const char* __Test__KnownMostDerived_name = "Test::KnownMostDerived";

::std::string
Test::KnownMostDerived::ice_name() const
{
    return __Test__KnownMostDerived_name;
}

::Ice::Exception*
Test::KnownMostDerived::ice_clone() const
{
    return new KnownMostDerived(*this);
}

void
Test::KnownMostDerived::ice_throw() const
{
    throw *this;
}

void
Test::KnownMostDerived::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::KnownMostDerived"), false);
    __os->startWriteSlice();
    __os->write(kmd);
    __os->endWriteSlice();
    ::Test::KnownIntermediate::__write(__os);
}

void
Test::KnownMostDerived::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(kmd);
    __is->endReadSlice();
    ::Test::KnownIntermediate::__read(__is, true);
}

struct __F__Test__KnownMostDerived : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::KnownMostDerived();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__KnownMostDerived__Ptr = new __F__Test__KnownMostDerived;

const ::IceInternal::UserExceptionFactoryPtr&
Test::KnownMostDerived::ice_factory()
{
    return __F__Test__KnownMostDerived__Ptr;
}

class __F__Test__KnownMostDerived__Init
{
public:

    __F__Test__KnownMostDerived__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::KnownMostDerived", ::Test::KnownMostDerived::ice_factory());
    }

    ~__F__Test__KnownMostDerived__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::KnownMostDerived");
    }
};

static __F__Test__KnownMostDerived__Init __F__Test__KnownMostDerived__i;

#ifdef __APPLE__
extern "C" { void __F__Test__KnownMostDerived__initializer() {} }
#endif

static const ::std::string __Test__TestIntf_ids[2] =
{
    "::Ice::Object",
    "::Test::TestIntf"
};

bool
Test::TestIntf::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__TestIntf_ids, __Test__TestIntf_ids + 2, _s);
}

::std::vector< ::std::string>
Test::TestIntf::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__TestIntf_ids[0], &__Test__TestIntf_ids[2]);
}

const ::std::string&
Test::TestIntf::ice_id(const ::Ice::Current&) const
{
    return __Test__TestIntf_ids[1];
}

const ::std::string&
Test::TestIntf::ice_staticId()
{
    return __Test__TestIntf_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___baseAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        baseAsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___unknownDerivedAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        unknownDerivedAsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownDerivedAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownDerivedAsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownDerivedAsKnownDerived(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownDerivedAsKnownDerived(__current);
    }
    catch(const ::Test::KnownDerived& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___unknownIntermediateAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        unknownIntermediateAsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownIntermediateAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownIntermediateAsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownMostDerivedAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownMostDerivedAsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownIntermediateAsKnownIntermediate(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownIntermediateAsKnownIntermediate(__current);
    }
    catch(const ::Test::KnownIntermediate& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownMostDerivedAsKnownIntermediate(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownMostDerivedAsKnownIntermediate(__current);
    }
    catch(const ::Test::KnownIntermediate& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___knownMostDerivedAsKnownMostDerived(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        knownMostDerivedAsKnownMostDerived(__current);
    }
    catch(const ::Test::KnownMostDerived& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___unknownMostDerived1AsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        unknownMostDerived1AsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___unknownMostDerived1AsKnownIntermediate(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        unknownMostDerived1AsKnownIntermediate(__current);
    }
    catch(const ::Test::KnownIntermediate& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___unknownMostDerived2AsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        unknownMostDerived2AsBase(__current);
    }
    catch(const ::Test::Base& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__TestIntf_all[] =
{
    "baseAsBase",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "knownDerivedAsBase",
    "knownDerivedAsKnownDerived",
    "knownIntermediateAsBase",
    "knownIntermediateAsKnownIntermediate",
    "knownMostDerivedAsBase",
    "knownMostDerivedAsKnownIntermediate",
    "knownMostDerivedAsKnownMostDerived",
    "shutdown",
    "unknownDerivedAsBase",
    "unknownIntermediateAsBase",
    "unknownMostDerived1AsBase",
    "unknownMostDerived1AsKnownIntermediate",
    "unknownMostDerived2AsBase"
};

::Ice::DispatchStatus
Test::TestIntf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__TestIntf_all, __Test__TestIntf_all + 18, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestIntf_all)
    {
        case 0:
        {
            return ___baseAsBase(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___knownDerivedAsBase(in, current);
        }
        case 6:
        {
            return ___knownDerivedAsKnownDerived(in, current);
        }
        case 7:
        {
            return ___knownIntermediateAsBase(in, current);
        }
        case 8:
        {
            return ___knownIntermediateAsKnownIntermediate(in, current);
        }
        case 9:
        {
            return ___knownMostDerivedAsBase(in, current);
        }
        case 10:
        {
            return ___knownMostDerivedAsKnownIntermediate(in, current);
        }
        case 11:
        {
            return ___knownMostDerivedAsKnownMostDerived(in, current);
        }
        case 12:
        {
            return ___shutdown(in, current);
        }
        case 13:
        {
            return ___unknownDerivedAsBase(in, current);
        }
        case 14:
        {
            return ___unknownIntermediateAsBase(in, current);
        }
        case 15:
        {
            return ___unknownMostDerived1AsBase(in, current);
        }
        case 16:
        {
            return ___unknownMostDerived1AsKnownIntermediate(in, current);
        }
        case 17:
        {
            return ___unknownMostDerived2AsBase(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::TestIntf::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::TestIntf::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::TestIntf& l, const ::Test::TestIntf& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::TestIntf& l, const ::Test::TestIntf& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__TestIntfPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::TestIntfPtr* p = static_cast< ::Test::TestIntfPtr*>(__addr);
    assert(p);
    *p = ::Test::TestIntfPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::TestIntf::ice_staticId(), v->ice_id());
    }
}
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_baseAsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__baseAsBase_name);
        __prepare(__prx, __Test__TestIntf__baseAsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_baseAsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_unknownDerivedAsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__unknownDerivedAsBase_name);
        __prepare(__prx, __Test__TestIntf__unknownDerivedAsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_unknownDerivedAsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_knownDerivedAsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownDerivedAsBase_name);
        __prepare(__prx, __Test__TestIntf__knownDerivedAsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownDerivedAsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_knownDerivedAsKnownDerived::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownDerivedAsKnownDerived_name);
        __prepare(__prx, __Test__TestIntf__knownDerivedAsKnownDerived_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownDerivedAsKnownDerived::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::KnownDerived& __ex)
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
Test::AMI_TestIntf_unknownIntermediateAsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__unknownIntermediateAsBase_name);
        __prepare(__prx, __Test__TestIntf__unknownIntermediateAsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_unknownIntermediateAsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_knownIntermediateAsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownIntermediateAsBase_name);
        __prepare(__prx, __Test__TestIntf__knownIntermediateAsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownIntermediateAsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_knownMostDerivedAsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownMostDerivedAsBase_name);
        __prepare(__prx, __Test__TestIntf__knownMostDerivedAsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownMostDerivedAsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_knownIntermediateAsKnownIntermediate::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownIntermediateAsKnownIntermediate_name);
        __prepare(__prx, __Test__TestIntf__knownIntermediateAsKnownIntermediate_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownIntermediateAsKnownIntermediate::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::KnownIntermediate& __ex)
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
Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediate::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownMostDerivedAsKnownIntermediate_name);
        __prepare(__prx, __Test__TestIntf__knownMostDerivedAsKnownIntermediate_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediate::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::KnownIntermediate& __ex)
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
Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerived::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__knownMostDerivedAsKnownMostDerived_name);
        __prepare(__prx, __Test__TestIntf__knownMostDerivedAsKnownMostDerived_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerived::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::KnownMostDerived& __ex)
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
Test::AMI_TestIntf_unknownMostDerived1AsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__unknownMostDerived1AsBase_name);
        __prepare(__prx, __Test__TestIntf__unknownMostDerived1AsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_unknownMostDerived1AsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediate::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__unknownMostDerived1AsKnownIntermediate_name);
        __prepare(__prx, __Test__TestIntf__unknownMostDerived1AsKnownIntermediate_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediate::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::KnownIntermediate& __ex)
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
Test::AMI_TestIntf_unknownMostDerived2AsBase::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__unknownMostDerived2AsBase_name);
        __prepare(__prx, __Test__TestIntf__unknownMostDerived2AsBase_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_unknownMostDerived2AsBase::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test::Base& __ex)
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
Test::AMI_TestIntf_shutdown::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__TestIntf__shutdown_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_shutdown::__response(bool __ok)
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

void
IceProxy::Test::TestIntf::baseAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__baseAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__baseAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::baseAsBase_async(const ::Test::AMI_TestIntf_baseAsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::baseAsBase_async(const ::Test::AMI_TestIntf_baseAsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::unknownDerivedAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__unknownDerivedAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__unknownDerivedAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::unknownDerivedAsBase_async(const ::Test::AMI_TestIntf_unknownDerivedAsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::unknownDerivedAsBase_async(const ::Test::AMI_TestIntf_unknownDerivedAsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownDerivedAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownDerivedAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownDerivedAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::knownDerivedAsBase_async(const ::Test::AMI_TestIntf_knownDerivedAsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownDerivedAsBase_async(const ::Test::AMI_TestIntf_knownDerivedAsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownDerivedAsKnownDerived(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownDerivedAsKnownDerived_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownDerivedAsKnownDerived_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::KnownDerived&)
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
IceProxy::Test::TestIntf::knownDerivedAsKnownDerived_async(const ::Test::AMI_TestIntf_knownDerivedAsKnownDerivedPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownDerivedAsKnownDerived_async(const ::Test::AMI_TestIntf_knownDerivedAsKnownDerivedPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::unknownIntermediateAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__unknownIntermediateAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__unknownIntermediateAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::unknownIntermediateAsBase_async(const ::Test::AMI_TestIntf_unknownIntermediateAsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::unknownIntermediateAsBase_async(const ::Test::AMI_TestIntf_unknownIntermediateAsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownIntermediateAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownIntermediateAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownIntermediateAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::knownIntermediateAsBase_async(const ::Test::AMI_TestIntf_knownIntermediateAsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownIntermediateAsBase_async(const ::Test::AMI_TestIntf_knownIntermediateAsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownMostDerivedAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownMostDerivedAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownMostDerivedAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::knownMostDerivedAsBase_async(const ::Test::AMI_TestIntf_knownMostDerivedAsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownMostDerivedAsBase_async(const ::Test::AMI_TestIntf_knownMostDerivedAsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownIntermediateAsKnownIntermediate(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownIntermediateAsKnownIntermediate_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownIntermediateAsKnownIntermediate_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::KnownIntermediate&)
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
IceProxy::Test::TestIntf::knownIntermediateAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownIntermediateAsKnownIntermediatePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownIntermediateAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownIntermediateAsKnownIntermediatePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownMostDerivedAsKnownIntermediate(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownMostDerivedAsKnownIntermediate_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownMostDerivedAsKnownIntermediate_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::KnownIntermediate&)
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
IceProxy::Test::TestIntf::knownMostDerivedAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediatePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownMostDerivedAsKnownIntermediate_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownIntermediatePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::knownMostDerivedAsKnownMostDerived(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__knownMostDerivedAsKnownMostDerived_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__knownMostDerivedAsKnownMostDerived_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::KnownMostDerived&)
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
IceProxy::Test::TestIntf::knownMostDerivedAsKnownMostDerived_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerivedPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::knownMostDerivedAsKnownMostDerived_async(const ::Test::AMI_TestIntf_knownMostDerivedAsKnownMostDerivedPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::unknownMostDerived1AsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__unknownMostDerived1AsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__unknownMostDerived1AsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::unknownMostDerived1AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::unknownMostDerived1AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::unknownMostDerived1AsKnownIntermediate(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__unknownMostDerived1AsKnownIntermediate_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__unknownMostDerived1AsKnownIntermediate_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::KnownIntermediate&)
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
IceProxy::Test::TestIntf::unknownMostDerived1AsKnownIntermediate_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediatePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::unknownMostDerived1AsKnownIntermediate_async(const ::Test::AMI_TestIntf_unknownMostDerived1AsKnownIntermediatePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::unknownMostDerived2AsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__unknownMostDerived2AsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__unknownMostDerived2AsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::Base&)
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
IceProxy::Test::TestIntf::unknownMostDerived2AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived2AsBasePtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::unknownMostDerived2AsBase_async(const ::Test::AMI_TestIntf_unknownMostDerived2AsBasePtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestIntf::shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

const ::std::string&
IceProxy::Test::TestIntf::ice_staticId()
{
    return __Test__TestIntf_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::TestIntf::__newInstance() const
{
    return new TestIntf;
}
