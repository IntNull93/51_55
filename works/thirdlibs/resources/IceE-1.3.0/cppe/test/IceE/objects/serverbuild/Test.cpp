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

static const ::std::string __Test__A__postUnmarshalInvoked_name = "postUnmarshalInvoked";

static const ::std::string __Test__C__postUnmarshalInvoked_name = "postUnmarshalInvoked";

static const ::std::string __Test__D__postUnmarshalInvoked_name = "postUnmarshalInvoked";

static const ::std::string __Test__E__checkValues_name = "checkValues";

static const ::std::string __Test__F__checkValues_name = "checkValues";

static const ::std::string __Test__Initial__shutdown_name = "shutdown";

static const ::std::string __Test__Initial__getB1_name = "getB1";

static const ::std::string __Test__Initial__getB2_name = "getB2";

static const ::std::string __Test__Initial__getC_name = "getC";

static const ::std::string __Test__Initial__getD_name = "getD";

static const ::std::string __Test__Initial__getE_name = "getE";

static const ::std::string __Test__Initial__getF_name = "getF";

static const ::std::string __Test__Initial__getAll_name = "getAll";

static const ::std::string __Test__Initial__getI_name = "getI";

static const ::std::string __Test__Initial__getJ_name = "getJ";

static const ::std::string __Test__Initial__getH_name = "getH";

static const ::std::string __Test__Initial__setI_name = "setI";

static const ::std::string __Test__UnexpectedObjectExceptionTest__op_name = "op";

::Ice::Object* IceInternal::upCast(::Test::Base* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Base* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::A* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::A* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::B* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::B* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::C* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::C* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::D* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::D* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::E* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::E* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::F* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::F* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::I* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::I* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::J* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::J* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::H* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::H* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::Initial* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Initial* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::Empty* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Empty* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::AlsoEmpty* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::AlsoEmpty* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::UnexpectedObjectExceptionTest* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::UnexpectedObjectExceptionTest* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::COneMember* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::COneMember* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::CTwoMembers* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::CTwoMembers* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::BasePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Base;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::APrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::A;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::BPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::B;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::CPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::C;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::DPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::EPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::E;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::FPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::F;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::IPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::I;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::JPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::J;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::HPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::H;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::InitialPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Initial;
        v->__copyFrom(proxy);
    }
}

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
Test::__read(::IceInternal::BasicStream* __is, ::Test::AlsoEmptyPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::AlsoEmpty;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::UnexpectedObjectExceptionTestPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::UnexpectedObjectExceptionTest;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::COneMemberPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::COneMember;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::CTwoMembersPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::CTwoMembers;
        v->__copyFrom(proxy);
    }
}

bool
Test::S::operator==(const S& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(str != __rhs.str)
    {
        return false;
    }
    return true;
}

bool
Test::S::operator<(const S& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(str < __rhs.str)
    {
        return true;
    }
    else if(__rhs.str < str)
    {
        return false;
    }
    return false;
}

void
Test::S::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(str);
}

void
Test::S::__read(::IceInternal::BasicStream* __is)
{
    __is->read(str);
}

Test::EOneMember::EOneMember(const ::Test::EmptyPtr& __ice_e) :
    ::Ice::UserException(),
    e(__ice_e)
{
}

Test::EOneMember::~EOneMember() throw()
{
}

static const char* __Test__EOneMember_name = "Test::EOneMember";

::std::string
Test::EOneMember::ice_name() const
{
    return __Test__EOneMember_name;
}

::Ice::Exception*
Test::EOneMember::ice_clone() const
{
    return new EOneMember(*this);
}

void
Test::EOneMember::ice_throw() const
{
    throw *this;
}

void
Test::EOneMember::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::EOneMember"), false);
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e.get())));
    __os->endWriteSlice();
}

void
Test::EOneMember::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__EmptyPtr, &e);
    __is->endReadSlice();
}

bool
Test::EOneMember::__usesClasses() const
{
    return true;
}

struct __F__Test__EOneMember : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::EOneMember();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__EOneMember__Ptr = new __F__Test__EOneMember;

const ::IceInternal::UserExceptionFactoryPtr&
Test::EOneMember::ice_factory()
{
    return __F__Test__EOneMember__Ptr;
}

class __F__Test__EOneMember__Init
{
public:

    __F__Test__EOneMember__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::EOneMember", ::Test::EOneMember::ice_factory());
    }

    ~__F__Test__EOneMember__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::EOneMember");
    }
};

static __F__Test__EOneMember__Init __F__Test__EOneMember__i;

#ifdef __APPLE__
extern "C" { void __F__Test__EOneMember__initializer() {} }
#endif

Test::ETwoMembers::ETwoMembers(const ::Test::EmptyPtr& __ice_e1, const ::Test::EmptyPtr& __ice_e2) :
    ::Ice::UserException(),
    e1(__ice_e1),
    e2(__ice_e2)
{
}

Test::ETwoMembers::~ETwoMembers() throw()
{
}

