// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `clientbuild/Forward.ice'

#include <Forward.h>
#include <IceE/LocalException.h>
#include <IceE/ObjectFactory.h>
#include <IceE/BasicStream.h>
#include <IceE/Iterator.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

::Ice::Object* IceInternal::upCast(::Test::Hidden* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Hidden* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::Forward* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Forward* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::HiddenPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Hidden;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::ForwardPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Forward;
        v->__copyFrom(proxy);
    }
}

Test::Hidden::Hidden(const ::Test::ForwardPtr& __ice_f) :
    f(__ice_f)
{
}

static const ::std::string __Test__Hidden_ids[2] =
{
    "::Ice::Object",
    "::Test::Hidden"
};

bool
Test::Hidden::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Hidden_ids, __Test__Hidden_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Hidden::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Hidden_ids[0], &__Test__Hidden_ids[2]);
}

const ::std::string&
Test::Hidden::ice_id(const ::Ice::Current&) const
{
    return __Test__Hidden_ids[1];
}

const ::std::string&
Test::Hidden::ice_staticId()
{
    return __Test__Hidden_ids[1];
}

void
Test::Hidden::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(f.get())));
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Hidden::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__ForwardPtr, &f);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__Hidden : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::Hidden::ice_staticId());
        return new ::Test::Hidden;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__Hidden_Ptr = new __F__Test__Hidden;

const ::Ice::ObjectFactoryPtr&
Test::Hidden::ice_factory()
{
    return __F__Test__Hidden_Ptr;
}

class __F__Test__Hidden__Init
{
public:

    __F__Test__Hidden__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::Hidden::ice_staticId(), ::Test::Hidden::ice_factory());
    }

    ~__F__Test__Hidden__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::Hidden::ice_staticId());
    }
};

static __F__Test__Hidden__Init __F__Test__Hidden__i;

#ifdef __APPLE__
extern "C" { void __F__Test__Hidden__initializer() {} }
#endif


bool
Test::operator==(const ::Test::Hidden& l, const ::Test::Hidden& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Hidden& l, const ::Test::Hidden& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__HiddenPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::HiddenPtr* p = static_cast< ::Test::HiddenPtr*>(__addr);
    assert(p);
    *p = ::Test::HiddenPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Hidden::ice_staticId(), v->ice_id());
    }
}

Test::Forward::Forward(const ::Test::HiddenPtr& __ice_h) :
    h(__ice_h)
{
}

static const ::std::string __Test__Forward_ids[2] =
{
    "::Ice::Object",
    "::Test::Forward"
};

bool
Test::Forward::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Forward_ids, __Test__Forward_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Forward::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Forward_ids[0], &__Test__Forward_ids[2]);
}

const ::std::string&
Test::Forward::ice_id(const ::Ice::Current&) const
{
    return __Test__Forward_ids[1];
}

const ::std::string&
Test::Forward::ice_staticId()
{
    return __Test__Forward_ids[1];
}

void
Test::Forward::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(h.get())));
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Forward::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::Test::__patch__HiddenPtr, &h);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Test__Forward : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::Forward::ice_staticId());
        return new ::Test::Forward;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__Forward_Ptr = new __F__Test__Forward;

const ::Ice::ObjectFactoryPtr&
Test::Forward::ice_factory()
{
    return __F__Test__Forward_Ptr;
}

class __F__Test__Forward__Init
{
public:

    __F__Test__Forward__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::Forward::ice_staticId(), ::Test::Forward::ice_factory());
    }

    ~__F__Test__Forward__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::Forward::ice_staticId());
    }
};

static __F__Test__Forward__Init __F__Test__Forward__i;

#ifdef __APPLE__
extern "C" { void __F__Test__Forward__initializer() {} }
#endif


bool
Test::operator==(const ::Test::Forward& l, const ::Test::Forward& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Forward& l, const ::Test::Forward& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__ForwardPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::ForwardPtr* p = static_cast< ::Test::ForwardPtr*>(__addr);
    assert(p);
    *p = ::Test::ForwardPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Forward::ice_staticId(), v->ice_id());
    }
}

const ::std::string&
IceProxy::Test::Hidden::ice_staticId()
{
    return __Test__Hidden_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Hidden::__newInstance() const
{
    return new Hidden;
}

const ::std::string&
IceProxy::Test::Forward::ice_staticId()
{
    return __Test__Forward_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Forward::__newInstance() const
{
    return new Forward;
}
