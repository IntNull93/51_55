// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Latency.ice'

#include <Latency.h>
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

::Ice::Object* IceInternal::upCast(::Demo::Ping* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::Ping* p) { return p; }

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::PingPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Ping;
        v->__copyFrom(proxy);
    }
}

static const ::std::string __Demo__Ping_ids[2] =
{
    "::Demo::Ping",
    "::Ice::Object"
};

bool
Demo::Ping::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Ping_ids, __Demo__Ping_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Ping::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Ping_ids[0], &__Demo__Ping_ids[2]);
}

const ::std::string&
Demo::Ping::ice_id(const ::Ice::Current&) const
{
    return __Demo__Ping_ids[0];
}

const ::std::string&
Demo::Ping::ice_staticId()
{
    return __Demo__Ping_ids[0];
}

void
Demo::Ping::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Demo::Ping::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Demo::operator==(const ::Demo::Ping& l, const ::Demo::Ping& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::Ping& l, const ::Demo::Ping& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Demo::__patch__PingPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::PingPtr* p = static_cast< ::Demo::PingPtr*>(__addr);
    assert(p);
    *p = ::Demo::PingPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::Ping::ice_staticId(), v->ice_id());
    }
}

const ::std::string&
IceProxy::Demo::Ping::ice_staticId()
{
    return __Demo__Ping_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Demo::Ping::__newInstance() const
{
    return new Ping;
}