static const char* __Test__ETwoMembers_name = "Test::ETwoMembers";

::std::string
Test::ETwoMembers::ice_name() const
{
    return __Test__ETwoMembers_name;
}

::Ice::Exception*
Test::ETwoMembers::ice_clone() const
{
    return new ETwoMembers(*this);
}

void
Test::ETwoMembers::ice_throw() const
{
    throw *this;
}

void
Test::ETwoMembers::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::ETwoMembers"), false);
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e2.get())));
    __os->endWriteSlice();
}

void
Test::ETwoMembers::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__EmptyPtr, &e1);
    __is->read(::Test::__patch__EmptyPtr, &e2);
    __is->endReadSlice();
}

bool
Test::ETwoMembers::__usesClasses() const
{
    return true;
}

struct __F__Test__ETwoMembers : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::ETwoMembers();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__ETwoMembers__Ptr = new __F__Test__ETwoMembers;

const ::IceInternal::UserExceptionFactoryPtr&
Test::ETwoMembers::ice_factory()
{
    return __F__Test__ETwoMembers__Ptr;
}

class __F__Test__ETwoMembers__Init
{
public:

    __F__Test__ETwoMembers__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::ETwoMembers", ::Test::ETwoMembers::ice_factory());
    }

    ~__F__Test__ETwoMembers__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::ETwoMembers");
    }
};

static __F__Test__ETwoMembers__Init __F__Test__ETwoMembers__i;

#ifdef __APPLE__
extern "C" { void __F__Test__ETwoMembers__initializer() {} }
#endif

bool
Test::SOneMember::operator==(const SOneMember& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(e != __rhs.e)
    {
        return false;
    }
    return true;
}

bool
Test::SOneMember::operator<(const SOneMember& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(e < __rhs.e)
    {
        return true;
    }
    else if(__rhs.e < e)
    {
        return false;
    }
    return false;
}

void
Test::SOneMember::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e.get())));
}

void
Test::SOneMember::__read(::IceInternal::BasicStream* __is)
{
    __is->read(::Test::__patch__EmptyPtr, &e);
}

bool
Test::STwoMembers::operator==(const STwoMembers& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(e1 != __rhs.e1)
    {
        return false;
    }
    if(e2 != __rhs.e2)
    {
        return false;
    }
    return true;
}

bool
Test::STwoMembers::operator<(const STwoMembers& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(e1 < __rhs.e1)
    {
        return true;
    }
    else if(__rhs.e1 < e1)
    {
        return false;
    }
    if(e2 < __rhs.e2)
    {
        return true;
    }
    else if(__rhs.e2 < e2)
    {
        return false;
    }
    return false;
}

void
Test::STwoMembers::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e2.get())));
}

void
Test::STwoMembers::__read(::IceInternal::BasicStream* __is)
{
    __is->read(::Test::__patch__EmptyPtr, &e1);
    __is->read(::Test::__patch__EmptyPtr, &e2);
}

void
Test::__writeDOneMember(::IceInternal::BasicStream* __os, const ::Test::DOneMember& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::DOneMember::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
Test::__readDOneMember(::IceInternal::BasicStream* __is, ::Test::DOneMember& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::Test::COneMemberPtr> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::Test::DOneMember::iterator __i = v.insert(v.end(), pair);
        __is->read(::Test::__patch__COneMemberPtr, &__i->second);
    }
}

void
Test::__writeDTwoMembers(::IceInternal::BasicStream* __os, const ::Test::DTwoMembers& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::DTwoMembers::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
Test::__readDTwoMembers(::IceInternal::BasicStream* __is, ::Test::DTwoMembers& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::Test::CTwoMembersPtr> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::Test::DTwoMembers::iterator __i = v.insert(v.end(), pair);
        __is->read(::Test::__patch__CTwoMembersPtr, &__i->second);
    }
}

Test::Base::Base(const ::Test::S& __ice_theS, const ::std::string& __ice_str) :
    theS(__ice_theS),
    str(__ice_str)
{
}

static const ::std::string __Test__Base_ids[2] =
{
    "::Ice::Object",
    "::Test::Base"
};

bool
Test::Base::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Base_ids, __Test__Base_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Base::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Base_ids[0], &__Test__Base_ids[2]);
}

const ::std::string&
Test::Base::ice_id(const ::Ice::Current&) const
{
    return __Test__Base_ids[1];
}

const ::std::string&
Test::Base::ice_staticId()
{
    return __Test__Base_ids[1];
}

void
Test::Base::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    theS.__write(__os);
    __os->write(str);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Base::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    theS.__read(__is);
    __is->read(str);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__Base : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::Base::ice_staticId());
        return new ::Test::Base;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__Base_Ptr = new __F__Test__Base;

const ::Ice::ObjectFactoryPtr&
Test::Base::ice_factory()
{
    return __F__Test__Base_Ptr;
}

class __F__Test__Base__Init
{
public:

