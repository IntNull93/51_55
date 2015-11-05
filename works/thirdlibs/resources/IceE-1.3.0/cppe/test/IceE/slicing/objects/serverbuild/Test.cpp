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

static const ::std::string __Test__TestIntf__SBaseAsObject_name = "SBaseAsObject";

static const ::std::string __Test__TestIntf__SBaseAsSBase_name = "SBaseAsSBase";

static const ::std::string __Test__TestIntf__SBSKnownDerivedAsSBase_name = "SBSKnownDerivedAsSBase";

static const ::std::string __Test__TestIntf__SBSKnownDerivedAsSBSKnownDerived_name = "SBSKnownDerivedAsSBSKnownDerived";

static const ::std::string __Test__TestIntf__SBSUnknownDerivedAsSBase_name = "SBSUnknownDerivedAsSBase";

static const ::std::string __Test__TestIntf__SUnknownAsObject_name = "SUnknownAsObject";

static const ::std::string __Test__TestIntf__oneElementCycle_name = "oneElementCycle";

static const ::std::string __Test__TestIntf__twoElementCycle_name = "twoElementCycle";

static const ::std::string __Test__TestIntf__D1AsB_name = "D1AsB";

static const ::std::string __Test__TestIntf__D1AsD1_name = "D1AsD1";

static const ::std::string __Test__TestIntf__D2AsB_name = "D2AsB";

static const ::std::string __Test__TestIntf__paramTest1_name = "paramTest1";

static const ::std::string __Test__TestIntf__paramTest2_name = "paramTest2";

static const ::std::string __Test__TestIntf__paramTest3_name = "paramTest3";

static const ::std::string __Test__TestIntf__paramTest4_name = "paramTest4";

static const ::std::string __Test__TestIntf__returnTest1_name = "returnTest1";

static const ::std::string __Test__TestIntf__returnTest2_name = "returnTest2";

static const ::std::string __Test__TestIntf__returnTest3_name = "returnTest3";

static const ::std::string __Test__TestIntf__sequenceTest_name = "sequenceTest";

static const ::std::string __Test__TestIntf__dictionaryTest_name = "dictionaryTest";

static const ::std::string __Test__TestIntf__throwBaseAsBase_name = "throwBaseAsBase";

static const ::std::string __Test__TestIntf__throwDerivedAsBase_name = "throwDerivedAsBase";

static const ::std::string __Test__TestIntf__throwDerivedAsDerived_name = "throwDerivedAsDerived";

static const ::std::string __Test__TestIntf__throwUnknownDerivedAsBase_name = "throwUnknownDerivedAsBase";

static const ::std::string __Test__TestIntf__useForward_name = "useForward";

static const ::std::string __Test__TestIntf__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Test::SBase* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::SBase* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::SBSKnownDerived* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::SBSKnownDerived* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::B* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::B* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::D1* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::D1* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::SS1* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::SS1* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::SS2* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::SS2* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::TestIntf* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::TestIntf* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::SBasePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SBase;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::SBSKnownDerivedPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SBSKnownDerived;
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
Test::__read(::IceInternal::BasicStream* __is, ::Test::D1Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D1;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::SS1Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SS1;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::SS2Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SS2;
        v->__copyFrom(proxy);
    }
}

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

void
Test::__writeBSeq(::IceInternal::BasicStream* __os, const ::Test::BPtr* begin, const ::Test::BPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
Test::__readBSeq(::IceInternal::BasicStream* __is, ::Test::BSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::Test::__patch__BPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
Test::SS::operator==(const SS& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(c1 != __rhs.c1)
    {
        return false;
    }
    if(c2 != __rhs.c2)
    {
        return false;
    }
    return true;
}

bool
Test::SS::operator<(const SS& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(c1 < __rhs.c1)
    {
        return true;
    }
    else if(__rhs.c1 < c1)
    {
        return false;
    }
    if(c2 < __rhs.c2)
    {
        return true;
    }
    else if(__rhs.c2 < c2)
    {
        return false;
    }
    return false;
}

void
Test::SS::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(c1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(c2.get())));
}

