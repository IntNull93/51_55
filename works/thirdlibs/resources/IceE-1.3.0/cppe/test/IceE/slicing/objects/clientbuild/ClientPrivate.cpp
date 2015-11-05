// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `clientbuild/ClientPrivate.ice'

#include <ClientPrivate.h>
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

::Ice::Object* IceInternal::upCast(::Test::D3* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::D3* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::D3Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D3;
        v->__copyFrom(proxy);
    }
}

Test::D3::D3(const ::std::string& __ice_sb, const ::Test::BPtr& __ice_pb, const ::std::string& __ice_sd3, const ::Test::BPtr& __ice_pd3) :
    ::Test::B(__ice_sb, __ice_pb)
    ,
    sd3(__ice_sd3),
    pd3(__ice_pd3)
{
}

static const ::std::string __Test__D3_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D3"
};

bool
Test::D3::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D3_ids, __Test__D3_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D3::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D3_ids[0], &__Test__D3_ids[3]);
}

const ::std::string&
Test::D3::ice_id(const ::Ice::Current&) const
{
    return __Test__D3_ids[2];
}

const ::std::string&
Test::D3::ice_staticId()
{
    return __Test__D3_ids[2];
}

void
Test::D3::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sd3);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(pd3.get())));
    __os->endWriteSlice();
    ::Test::B::__write(__os);
}

void
Test::D3::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sd3);
    __is->read(::Test::__patch__BPtr, &pd3);
    __is->endReadSlice();
    ::Test::B::__read(__is, true);
}

class __F__Test__D3 : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::D3::ice_staticId());
        return new ::Test::D3;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__D3_Ptr = new __F__Test__D3;

const ::Ice::ObjectFactoryPtr&
Test::D3::ice_factory()
{
    return __F__Test__D3_Ptr;
}

class __F__Test__D3__Init
{
public:

    __F__Test__D3__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D3::ice_staticId(), ::Test::D3::ice_factory());
    }

    ~__F__Test__D3__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D3::ice_staticId());
    }
};

static __F__Test__D3__Init __F__Test__D3__i;

#ifdef __APPLE__
extern "C" { void __F__Test__D3__initializer() {} }
#endif


bool
Test::operator==(const ::Test::D3& l, const ::Test::D3& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::D3& l, const ::Test::D3& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__D3Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::D3Ptr* p = static_cast< ::Test::D3Ptr*>(__addr);
    assert(p);
    *p = ::Test::D3Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::D3::ice_staticId(), v->ice_id());
    }
}

const ::std::string&
IceProxy::Test::D3::ice_staticId()
{
    return __Test__D3_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::D3::__newInstance() const
{
    return new D3;
}