    __F__Test__Base__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::Base::ice_staticId(), ::Test::Base::ice_factory());
    }

    ~__F__Test__Base__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::Base::ice_staticId());
    }
};

static __F__Test__Base__Init __F__Test__Base__i;

#ifdef __APPLE__
extern "C" { void __F__Test__Base__initializer() {} }
#endif


bool
Test::operator==(const ::Test::Base& l, const ::Test::Base& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Base& l, const ::Test::Base& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__BasePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::BasePtr* p = static_cast< ::Test::BasePtr*>(__addr);
    assert(p);
    *p = ::Test::BasePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Base::ice_staticId(), v->ice_id());
    }
}

Test::A::A(const ::Test::BPtr& __ice_theB, const ::Test::CPtr& __ice_theC, bool __ice_preMarshalInvoked) :
    theB(__ice_theB),
    theC(__ice_theC),
    preMarshalInvoked(__ice_preMarshalInvoked)
{
}

static const ::std::string __Test__A_ids[2] =
{
    "::Ice::Object",
    "::Test::A"
};

bool
Test::A::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__A_ids, __Test__A_ids + 2, _s);
}

::std::vector< ::std::string>
Test::A::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__A_ids[0], &__Test__A_ids[2]);
}

const ::std::string&
Test::A::ice_id(const ::Ice::Current&) const
{
    return __Test__A_ids[1];
}

const ::std::string&
Test::A::ice_staticId()
{
    return __Test__A_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::A::___postUnmarshalInvoked(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = postUnmarshalInvoked(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__A_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "postUnmarshalInvoked"
};

::Ice::DispatchStatus
Test::A::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__A_all, __Test__A_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__A_all)
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
            return ___postUnmarshalInvoked(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::A::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theB.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theC.get())));
    __os->write(preMarshalInvoked);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::A::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__BPtr, &theB);
    __is->read(::Test::__patch__CPtr, &theC);
    __is->read(preMarshalInvoked);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::A& l, const ::Test::A& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::A& l, const ::Test::A& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__APtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::APtr* p = static_cast< ::Test::APtr*>(__addr);
    assert(p);
    *p = ::Test::APtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::A::ice_staticId(), v->ice_id());
    }
}

Test::B::B(const ::Test::BPtr& __ice_theB, const ::Test::CPtr& __ice_theC, bool __ice_preMarshalInvoked, const ::Test::APtr& __ice_theA) :
    ::Test::A(__ice_theB, __ice_theC, __ice_preMarshalInvoked)
    ,
    theA(__ice_theA)
{
}

static const ::std::string __Test__B_ids[3] =
{
    "::Ice::Object",
    "::Test::A",
    "::Test::B"
};

bool
Test::B::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__B_ids, __Test__B_ids + 3, _s);
}

::std::vector< ::std::string>
Test::B::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__B_ids[0], &__Test__B_ids[3]);
}

const ::std::string&
Test::B::ice_id(const ::Ice::Current&) const
{
    return __Test__B_ids[2];
}

const ::std::string&
Test::B::ice_staticId()
{
    return __Test__B_ids[2];
}

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__B_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "postUnmarshalInvoked"
};

::Ice::DispatchStatus
Test::B::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__B_all, __Test__B_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__B_all)
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
            return ___postUnmarshalInvoked(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::B::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theA.get())));
    __os->endWriteSlice();
    ::Test::A::__write(__os);
}

void
Test::B::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__APtr, &theA);
    __is->endReadSlice();
    ::Test::A::__read(__is, true);
}


bool
Test::operator==(const ::Test::B& l, const ::Test::B& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::B& l, const ::Test::B& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__BPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::BPtr* p = static_cast< ::Test::BPtr*>(__addr);
    assert(p);
    *p = ::Test::BPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::B::ice_staticId(), v->ice_id());
    }
}

Test::C::C(const ::Test::BPtr& __ice_theB, bool __ice_preMarshalInvoked) :
    theB(__ice_theB),
    preMarshalInvoked(__ice_preMarshalInvoked)
{
}

static const ::std::string __Test__C_ids[2] =
{
    "::Ice::Object",
    "::Test::C"
};

bool
Test::C::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__C_ids, __Test__C_ids + 2, _s);
}

::std::vector< ::std::string>
Test::C::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__C_ids[0], &__Test__C_ids[2]);
}

const ::std::string&
Test::C::ice_id(const ::Ice::Current&) const
{
    return __Test__C_ids[1];
}

const ::std::string&
Test::C::ice_staticId()
{
    return __Test__C_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::C::___postUnmarshalInvoked(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = postUnmarshalInvoked(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__C_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "postUnmarshalInvoked"
};

::Ice::DispatchStatus
Test::C::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__C_all, __Test__C_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__C_all)
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
            return ___postUnmarshalInvoked(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::C::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theB.get())));
    __os->write(preMarshalInvoked);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::C::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__BPtr, &theB);
    __is->read(preMarshalInvoked);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::C& l, const ::Test::C& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::C& l, const ::Test::C& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__CPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::CPtr* p = static_cast< ::Test::CPtr*>(__addr);
    assert(p);
    *p = ::Test::CPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::C::ice_staticId(), v->ice_id());
    }
}