void
Test::SS::__read(::IceInternal::BasicStream* __is)
{
    __is->read(::Test::__patch__SS1Ptr, &c1);
    __is->read(::Test::__patch__SS2Ptr, &c2);
}

void
Test::__writeBDict(::IceInternal::BasicStream* __os, const ::Test::BDict& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::BDict::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
Test::__readBDict(::IceInternal::BasicStream* __is, ::Test::BDict& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::Test::BPtr> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::Test::BDict::iterator __i = v.insert(v.end(), pair);
        __is->read(::Test::__patch__BPtr, &__i->second);
    }
}

Test::BaseException::BaseException(const ::std::string& __ice_sbe, const ::Test::BPtr& __ice_pb) :
    ::Ice::UserException(),
    sbe(__ice_sbe),
    pb(__ice_pb)
{
}

Test::BaseException::~BaseException() throw()
{
}

static const char* __Test__BaseException_name = "Test::BaseException";

::std::string
Test::BaseException::ice_name() const
{
    return __Test__BaseException_name;
}

::Ice::Exception*
Test::BaseException::ice_clone() const
{
    return new BaseException(*this);
}

void
Test::BaseException::ice_throw() const
{
    throw *this;
}

void
Test::BaseException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::BaseException"), false);
    __os->startWriteSlice();
    __os->write(sbe);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pb.get())));
    __os->endWriteSlice();
}

void
Test::BaseException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(sbe);
    __is->read(::Test::__patch__BPtr, &pb);
    __is->endReadSlice();
}

bool
Test::BaseException::__usesClasses() const
{
    return true;
}

struct __F__Test__BaseException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::BaseException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__BaseException__Ptr = new __F__Test__BaseException;

const ::IceInternal::UserExceptionFactoryPtr&
Test::BaseException::ice_factory()
{
    return __F__Test__BaseException__Ptr;
}

class __F__Test__BaseException__Init
{
public:

    __F__Test__BaseException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::BaseException", ::Test::BaseException::ice_factory());
    }

    ~__F__Test__BaseException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::BaseException");
    }
};

static __F__Test__BaseException__Init __F__Test__BaseException__i;

#ifdef __APPLE__
extern "C" { void __F__Test__BaseException__initializer() {} }
#endif

Test::DerivedException::DerivedException(const ::std::string& __ice_sbe, const ::Test::BPtr& __ice_pb, const ::std::string& __ice_sde, const ::Test::D1Ptr& __ice_pd1) :
    ::Test::BaseException(__ice_sbe, __ice_pb),
    sde(__ice_sde),
    pd1(__ice_pd1)
{
}

Test::DerivedException::~DerivedException() throw()
{
}

static const char* __Test__DerivedException_name = "Test::DerivedException";

::std::string
Test::DerivedException::ice_name() const
{
    return __Test__DerivedException_name;
}

::Ice::Exception*
Test::DerivedException::ice_clone() const
{
    return new DerivedException(*this);
}

void
Test::DerivedException::ice_throw() const
{
    throw *this;
}

void
Test::DerivedException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::DerivedException"), false);
    __os->startWriteSlice();
    __os->write(sde);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pd1.get())));
    __os->endWriteSlice();
    ::Test::BaseException::__write(__os);
}

void
Test::DerivedException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(sde);
    __is->read(::Test::__patch__D1Ptr, &pd1);
    __is->endReadSlice();
    ::Test::BaseException::__read(__is, true);
}

struct __F__Test__DerivedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::DerivedException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__DerivedException__Ptr = new __F__Test__DerivedException;

const ::IceInternal::UserExceptionFactoryPtr&
Test::DerivedException::ice_factory()
{
    return __F__Test__DerivedException__Ptr;
}

class __F__Test__DerivedException__Init
{
public:

    __F__Test__DerivedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::DerivedException", ::Test::DerivedException::ice_factory());
    }

    ~__F__Test__DerivedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::DerivedException");
    }
};

static __F__Test__DerivedException__Init __F__Test__DerivedException__i;

