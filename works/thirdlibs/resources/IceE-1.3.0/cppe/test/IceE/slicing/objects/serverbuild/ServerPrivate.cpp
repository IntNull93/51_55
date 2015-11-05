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

::Ice::Object* IceInternal::upCast(::Test::SBSUnknownDerived* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::SBSUnknownDerived* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::SUnknown* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::SUnknown* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::D2* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::D2* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::D4* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::D4* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::SBSUnknownDerivedPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SBSUnknownDerived;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::SUnknownPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SUnknown;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::D2Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D2;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::D4Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D4;
        v->__copyFrom(proxy);
    }
}

Test::UnknownDerivedException::UnknownDerivedException(const ::std::string& __ice_sbe, const ::Test::BPtr& __ice_pb, const ::std::string& __ice_sude, const ::Test::D2Ptr& __ice_pd2) :
    ::Test::BaseException(__ice_sbe, __ice_pb),
    sude(__ice_sude),
    pd2(__ice_pd2)
{
}

Test::UnknownDerivedException::~UnknownDerivedException() throw()
{
}

static const char* __Test__UnknownDerivedException_name = "Test::UnknownDerivedException";

::std::string
Test::UnknownDerivedException::ice_name() const
{
    return __Test__UnknownDerivedException_name;
}

::Ice::Exception*
Test::UnknownDerivedException::ice_clone() const
{
    return new UnknownDerivedException(*this);
}

void
Test::UnknownDerivedException::ice_throw() const
{
    throw *this;
}

void
Test::UnknownDerivedException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::UnknownDerivedException"), false);
    __os->startWriteSlice();
    __os->write(sude);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pd2.get())));
    __os->endWriteSlice();
    ::Test::BaseException::__write(__os);
}

void
Test::UnknownDerivedException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(sude);
    __is->read(::Test::__patch__D2Ptr, &pd2);
    __is->endReadSlice();
    ::Test::BaseException::__read(__is, true);
}

struct __F__Test__UnknownDerivedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::UnknownDerivedException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__UnknownDerivedException__Ptr = new __F__Test__UnknownDerivedException;

const ::IceInternal::UserExceptionFactoryPtr&
Test::UnknownDerivedException::ice_factory()
{
    return __F__Test__UnknownDerivedException__Ptr;
}

class __F__Test__UnknownDerivedException__Init
{
public:

    __F__Test__UnknownDerivedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::UnknownDerivedException", ::Test::UnknownDerivedException::ice_factory());
    }

    ~__F__Test__UnknownDerivedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::UnknownDerivedException");
    }
};

static __F__Test__UnknownDerivedException__Init __F__Test__UnknownDerivedException__i;

#ifdef __APPLE__
extern "C" { void __F__Test__UnknownDerivedException__initializer() {} }
#endif

Test::SBSUnknownDerived::SBSUnknownDerived(const ::std::string& __ice_sb, const ::std::string& __ice_sbsud) :
    ::Test::SBase(__ice_sb)
    ,
    sbsud(__ice_sbsud)
{
}

static const ::std::string __Test__SBSUnknownDerived_ids[3] =
{
    "::Ice::Object",
    "::Test::SBSUnknownDerived",
    "::Test::SBase"
};

bool
Test::SBSUnknownDerived::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SBSUnknownDerived_ids, __Test__SBSUnknownDerived_ids + 3, _s);
}

::std::vector< ::std::string>
Test::SBSUnknownDerived::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SBSUnknownDerived_ids[0], &__Test__SBSUnknownDerived_ids[3]);
}

const ::std::string&
Test::SBSUnknownDerived::ice_id(const ::Ice::Current&) const
{
    return __Test__SBSUnknownDerived_ids[1];
}

const ::std::string&
Test::SBSUnknownDerived::ice_staticId()
{
    return __Test__SBSUnknownDerived_ids[1];
}

void
Test::SBSUnknownDerived::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sbsud);
    __os->endWriteSlice();
    ::Test::SBase::__write(__os);
}

void
Test::SBSUnknownDerived::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sbsud);
    __is->endReadSlice();
    ::Test::SBase::__read(__is, true);
}