Test::D::D(const ::Test::APtr& __ice_theA, const ::Test::BPtr& __ice_theB, const ::Test::CPtr& __ice_theC, bool __ice_preMarshalInvoked) :
    theA(__ice_theA),
    theB(__ice_theB),
    theC(__ice_theC),
    preMarshalInvoked(__ice_preMarshalInvoked)
{
}

static const ::std::string __Test__D_ids[2] =
{
    "::Ice::Object",
    "::Test::D"
};

bool
Test::D::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D_ids, __Test__D_ids + 2, _s);
}

::std::vector< ::std::string>
Test::D::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D_ids[0], &__Test__D_ids[2]);
}

const ::std::string&
Test::D::ice_id(const ::Ice::Current&) const
{
    return __Test__D_ids[1];
}

const ::std::string&
Test::D::ice_staticId()
{
    return __Test__D_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::D::___postUnmarshalInvoked(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = postUnmarshalInvoked(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__D_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "postUnmarshalInvoked"
};

::Ice::DispatchStatus
Test::D::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__D_all, __Test__D_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__D_all)
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
            return ___postUnmarshalInvoked(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::D::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theA.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theB.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theC.get())));
    __os->write(preMarshalInvoked);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::D::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__APtr, &theA);
    __is->read(::Test::__patch__BPtr, &theB);
    __is->read(::Test::__patch__CPtr, &theC);
    __is->read(preMarshalInvoked);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::D& l, const ::Test::D& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::D& l, const ::Test::D& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__DPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::DPtr* p = static_cast< ::Test::DPtr*>(__addr);
    assert(p);
    *p = ::Test::DPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::D::ice_staticId(), v->ice_id());
    }
}

Test::E::E(::Ice::Int __ice_i, const ::std::string& __ice_s) :
    i(__ice_i),
    s(__ice_s)
{
}

static const ::std::string __Test__E_ids[2] =
{
    "::Ice::Object",
    "::Test::E"
};

bool
Test::E::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__E_ids, __Test__E_ids + 2, _s);
}

::std::vector< ::std::string>
Test::E::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__E_ids[0], &__Test__E_ids[2]);
}

const ::std::string&
Test::E::ice_id(const ::Ice::Current&) const
{
    return __Test__E_ids[1];
}

const ::std::string&
Test::E::ice_staticId()
{
    return __Test__E_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::E::___checkValues(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = checkValues(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__E_all[] =
{
    "checkValues",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::E::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__E_all, __Test__E_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__E_all)
    {
        case 0:
        {
            return ___checkValues(in, current);
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
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::E::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(i);
    __os->write(s);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::E::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(i);
    __is->read(s);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::E& l, const ::Test::E& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::E& l, const ::Test::E& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__EPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::EPtr* p = static_cast< ::Test::EPtr*>(__addr);
    assert(p);
    *p = ::Test::EPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::E::ice_staticId(), v->ice_id());
    }
}

Test::F::F(const ::Test::EPtr& __ice_e1, const ::Test::EPtr& __ice_e2) :
    e1(__ice_e1),
    e2(__ice_e2)
{
}

static const ::std::string __Test__F_ids[2] =
{
    "::Ice::Object",
    "::Test::F"
};

bool
Test::F::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__F_ids, __Test__F_ids + 2, _s);
}

::std::vector< ::std::string>
Test::F::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__F_ids[0], &__Test__F_ids[2]);
}

const ::std::string&
Test::F::ice_id(const ::Ice::Current&) const
{
    return __Test__F_ids[1];
}

const ::std::string&
Test::F::ice_staticId()
{
    return __Test__F_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::F::___checkValues(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = checkValues(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__F_all[] =
{
    "checkValues",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::F::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__F_all, __Test__F_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__F_all)
    {
        case 0:
        {
            return ___checkValues(in, current);
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
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::F::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e2.get())));
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::F::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__EPtr, &e1);
    __is->read(::Test::__patch__EPtr, &e2);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test::operator==(const ::Test::F& l, const ::Test::F& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::F& l, const ::Test::F& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__FPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::FPtr* p = static_cast< ::Test::FPtr*>(__addr);
    assert(p);
    *p = ::Test::FPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::F::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__I_ids[2] =
{
    "::Ice::Object",
    "::Test::I"
};

bool
Test::I::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__I_ids, __Test__I_ids + 2, _s);
}

::std::vector< ::std::string>
Test::I::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__I_ids[0], &__Test__I_ids[2]);
}

const ::std::string&
Test::I::ice_id(const ::Ice::Current&) const
{
    return __Test__I_ids[1];
}

const ::std::string&
Test::I::ice_staticId()
{
    return __Test__I_ids[1];
}