#ifdef __APPLE__
extern "C" { void __F__Test__DerivedException__initializer() {} }
#endif

Test::SBase::SBase(const ::std::string& __ice_sb) :
    sb(__ice_sb)
{
}

static const ::std::string __Test__SBase_ids[2] =
{
    "::Ice::Object",
    "::Test::SBase"
};

bool
Test::SBase::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SBase_ids, __Test__SBase_ids + 2, _s);
}

::std::vector< ::std::string>
Test::SBase::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SBase_ids[0], &__Test__SBase_ids[2]);
}

const ::std::string&
Test::SBase::ice_id(const ::Ice::Current&) const
{
    return __Test__SBase_ids[1];
}

const ::std::string&
Test::SBase::ice_staticId()
{
    return __Test__SBase_ids[1];
}

void
Test::SBase::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sb);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::SBase::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sb);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__SBase : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::SBase::ice_staticId());
        return new ::Test::SBase;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__SBase_Ptr = new __F__Test__SBase;

const ::Ice::ObjectFactoryPtr&
Test::SBase::ice_factory()
{
    return __F__Test__SBase_Ptr;
}

class __F__Test__SBase__Init
{
public:

    __F__Test__SBase__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SBase::ice_staticId(), ::Test::SBase::ice_factory());
    }

    ~__F__Test__SBase__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SBase::ice_staticId());
    }
};

static __F__Test__SBase__Init __F__Test__SBase__i;

#ifdef __APPLE__
extern "C" { void __F__Test__SBase__initializer() {} }
#endif


bool
Test::operator==(const ::Test::SBase& l, const ::Test::SBase& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::SBase& l, const ::Test::SBase& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__SBasePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::SBasePtr* p = static_cast< ::Test::SBasePtr*>(__addr);
    assert(p);
    *p = ::Test::SBasePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::SBase::ice_staticId(), v->ice_id());
    }
}

Test::SBSKnownDerived::SBSKnownDerived(const ::std::string& __ice_sb, const ::std::string& __ice_sbskd) :
    ::Test::SBase(__ice_sb)
    ,
    sbskd(__ice_sbskd)
{
}

static const ::std::string __Test__SBSKnownDerived_ids[3] =
{
    "::Ice::Object",
    "::Test::SBSKnownDerived",
    "::Test::SBase"
};

bool
Test::SBSKnownDerived::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SBSKnownDerived_ids, __Test__SBSKnownDerived_ids + 3, _s);
}

::std::vector< ::std::string>
Test::SBSKnownDerived::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SBSKnownDerived_ids[0], &__Test__SBSKnownDerived_ids[3]);
}

const ::std::string&
Test::SBSKnownDerived::ice_id(const ::Ice::Current&) const
{
    return __Test__SBSKnownDerived_ids[1];
}

const ::std::string&
Test::SBSKnownDerived::ice_staticId()
{
    return __Test__SBSKnownDerived_ids[1];
}

void
Test::SBSKnownDerived::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sbskd);
    __os->endWriteSlice();
    ::Test::SBase::__write(__os);
}

void
Test::SBSKnownDerived::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sbskd);
    __is->endReadSlice();
    ::Test::SBase::__read(__is, true);
}

class __F__Test__SBSKnownDerived : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::SBSKnownDerived::ice_staticId());
        return new ::Test::SBSKnownDerived;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__SBSKnownDerived_Ptr = new __F__Test__SBSKnownDerived;

const ::Ice::ObjectFactoryPtr&
Test::SBSKnownDerived::ice_factory()
{
    return __F__Test__SBSKnownDerived_Ptr;
}

class __F__Test__SBSKnownDerived__Init
{
public:

    __F__Test__SBSKnownDerived__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SBSKnownDerived::ice_staticId(), ::Test::SBSKnownDerived::ice_factory());
    }

    ~__F__Test__SBSKnownDerived__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SBSKnownDerived::ice_staticId());
    }
};

static __F__Test__SBSKnownDerived__Init __F__Test__SBSKnownDerived__i;