class __F__Test__SBSUnknownDerived : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::SBSUnknownDerived::ice_staticId());
        return new ::Test::SBSUnknownDerived;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__SBSUnknownDerived_Ptr = new __F__Test__SBSUnknownDerived;

const ::Ice::ObjectFactoryPtr&
Test::SBSUnknownDerived::ice_factory()
{
    return __F__Test__SBSUnknownDerived_Ptr;
}

class __F__Test__SBSUnknownDerived__Init
{
public:

    __F__Test__SBSUnknownDerived__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SBSUnknownDerived::ice_staticId(), ::Test::SBSUnknownDerived::ice_factory());
    }

    ~__F__Test__SBSUnknownDerived__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SBSUnknownDerived::ice_staticId());
    }
};

static __F__Test__SBSUnknownDerived__Init __F__Test__SBSUnknownDerived__i;

#ifdef __APPLE__
extern "C" { void __F__Test__SBSUnknownDerived__initializer() {} }
#endif


bool
Test::operator==(const ::Test::SBSUnknownDerived& l, const ::Test::SBSUnknownDerived& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::SBSUnknownDerived& l, const ::Test::SBSUnknownDerived& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__SBSUnknownDerivedPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::SBSUnknownDerivedPtr* p = static_cast< ::Test::SBSUnknownDerivedPtr*>(__addr);
    assert(p);
    *p = ::Test::SBSUnknownDerivedPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::SBSUnknownDerived::ice_staticId(), v->ice_id());
    }
}

Test::SUnknown::SUnknown(const ::std::string& __ice_su) :
    su(__ice_su)
{
}

static const ::std::string __Test__SUnknown_ids[2] =
{
    "::Ice::Object",
    "::Test::SUnknown"
};

bool
Test::SUnknown::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SUnknown_ids, __Test__SUnknown_ids + 2, _s);
}

::std::vector< ::std::string>
Test::SUnknown::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SUnknown_ids[0], &__Test__SUnknown_ids[2]);
}

const ::std::string&
Test::SUnknown::ice_id(const ::Ice::Current&) const
{
    return __Test__SUnknown_ids[1];
}

const ::std::string&
Test::SUnknown::ice_staticId()
{
    return __Test__SUnknown_ids[1];
}

void
Test::SUnknown::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(su);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::SUnknown::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(su);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__SUnknown : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::SUnknown::ice_staticId());
        return new ::Test::SUnknown;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__SUnknown_Ptr = new __F__Test__SUnknown;

const ::Ice::ObjectFactoryPtr&
Test::SUnknown::ice_factory()
{
    return __F__Test__SUnknown_Ptr;
}

class __F__Test__SUnknown__Init
{
public:

    __F__Test__SUnknown__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SUnknown::ice_staticId(), ::Test::SUnknown::ice_factory());
    }

    ~__F__Test__SUnknown__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SUnknown::ice_staticId());
    }
};

static __F__Test__SUnknown__Init __F__Test__SUnknown__i;

#ifdef __APPLE__
extern "C" { void __F__Test__SUnknown__initializer() {} }
#endif


bool
Test::operator==(const ::Test::SUnknown& l, const ::Test::SUnknown& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::SUnknown& l, const ::Test::SUnknown& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__SUnknownPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::SUnknownPtr* p = static_cast< ::Test::SUnknownPtr*>(__addr);
    assert(p);
    *p = ::Test::SUnknownPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::SUnknown::ice_staticId(), v->ice_id());
    }
}

Test::D2::D2(const ::std::string& __ice_sb, const ::Test::BPtr& __ice_pb, const ::std::string& __ice_sd2, const ::Test::BPtr& __ice_pd2) :
    ::Test::B(__ice_sb, __ice_pb)
    ,
    sd2(__ice_sd2),
    pd2(__ice_pd2)
{
}

static const ::std::string __Test__D2_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D2"
};

bool
Test::D2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D2_ids, __Test__D2_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D2_ids[0], &__Test__D2_ids[3]);
}

const ::std::string&
Test::D2::ice_id(const ::Ice::Current&) const
{
    return __Test__D2_ids[2];
}