void
Test::I::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::I::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::I& l, const ::Test::I& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::I& l, const ::Test::I& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__IPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::IPtr* p = static_cast< ::Test::IPtr*>(__addr);
    assert(p);
    *p = ::Test::IPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::I::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__J_ids[3] =
{
    "::Ice::Object",
    "::Test::I",
    "::Test::J"
};

bool
Test::J::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__J_ids, __Test__J_ids + 3, _s);
}

::std::vector< ::std::string>
Test::J::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__J_ids[0], &__Test__J_ids[3]);
}

const ::std::string&
Test::J::ice_id(const ::Ice::Current&) const
{
    return __Test__J_ids[2];
}

const ::std::string&
Test::J::ice_staticId()
{
    return __Test__J_ids[2];
}

void
Test::J::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::J::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::J& l, const ::Test::J& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::J& l, const ::Test::J& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__JPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::JPtr* p = static_cast< ::Test::JPtr*>(__addr);
    assert(p);
    *p = ::Test::JPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::J::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__H_ids[3] =
{
    "::Ice::Object",
    "::Test::H",
    "::Test::I"
};

bool
Test::H::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__H_ids, __Test__H_ids + 3, _s);
}

::std::vector< ::std::string>
Test::H::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__H_ids[0], &__Test__H_ids[3]);
}

const ::std::string&
Test::H::ice_id(const ::Ice::Current&) const
{
    return __Test__H_ids[1];
}

const ::std::string&
Test::H::ice_staticId()
{
    return __Test__H_ids[1];
}

void
Test::H::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::H::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::H& l, const ::Test::H& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::H& l, const ::Test::H& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__HPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::HPtr* p = static_cast< ::Test::HPtr*>(__addr);
    assert(p);
    *p = ::Test::HPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::H::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__Initial_ids[2] =
{
    "::Ice::Object",
    "::Test::Initial"
};

bool
Test::Initial::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Initial_ids, __Test__Initial_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Initial::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Initial_ids[0], &__Test__Initial_ids[2]);
}

const ::std::string&
Test::Initial::ice_id(const ::Ice::Current&) const
{
    return __Test__Initial_ids[1];
}