#ifdef __APPLE__
extern "C" { void __F__Test__SBSKnownDerived__initializer() {} }
#endif


bool
Test::operator==(const ::Test::SBSKnownDerived& l, const ::Test::SBSKnownDerived& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::SBSKnownDerived& l, const ::Test::SBSKnownDerived& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__SBSKnownDerivedPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::SBSKnownDerivedPtr* p = static_cast< ::Test::SBSKnownDerivedPtr*>(__addr);
    assert(p);
    *p = ::Test::SBSKnownDerivedPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::SBSKnownDerived::ice_staticId(), v->ice_id());
    }
}

Test::B::B(const ::std::string& __ice_sb, const ::Test::BPtr& __ice_pb) :
    sb(__ice_sb),
    pb(__ice_pb)
{
}

static const ::std::string __Test__B_ids[2] =
{
    "::Ice::Object",
    "::Test::B"
};

bool
Test::B::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__B_ids, __Test__B_ids + 2, _s);
}

::std::vector< ::std::string>
Test::B::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__B_ids[0], &__Test__B_ids[2]);
}

const ::std::string&
Test::B::ice_id(const ::Ice::Current&) const
{
    return __Test__B_ids[1];
}

const ::std::string&
Test::B::ice_staticId()
{
    return __Test__B_ids[1];
}

void
Test::B::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sb);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pb.get())));
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
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
    __is->read(sb);
    __is->read(::Test::__patch__BPtr, &pb);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__B : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::B::ice_staticId());
        return new ::Test::B;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__B_Ptr = new __F__Test__B;

const ::Ice::ObjectFactoryPtr&
Test::B::ice_factory()
{
    return __F__Test__B_Ptr;
}

class __F__Test__B__Init
{
public:

    __F__Test__B__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::B::ice_staticId(), ::Test::B::ice_factory());
    }

    ~__F__Test__B__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::B::ice_staticId());
    }
};

static __F__Test__B__Init __F__Test__B__i;

#ifdef __APPLE__
extern "C" { void __F__Test__B__initializer() {} }
#endif


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

Test::D1::D1(const ::std::string& __ice_sb, const ::Test::BPtr& __ice_pb, const ::std::string& __ice_sd1, const ::Test::BPtr& __ice_pd1) :
    ::Test::B(__ice_sb, __ice_pb)
    ,
    sd1(__ice_sd1),
    pd1(__ice_pd1)
{
}

static const ::std::string __Test__D1_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D1"
};

bool
Test::D1::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D1_ids, __Test__D1_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D1::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D1_ids[0], &__Test__D1_ids[3]);
}

const ::std::string&
Test::D1::ice_id(const ::Ice::Current&) const
{
    return __Test__D1_ids[2];
}

const ::std::string&
Test::D1::ice_staticId()
{
    return __Test__D1_ids[2];
}

void
Test::D1::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sd1);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pd1.get())));
    __os->endWriteSlice();
    ::Test::B::__write(__os);
}

void
Test::D1::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sd1);
    __is->read(::Test::__patch__BPtr, &pd1);
    __is->endReadSlice();
    ::Test::B::__read(__is, true);
}

class __F__Test__D1 : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::D1::ice_staticId());
        return new ::Test::D1;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__D1_Ptr = new __F__Test__D1;

const ::Ice::ObjectFactoryPtr&
Test::D1::ice_factory()
{
    return __F__Test__D1_Ptr;
}

class __F__Test__D1__Init
{
public:

    __F__Test__D1__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D1::ice_staticId(), ::Test::D1::ice_factory());
    }

    ~__F__Test__D1__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D1::ice_staticId());
    }
};

static __F__Test__D1__Init __F__Test__D1__i;

#ifdef __APPLE__
extern "C" { void __F__Test__D1__initializer() {} }
#endif


bool
Test::operator==(const ::Test::D1& l, const ::Test::D1& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::D1& l, const ::Test::D1& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__D1Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::D1Ptr* p = static_cast< ::Test::D1Ptr*>(__addr);
    assert(p);
    *p = ::Test::D1Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::D1::ice_staticId(), v->ice_id());
    }
}