const ::std::string&
Test::D2::ice_staticId()
{
    return __Test__D2_ids[2];
}

void
Test::D2::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sd2);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pd2.get())));
    __os->endWriteSlice();
    ::Test::B::__write(__os);
}

void
Test::D2::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sd2);
    __is->read(::Test::__patch__BPtr, &pd2);
    __is->endReadSlice();
    ::Test::B::__read(__is, true);
}

class __F__Test__D2 : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::D2::ice_staticId());
        return new ::Test::D2;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__D2_Ptr = new __F__Test__D2;

const ::Ice::ObjectFactoryPtr&
Test::D2::ice_factory()
{
    return __F__Test__D2_Ptr;
}

class __F__Test__D2__Init
{
public:

    __F__Test__D2__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D2::ice_staticId(), ::Test::D2::ice_factory());
    }

    ~__F__Test__D2__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D2::ice_staticId());
    }
};

static __F__Test__D2__Init __F__Test__D2__i;

#ifdef __APPLE__
extern "C" { void __F__Test__D2__initializer() {} }
#endif


bool
Test::operator==(const ::Test::D2& l, const ::Test::D2& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::D2& l, const ::Test::D2& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__D2Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::D2Ptr* p = static_cast< ::Test::D2Ptr*>(__addr);
    assert(p);
    *p = ::Test::D2Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::D2::ice_staticId(), v->ice_id());
    }
}

Test::D4::D4(const ::std::string& __ice_sb, const ::Test::BPtr& __ice_pb, const ::Test::BPtr& __ice_p1, const ::Test::BPtr& __ice_p2) :
    ::Test::B(__ice_sb, __ice_pb)
    ,
    p1(__ice_p1),
    p2(__ice_p2)
{
}

static const ::std::string __Test__D4_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D4"
};

bool
Test::D4::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D4_ids, __Test__D4_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D4::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D4_ids[0], &__Test__D4_ids[3]);
}

const ::std::string&
Test::D4::ice_id(const ::Ice::Current&) const
{
    return __Test__D4_ids[2];
}

const ::std::string&
Test::D4::ice_staticId()
{
    return __Test__D4_ids[2];
}

void
Test::D4::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
    __os->endWriteSlice();
    ::Test::B::__write(__os);
}

void
Test::D4::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__BPtr, &p1);
    __is->read(::Test::__patch__BPtr, &p2);
    __is->endReadSlice();
    ::Test::B::__read(__is, true);
}

class __F__Test__D4 : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::D4::ice_staticId());
        return new ::Test::D4;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__D4_Ptr = new __F__Test__D4;

const ::Ice::ObjectFactoryPtr&
Test::D4::ice_factory()
{
    return __F__Test__D4_Ptr;
}

class __F__Test__D4__Init
{
public:

    __F__Test__D4__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D4::ice_staticId(), ::Test::D4::ice_factory());
    }

    ~__F__Test__D4__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D4::ice_staticId());
    }
};

static __F__Test__D4__Init __F__Test__D4__i;

#ifdef __APPLE__
extern "C" { void __F__Test__D4__initializer() {} }
#endif


bool
Test::operator==(const ::Test::D4& l, const ::Test::D4& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::D4& l, const ::Test::D4& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__D4Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::D4Ptr* p = static_cast< ::Test::D4Ptr*>(__addr);
    assert(p);
    *p = ::Test::D4Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::D4::ice_staticId(), v->ice_id());
    }
}

const ::std::string&
IceProxy::Test::SBSUnknownDerived::ice_staticId()
{
    return __Test__SBSUnknownDerived_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::SBSUnknownDerived::__newInstance() const
{
    return new SBSUnknownDerived;
}

const ::std::string&
IceProxy::Test::SUnknown::ice_staticId()
{
    return __Test__SUnknown_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::SUnknown::__newInstance() const
{
    return new SUnknown;
}

const ::std::string&
IceProxy::Test::D2::ice_staticId()
{
    return __Test__D2_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::D2::__newInstance() const
{
    return new D2;
}

const ::std::string&
IceProxy::Test::D4::ice_staticId()
{
    return __Test__D4_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::D4::__newInstance() const
{
    return new D4;
}