const ::std::string&
Test::Initial::ice_staticId()
{
    return __Test__Initial_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getB1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = getB1(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getB2(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = getB2(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getC(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::CPtr __ret = getC(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::DPtr __ret = getD(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getE(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::EPtr __ret = getE(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getF(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::FPtr __ret = getF(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getAll(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr b1;
    ::Test::BPtr b2;
    ::Test::CPtr theC;
    ::Test::DPtr theD;
    getAll(b1, b2, theC, theD, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(b1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(b2.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theC.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theD.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getI(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::IPtr __ret = getI(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getJ(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::IPtr __ret = getJ(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___getH(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::IPtr __ret = getH(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___setI(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::IPtr theI;
    __is->read(::Test::__patch__IPtr, &theI);
    __is->readPendingObjects();
    setI(theI, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__Initial_all[] =
{
    "getAll",
    "getB1",
    "getB2",
    "getC",
    "getD",
    "getE",
    "getF",
    "getH",
    "getI",
    "getJ",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setI",
    "shutdown"
};

::Ice::DispatchStatus
Test::Initial::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__Initial_all, __Test__Initial_all + 16, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Initial_all)
    {
        case 0:
        {
            return ___getAll(in, current);
        }
        case 1:
        {
            return ___getB1(in, current);
        }
        case 2:
        {
            return ___getB2(in, current);
        }
        case 3:
        {
            return ___getC(in, current);
        }
        case 4:
        {
            return ___getD(in, current);
        }
        case 5:
        {
            return ___getE(in, current);
        }
        case 6:
        {
            return ___getF(in, current);
        }
        case 7:
        {
            return ___getH(in, current);
        }
        case 8:
        {
            return ___getI(in, current);
        }
        case 9:
        {
            return ___getJ(in, current);
        }
        case 10:
        {
            return ___ice_id(in, current);
        }
        case 11:
        {
            return ___ice_ids(in, current);
        }
        case 12:
        {
            return ___ice_isA(in, current);
        }
        case 13:
        {
            return ___ice_ping(in, current);
        }
        case 14:
        {
            return ___setI(in, current);
        }
        case 15:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::Initial::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Initial::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::Initial& l, const ::Test::Initial& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Initial& l, const ::Test::Initial& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__InitialPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::InitialPtr* p = static_cast< ::Test::InitialPtr*>(__addr);
    assert(p);
    *p = ::Test::InitialPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Initial::ice_staticId(), v->ice_id());
    }
}

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

class __F__Test__Empty : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::Empty::ice_staticId());
        return new ::Test::Empty;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__Empty_Ptr = new __F__Test__Empty;

const ::Ice::ObjectFactoryPtr&
Test::Empty::ice_factory()
{
    return __F__Test__Empty_Ptr;
}

class __F__Test__Empty__Init
{
public:

    __F__Test__Empty__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::Empty::ice_staticId(), ::Test::Empty::ice_factory());
    }

    ~__F__Test__Empty__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::Empty::ice_staticId());
    }
};

static __F__Test__Empty__Init __F__Test__Empty__i;

#ifdef __APPLE__
extern "C" { void __F__Test__Empty__initializer() {} }
#endif


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

static const ::std::string __Test__AlsoEmpty_ids[2] =
{
    "::Ice::Object",
    "::Test::AlsoEmpty"
};

bool
Test::AlsoEmpty::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__AlsoEmpty_ids, __Test__AlsoEmpty_ids + 2, _s);
}

::std::vector< ::std::string>
Test::AlsoEmpty::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__AlsoEmpty_ids[0], &__Test__AlsoEmpty_ids[2]);
}

const ::std::string&
Test::AlsoEmpty::ice_id(const ::Ice::Current&) const
{
    return __Test__AlsoEmpty_ids[1];
}

const ::std::string&
Test::AlsoEmpty::ice_staticId()
{
    return __Test__AlsoEmpty_ids[1];
}

void
Test::AlsoEmpty::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::AlsoEmpty::__read(::IceInternal::BasicStream* __is, bool __rid)
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

class __F__Test__AlsoEmpty : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::AlsoEmpty::ice_staticId());
        return new ::Test::AlsoEmpty;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__AlsoEmpty_Ptr = new __F__Test__AlsoEmpty;

const ::Ice::ObjectFactoryPtr&
Test::AlsoEmpty::ice_factory()
{
    return __F__Test__AlsoEmpty_Ptr;
}

class __F__Test__AlsoEmpty__Init
{
public:

    __F__Test__AlsoEmpty__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::AlsoEmpty::ice_staticId(), ::Test::AlsoEmpty::ice_factory());
    }

    ~__F__Test__AlsoEmpty__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::AlsoEmpty::ice_staticId());
    }
};

static __F__Test__AlsoEmpty__Init __F__Test__AlsoEmpty__i;

#ifdef __APPLE__
extern "C" { void __F__Test__AlsoEmpty__initializer() {} }
#endif


bool
Test::operator==(const ::Test::AlsoEmpty& l, const ::Test::AlsoEmpty& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::AlsoEmpty& l, const ::Test::AlsoEmpty& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__AlsoEmptyPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::AlsoEmptyPtr* p = static_cast< ::Test::AlsoEmptyPtr*>(__addr);
    assert(p);
    *p = ::Test::AlsoEmptyPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::AlsoEmpty::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__UnexpectedObjectExceptionTest_ids[2] =
{
    "::Ice::Object",
    "::Test::UnexpectedObjectExceptionTest"
};

bool
Test::UnexpectedObjectExceptionTest::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__UnexpectedObjectExceptionTest_ids, __Test__UnexpectedObjectExceptionTest_ids + 2, _s);
}

::std::vector< ::std::string>
Test::UnexpectedObjectExceptionTest::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__UnexpectedObjectExceptionTest_ids[0], &__Test__UnexpectedObjectExceptionTest_ids[2]);
}

const ::std::string&
Test::UnexpectedObjectExceptionTest::ice_id(const ::Ice::Current&) const
{
    return __Test__UnexpectedObjectExceptionTest_ids[1];
}

const ::std::string&
Test::UnexpectedObjectExceptionTest::ice_staticId()
{
    return __Test__UnexpectedObjectExceptionTest_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::UnexpectedObjectExceptionTest::___op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::EmptyPtr __ret = op(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__UnexpectedObjectExceptionTest_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "op"
};

::Ice::DispatchStatus
Test::UnexpectedObjectExceptionTest::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__UnexpectedObjectExceptionTest_all, __Test__UnexpectedObjectExceptionTest_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__UnexpectedObjectExceptionTest_all)
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
            return ___op(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::UnexpectedObjectExceptionTest::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::UnexpectedObjectExceptionTest::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::UnexpectedObjectExceptionTest& l, const ::Test::UnexpectedObjectExceptionTest& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::UnexpectedObjectExceptionTest& l, const ::Test::UnexpectedObjectExceptionTest& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__UnexpectedObjectExceptionTestPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::UnexpectedObjectExceptionTestPtr* p = static_cast< ::Test::UnexpectedObjectExceptionTestPtr*>(__addr);
    assert(p);
    *p = ::Test::UnexpectedObjectExceptionTestPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::UnexpectedObjectExceptionTest::ice_staticId(), v->ice_id());
    }
}

Test::COneMember::COneMember(const ::Test::EmptyPtr& __ice_e) :
    e(__ice_e)
{
}

static const ::std::string __Test__COneMember_ids[2] =
{
    "::Ice::Object",
    "::Test::COneMember"
};

bool
Test::COneMember::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__COneMember_ids, __Test__COneMember_ids + 2, _s);
}