Test::SS1::SS1(const ::Test::BSeq& __ice_s) :
    s(__ice_s)
{
}

static const ::std::string __Test__SS1_ids[2] =
{
    "::Ice::Object",
    "::Test::SS1"
};

bool
Test::SS1::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SS1_ids, __Test__SS1_ids + 2, _s);
}

::std::vector< ::std::string>
Test::SS1::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SS1_ids[0], &__Test__SS1_ids[2]);
}

const ::std::string&
Test::SS1::ice_id(const ::Ice::Current&) const
{
    return __Test__SS1_ids[1];
}

const ::std::string&
Test::SS1::ice_staticId()
{
    return __Test__SS1_ids[1];
}

void
Test::SS1::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(s.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeBSeq(__os, &s[0], &s[0] + s.size());
    }
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::SS1::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::Test::__readBSeq(__is, s);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__SS1 : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::SS1::ice_staticId());
        return new ::Test::SS1;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__SS1_Ptr = new __F__Test__SS1;

const ::Ice::ObjectFactoryPtr&
Test::SS1::ice_factory()
{
    return __F__Test__SS1_Ptr;
}

class __F__Test__SS1__Init
{
public:

    __F__Test__SS1__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SS1::ice_staticId(), ::Test::SS1::ice_factory());
    }

    ~__F__Test__SS1__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SS1::ice_staticId());
    }
};

static __F__Test__SS1__Init __F__Test__SS1__i;

#ifdef __APPLE__
extern "C" { void __F__Test__SS1__initializer() {} }
#endif


bool
Test::operator==(const ::Test::SS1& l, const ::Test::SS1& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::SS1& l, const ::Test::SS1& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__SS1Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::SS1Ptr* p = static_cast< ::Test::SS1Ptr*>(__addr);
    assert(p);
    *p = ::Test::SS1Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::SS1::ice_staticId(), v->ice_id());
    }
}

Test::SS2::SS2(const ::Test::BSeq& __ice_s) :
    s(__ice_s)
{
}

static const ::std::string __Test__SS2_ids[2] =
{
    "::Ice::Object",
    "::Test::SS2"
};

bool
Test::SS2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SS2_ids, __Test__SS2_ids + 2, _s);
}

::std::vector< ::std::string>
Test::SS2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SS2_ids[0], &__Test__SS2_ids[2]);
}

const ::std::string&
Test::SS2::ice_id(const ::Ice::Current&) const
{
    return __Test__SS2_ids[1];
}

const ::std::string&
Test::SS2::ice_staticId()
{
    return __Test__SS2_ids[1];
}

void
Test::SS2::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(s.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeBSeq(__os, &s[0], &s[0] + s.size());
    }
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::SS2::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::Test::__readBSeq(__is, s);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__SS2 : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::SS2::ice_staticId());
        return new ::Test::SS2;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__SS2_Ptr = new __F__Test__SS2;

const ::Ice::ObjectFactoryPtr&
Test::SS2::ice_factory()
{
    return __F__Test__SS2_Ptr;
}

class __F__Test__SS2__Init
{
public:

    __F__Test__SS2__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SS2::ice_staticId(), ::Test::SS2::ice_factory());
    }

    ~__F__Test__SS2__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SS2::ice_staticId());
    }
};

static __F__Test__SS2__Init __F__Test__SS2__i;

#ifdef __APPLE__
extern "C" { void __F__Test__SS2__initializer() {} }
#endif