::std::vector< ::std::string>
Test::COneMember::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__COneMember_ids[0], &__Test__COneMember_ids[2]);
}

const ::std::string&
Test::COneMember::ice_id(const ::Ice::Current&) const
{
    return __Test__COneMember_ids[1];
}

const ::std::string&
Test::COneMember::ice_staticId()
{
    return __Test__COneMember_ids[1];
}

void
Test::COneMember::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e.get())));
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::COneMember::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__EmptyPtr, &e);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__COneMember : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::COneMember::ice_staticId());
        return new ::Test::COneMember;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__COneMember_Ptr = new __F__Test__COneMember;

const ::Ice::ObjectFactoryPtr&
Test::COneMember::ice_factory()
{
    return __F__Test__COneMember_Ptr;
}

class __F__Test__COneMember__Init
{
public:

    __F__Test__COneMember__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::COneMember::ice_staticId(), ::Test::COneMember::ice_factory());
    }

    ~__F__Test__COneMember__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::COneMember::ice_staticId());
    }
};

static __F__Test__COneMember__Init __F__Test__COneMember__i;

#ifdef __APPLE__
extern "C" { void __F__Test__COneMember__initializer() {} }
#endif


bool
Test::operator==(const ::Test::COneMember& l, const ::Test::COneMember& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::COneMember& l, const ::Test::COneMember& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__COneMemberPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::COneMemberPtr* p = static_cast< ::Test::COneMemberPtr*>(__addr);
    assert(p);
    *p = ::Test::COneMemberPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::COneMember::ice_staticId(), v->ice_id());
    }
}

Test::CTwoMembers::CTwoMembers(const ::Test::EmptyPtr& __ice_e1, const ::Test::EmptyPtr& __ice_e2) :
    e1(__ice_e1),
    e2(__ice_e2)
{
}

static const ::std::string __Test__CTwoMembers_ids[2] =
{
    "::Ice::Object",
    "::Test::CTwoMembers"
};

bool
Test::CTwoMembers::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__CTwoMembers_ids, __Test__CTwoMembers_ids + 2, _s);
}

::std::vector< ::std::string>
Test::CTwoMembers::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__CTwoMembers_ids[0], &__Test__CTwoMembers_ids[2]);
}

const ::std::string&
Test::CTwoMembers::ice_id(const ::Ice::Current&) const
{
    return __Test__CTwoMembers_ids[1];
}

const ::std::string&
Test::CTwoMembers::ice_staticId()
{
    return __Test__CTwoMembers_ids[1];
}

void
Test::CTwoMembers::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(e2.get())));
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::CTwoMembers::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__EmptyPtr, &e1);
    __is->read(::Test::__patch__EmptyPtr, &e2);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__CTwoMembers : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::CTwoMembers::ice_staticId());
        return new ::Test::CTwoMembers;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__CTwoMembers_Ptr = new __F__Test__CTwoMembers;

const ::Ice::ObjectFactoryPtr&
Test::CTwoMembers::ice_factory()
{
    return __F__Test__CTwoMembers_Ptr;
}

class __F__Test__CTwoMembers__Init
{
public:

    __F__Test__CTwoMembers__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::CTwoMembers::ice_staticId(), ::Test::CTwoMembers::ice_factory());
    }

    ~__F__Test__CTwoMembers__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::CTwoMembers::ice_staticId());
    }
};

static __F__Test__CTwoMembers__Init __F__Test__CTwoMembers__i;

#ifdef __APPLE__
extern "C" { void __F__Test__CTwoMembers__initializer() {} }
#endif


bool
Test::operator==(const ::Test::CTwoMembers& l, const ::Test::CTwoMembers& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::CTwoMembers& l, const ::Test::CTwoMembers& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__CTwoMembersPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::CTwoMembersPtr* p = static_cast< ::Test::CTwoMembersPtr*>(__addr);
    assert(p);
    *p = ::Test::CTwoMembersPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::CTwoMembers::ice_staticId(), v->ice_id());
    }
}