bool
Test::operator==(const ::Test::SS2& l, const ::Test::SS2& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::SS2& l, const ::Test::SS2& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__SS2Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::SS2Ptr* p = static_cast< ::Test::SS2Ptr*>(__addr);
    assert(p);
    *p = ::Test::SS2Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::SS2::ice_staticId(), v->ice_id());
    }
}

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
Test::TestIntf::___SBaseAsObject(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::ObjectPtr __ret = SBaseAsObject(__current);
    __os->write(__ret);
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___SBaseAsSBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::SBasePtr __ret = SBaseAsSBase(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___SBSKnownDerivedAsSBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::SBasePtr __ret = SBSKnownDerivedAsSBase(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___SBSKnownDerivedAsSBSKnownDerived(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::SBSKnownDerivedPtr __ret = SBSKnownDerivedAsSBSKnownDerived(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___SBSUnknownDerivedAsSBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::SBasePtr __ret = SBSUnknownDerivedAsSBase(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___SUnknownAsObject(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::ObjectPtr __ret = SUnknownAsObject(__current);
    __os->write(__ret);
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___oneElementCycle(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = oneElementCycle(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___twoElementCycle(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = twoElementCycle(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___D1AsB(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = D1AsB(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___D1AsD1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::D1Ptr __ret = D1AsD1(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___D2AsB(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = D2AsB(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___paramTest1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr p1;
    ::Test::BPtr p2;
    paramTest1(p1, p2, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___paramTest2(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr p2;
    ::Test::BPtr p1;
    paramTest2(p2, p1, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___paramTest3(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr p1;
    ::Test::BPtr p2;
    ::Test::BPtr __ret = paramTest3(p1, p2, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___paramTest4(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr p;
    ::Test::BPtr __ret = paramTest4(p, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___returnTest1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr p1;
    ::Test::BPtr p2;
    ::Test::BPtr __ret = returnTest1(p1, p2, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___returnTest2(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr p2;
    ::Test::BPtr p1;
    ::Test::BPtr __ret = returnTest2(p2, p1, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___returnTest3(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::BPtr p1;
    ::Test::BPtr p2;
    __is->read(::Test::__patch__BPtr, &p1);
    __is->read(::Test::__patch__BPtr, &p2);
    __is->readPendingObjects();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BPtr __ret = returnTest3(p1, p2, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___sequenceTest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::SS1Ptr p1;
    ::Test::SS2Ptr p2;
    __is->read(::Test::__patch__SS1Ptr, &p1);
    __is->read(::Test::__patch__SS2Ptr, &p2);
    __is->readPendingObjects();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::SS __ret = sequenceTest(p1, p2, __current);
    __ret.__write(__os);
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___dictionaryTest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::BDict bin;
    ::Test::__readBDict(__is, bin);
    __is->readPendingObjects();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BDict bout;
    ::Test::BDict __ret = dictionaryTest(bin, bout, __current);
    ::Test::__writeBDict(__os, bout);
    ::Test::__writeBDict(__os, __ret);
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___throwBaseAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwBaseAsBase(__current);
    }
    catch(const ::Test::BaseException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___throwDerivedAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwDerivedAsBase(__current);
    }
    catch(const ::Test::BaseException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___throwDerivedAsDerived(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwDerivedAsDerived(__current);
    }
    catch(const ::Test::DerivedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___throwUnknownDerivedAsBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwUnknownDerivedAsBase(__current);
    }
    catch(const ::Test::BaseException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___useForward(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ForwardPtr f;
    useForward(f, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(f.get())));
    __os->writePendingObjects();
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
    "D1AsB",
    "D1AsD1",
    "D2AsB",
    "SBSKnownDerivedAsSBSKnownDerived",
    "SBSKnownDerivedAsSBase",
    "SBSUnknownDerivedAsSBase",
    "SBaseAsObject",
    "SBaseAsSBase",
    "SUnknownAsObject",
    "dictionaryTest",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "oneElementCycle",
    "paramTest1",
    "paramTest2",
    "paramTest3",
    "paramTest4",
    "returnTest1",
    "returnTest2",
    "returnTest3",
    "sequenceTest",
    "shutdown",
    "throwBaseAsBase",
    "throwDerivedAsBase",
    "throwDerivedAsDerived",
    "throwUnknownDerivedAsBase",
    "twoElementCycle",
    "useForward"
};

::Ice::DispatchStatus
Test::TestIntf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__TestIntf_all, __Test__TestIntf_all + 30, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestIntf_all)
    {
        case 0:
        {
            return ___D1AsB(in, current);
        }
        case 1:
        {
            return ___D1AsD1(in, current);
        }
        case 2:
        {
            return ___D2AsB(in, current);
        }
        case 3:
        {
            return ___SBSKnownDerivedAsSBSKnownDerived(in, current);
        }
        case 4:
        {
            return ___SBSKnownDerivedAsSBase(in, current);
        }
        case 5:
        {
            return ___SBSUnknownDerivedAsSBase(in, current);
        }
        case 6:
        {
            return ___SBaseAsObject(in, current);
        }
        case 7:
        {
            return ___SBaseAsSBase(in, current);
        }
        case 8:
        {
            return ___SUnknownAsObject(in, current);
        }
        case 9:
        {
            return ___dictionaryTest(in, current);
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
            return ___oneElementCycle(in, current);
        }
        case 15:
        {
            return ___paramTest1(in, current);
        }
        case 16:
        {
            return ___paramTest2(in, current);
        }
        case 17:
        {
            return ___paramTest3(in, current);
        }
        case 18:
        {
            return ___paramTest4(in, current);
        }
        case 19:
        {
            return ___returnTest1(in, current);
        }
        case 20:
        {
            return ___returnTest2(in, current);
        }
        case 21:
        {
            return ___returnTest3(in, current);
        }
        case 22:
        {
            return ___sequenceTest(in, current);
        }
        case 23:
        {
            return ___shutdown(in, current);
        }
        case 24:
        {
            return ___throwBaseAsBase(in, current);
        }
        case 25:
        {
            return ___throwDerivedAsBase(in, current);
        }
        case 26:
        {
            return ___throwDerivedAsDerived(in, current);
        }
        case 27:
        {
            return ___throwUnknownDerivedAsBase(in, current);
        }
        case 28:
        {
            return ___twoElementCycle(in, current);
        }
        case 29:
        {
            return ___useForward(in, current);
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

const ::std::string&
IceProxy::Test::SBase::ice_staticId()
{
    return __Test__SBase_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::SBase::__newInstance() const
{
    return new SBase;
}

const ::std::string&
IceProxy::Test::SBSKnownDerived::ice_staticId()
{
    return __Test__SBSKnownDerived_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::SBSKnownDerived::__newInstance() const
{
    return new SBSKnownDerived;
}

const ::std::string&
IceProxy::Test::B::ice_staticId()
{
    return __Test__B_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::B::__newInstance() const
{
    return new B;
}

const ::std::string&
IceProxy::Test::D1::ice_staticId()
{
    return __Test__D1_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::D1::__newInstance() const
{
    return new D1;
}

const ::std::string&
IceProxy::Test::SS1::ice_staticId()
{
    return __Test__SS1_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::SS1::__newInstance() const
{
    return new SS1;
}

const ::std::string&
IceProxy::Test::SS2::ice_staticId()
{
    return __Test__SS2_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::SS2::__newInstance() const
{
    return new SS2;
}

::Ice::ObjectPtr
IceProxy::Test::TestIntf::SBaseAsObject(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__SBaseAsObject_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__SBaseAsObject_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Ice::ObjectPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Ice::__patch__ObjectPtr, &__ret);
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

::Test::SBasePtr
IceProxy::Test::TestIntf::SBaseAsSBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__SBaseAsSBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__SBaseAsSBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::SBasePtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__SBasePtr, &__ret);
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

::Test::SBasePtr
IceProxy::Test::TestIntf::SBSKnownDerivedAsSBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__SBSKnownDerivedAsSBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__SBSKnownDerivedAsSBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::SBasePtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__SBasePtr, &__ret);
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

::Test::SBSKnownDerivedPtr
IceProxy::Test::TestIntf::SBSKnownDerivedAsSBSKnownDerived(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__SBSKnownDerivedAsSBSKnownDerived_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__SBSKnownDerivedAsSBSKnownDerived_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::SBSKnownDerivedPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__SBSKnownDerivedPtr, &__ret);
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

::Test::SBasePtr
IceProxy::Test::TestIntf::SBSUnknownDerivedAsSBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__SBSUnknownDerivedAsSBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__SBSUnknownDerivedAsSBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::SBasePtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__SBasePtr, &__ret);
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

::Ice::ObjectPtr
IceProxy::Test::TestIntf::SUnknownAsObject(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__SUnknownAsObject_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__SUnknownAsObject_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Ice::ObjectPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Ice::__patch__ObjectPtr, &__ret);
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
IceProxy::Test::TestIntf::oneElementCycle(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__oneElementCycle_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__oneElementCycle_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestIntf::twoElementCycle(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__twoElementCycle_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__twoElementCycle_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestIntf::D1AsB(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__D1AsB_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__D1AsB_name, ::Ice::Normal, __ctx);
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

::Test::D1Ptr
IceProxy::Test::TestIntf::D1AsD1(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__D1AsD1_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__D1AsD1_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::D1Ptr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__D1Ptr, &__ret);
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
IceProxy::Test::TestIntf::D2AsB(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__D2AsB_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__D2AsB_name, ::Ice::Normal, __ctx);
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

void
IceProxy::Test::TestIntf::paramTest1(::Test::BPtr& p1, ::Test::BPtr& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__paramTest1_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__paramTest1_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &p1);
                __is->read(::Test::__patch__BPtr, &p2);
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

void
IceProxy::Test::TestIntf::paramTest2(::Test::BPtr& p2, ::Test::BPtr& p1, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__paramTest2_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__paramTest2_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &p2);
                __is->read(::Test::__patch__BPtr, &p1);
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

::Test::BPtr
IceProxy::Test::TestIntf::paramTest3(::Test::BPtr& p1, ::Test::BPtr& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__paramTest3_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__paramTest3_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::BPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &p1);
                __is->read(::Test::__patch__BPtr, &p2);
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
IceProxy::Test::TestIntf::paramTest4(::Test::BPtr& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__paramTest4_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__paramTest4_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::BPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &p);
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
IceProxy::Test::TestIntf::returnTest1(::Test::BPtr& p1, ::Test::BPtr& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__returnTest1_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__returnTest1_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::BPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &p1);
                __is->read(::Test::__patch__BPtr, &p2);
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
IceProxy::Test::TestIntf::returnTest2(::Test::BPtr& p2, ::Test::BPtr& p1, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__returnTest2_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__returnTest2_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::BPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__BPtr, &p2);
                __is->read(::Test::__patch__BPtr, &p1);
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
IceProxy::Test::TestIntf::returnTest3(const ::Test::BPtr& p1, const ::Test::BPtr& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__returnTest3_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__returnTest3_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
                __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
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

::Test::SS
IceProxy::Test::TestIntf::sequenceTest(const ::Test::SS1Ptr& p1, const ::Test::SS2Ptr& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__sequenceTest_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__sequenceTest_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p1.get())));
                __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p2.get())));
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
                ::Test::SS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __ret.__read(__is);
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

::Test::BDict
IceProxy::Test::TestIntf::dictionaryTest(const ::Test::BDict& bin, ::Test::BDict& bout, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__dictionaryTest_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__dictionaryTest_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeBDict(__os, bin);
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
                ::Test::BDict __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readBDict(__is, bout);
                ::Test::__readBDict(__is, __ret);
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
IceProxy::Test::TestIntf::throwBaseAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__throwBaseAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__throwBaseAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::BaseException&)
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

void
IceProxy::Test::TestIntf::throwDerivedAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__throwDerivedAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__throwDerivedAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::BaseException&)
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

void
IceProxy::Test::TestIntf::throwDerivedAsDerived(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__throwDerivedAsDerived_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__throwDerivedAsDerived_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::DerivedException&)
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

void
IceProxy::Test::TestIntf::throwUnknownDerivedAsBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__throwUnknownDerivedAsBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__throwUnknownDerivedAsBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Test::BaseException&)
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

void
IceProxy::Test::TestIntf::useForward(::Test::ForwardPtr& f, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__useForward_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__useForward_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Test::__patch__ForwardPtr, &f);
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