const ::std::string&
IceProxy::Test::Base::ice_staticId()
{
    return __Test__Base_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Base::__newInstance() const
{
    return new Base;
}

bool
IceProxy::Test::A::postUnmarshalInvoked(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__A__postUnmarshalInvoked_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__A__postUnmarshalInvoked_name, ::Ice::Normal, __ctx);
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

const ::std::string&
IceProxy::Test::A::ice_staticId()
{
    return __Test__A_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::A::__newInstance() const
{
    return new A;
}

const ::std::string&
IceProxy::Test::B::ice_staticId()
{
    return __Test__B_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::B::__newInstance() const
{
    return new B;
}

bool
IceProxy::Test::C::postUnmarshalInvoked(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__C__postUnmarshalInvoked_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__C__postUnmarshalInvoked_name, ::Ice::Normal, __ctx);
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

const ::std::string&
IceProxy::Test::C::ice_staticId()
{
    return __Test__C_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::C::__newInstance() const
{
    return new C;
}

bool
IceProxy::Test::D::postUnmarshalInvoked(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__D__postUnmarshalInvoked_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__D__postUnmarshalInvoked_name, ::Ice::Normal, __ctx);
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

const ::std::string&
IceProxy::Test::D::ice_staticId()
{
    return __Test__D_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::D::__newInstance() const
{
    return new D;
}

bool
IceProxy::Test::E::checkValues(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__E__checkValues_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__E__checkValues_name, ::Ice::Normal, __ctx);
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

const ::std::string&
IceProxy::Test::E::ice_staticId()
{
    return __Test__E_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::E::__newInstance() const
{
    return new E;
}

bool
IceProxy::Test::F::checkValues(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__F__checkValues_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__F__checkValues_name, ::Ice::Normal, __ctx);
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

const ::std::string&
IceProxy::Test::F::ice_staticId()
{
    return __Test__F_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::F::__newInstance() const
{
    return new F;
}

const ::std::string&
IceProxy::Test::I::ice_staticId()
{
    return __Test__I_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::I::__newInstance() const
{
    return new I;
}

const ::std::string&
IceProxy::Test::J::ice_staticId()
{
    return __Test__J_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::J::__newInstance() const
{
    return new J;
}

const ::std::string&
IceProxy::Test::H::ice_staticId()
{
    return __Test__H_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::H::__newInstance() const
{
    return new H;
}

void
IceProxy::Test::Initial::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__shutdown_name, ::Ice::Normal, __ctx);
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

::Test::BPtr
IceProxy::Test::Initial::getB1(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getB1_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getB1_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::BPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &__ret);
                __is->readPendingObjects();
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

::Test::BPtr
IceProxy::Test::Initial::getB2(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getB2_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getB2_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::BPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &__ret);
                __is->readPendingObjects();
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

::Test::CPtr
IceProxy::Test::Initial::getC(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getC_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getC_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::CPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__CPtr, &__ret);
                __is->readPendingObjects();
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

::Test::DPtr
IceProxy::Test::Initial::getD(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getD_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::DPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__DPtr, &__ret);
                __is->readPendingObjects();
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

::Test::EPtr
IceProxy::Test::Initial::getE(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getE_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getE_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::EPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__EPtr, &__ret);
                __is->readPendingObjects();
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

::Test::FPtr
IceProxy::Test::Initial::getF(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getF_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getF_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::FPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__FPtr, &__ret);
                __is->readPendingObjects();
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

void
IceProxy::Test::Initial::getAll(::Test::BPtr& b1, ::Test::BPtr& b2, ::Test::CPtr& theC, ::Test::DPtr& theD, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getAll_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getAll_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &b1);
                __is->read(::Test::__patch__BPtr, &b2);
                __is->read(::Test::__patch__CPtr, &theC);
                __is->read(::Test::__patch__DPtr, &theD);
                __is->readPendingObjects();
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

::Test::IPtr
IceProxy::Test::Initial::getI(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getI_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getI_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::IPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__IPtr, &__ret);
                __is->readPendingObjects();
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

::Test::IPtr
IceProxy::Test::Initial::getJ(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getJ_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getJ_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::IPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__IPtr, &__ret);
                __is->readPendingObjects();
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

::Test::IPtr
IceProxy::Test::Initial::getH(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__getH_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__getH_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::IPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__IPtr, &__ret);
                __is->readPendingObjects();
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

void
IceProxy::Test::Initial::setI(const ::Test::IPtr& theI, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__setI_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPtr(::IceInternal::upCast(theI.get())));
                __os->writePendingObjects();
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

const ::std::string&
IceProxy::Test::Initial::ice_staticId()
{
    return __Test__Initial_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Initial::__newInstance() const
{
    return new Initial;
}

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

const ::std::string&
IceProxy::Test::AlsoEmpty::ice_staticId()
{
    return __Test__AlsoEmpty_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::AlsoEmpty::__newInstance() const
{
    return new AlsoEmpty;
}

::Test::EmptyPtr
IceProxy::Test::UnexpectedObjectExceptionTest::op(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__UnexpectedObjectExceptionTest__op_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__UnexpectedObjectExceptionTest__op_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::EmptyPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__EmptyPtr, &__ret);
                __is->readPendingObjects();
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

const ::std::string&
IceProxy::Test::UnexpectedObjectExceptionTest::ice_staticId()
{
    return __Test__UnexpectedObjectExceptionTest_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::UnexpectedObjectExceptionTest::__newInstance() const
{
    return new UnexpectedObjectExceptionTest;
}

const ::std::string&
IceProxy::Test::COneMember::ice_staticId()
{
    return __Test__COneMember_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::COneMember::__newInstance() const
{
    return new COneMember;
}

const ::std::string&
IceProxy::Test::CTwoMembers::ice_staticId()
{
    return __Test__CTwoMembers_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::CTwoMembers::__newInstance() const
{
    return new CTwoMembers;
}
