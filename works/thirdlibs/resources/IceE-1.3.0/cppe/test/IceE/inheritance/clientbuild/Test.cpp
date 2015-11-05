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
#include <IceE/Iterator.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

static const ::std::string __Test__MA__IA__iaop_name = "iaop";

static const ::std::string __Test__MA__CA__caop_name = "caop";

static const ::std::string __Test__MB__IB1__ib1op_name = "ib1op";

static const ::std::string __Test__MB__IB2__ib2op_name = "ib2op";

static const ::std::string __Test__MB__CB__cbop_name = "cbop";

static const ::std::string __Test__MA__IC__icop_name = "icop";

static const ::std::string __Test__MA__CC__ccop_name = "ccop";

static const ::std::string __Test__MA__CD__cdop_name = "cdop";

static const ::std::string __Test__Initial__shutdown_name = "shutdown";

static const ::std::string __Test__Initial__caop_name = "caop";

static const ::std::string __Test__Initial__cbop_name = "cbop";

static const ::std::string __Test__Initial__ccop_name = "ccop";

static const ::std::string __Test__Initial__cdop_name = "cdop";

static const ::std::string __Test__Initial__iaop_name = "iaop";

static const ::std::string __Test__Initial__ib1op_name = "ib1op";

static const ::std::string __Test__Initial__ib2op_name = "ib2op";

static const ::std::string __Test__Initial__icop_name = "icop";

::Ice::Object* IceInternal::upCast(::Test::MA::IA* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MA::IA* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MA::CA* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MA::CA* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MB::IB1* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MB::IB1* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MB::IB2* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MB::IB2* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MB::CB* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MB::CB* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MA::IC* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MA::IC* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MA::CC* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MA::CC* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MA::CD* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MA::CD* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::Initial* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Initial* p) { return p; }

void
Test::MA::__read(::IceInternal::BasicStream* __is, ::Test::MA::IAPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MA::IA;
        v->__copyFrom(proxy);
    }
}

void
Test::MA::__read(::IceInternal::BasicStream* __is, ::Test::MA::CAPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MA::CA;
        v->__copyFrom(proxy);
    }
}

void
Test::MB::__read(::IceInternal::BasicStream* __is, ::Test::MB::IB1Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MB::IB1;
        v->__copyFrom(proxy);
    }
}

void
Test::MB::__read(::IceInternal::BasicStream* __is, ::Test::MB::IB2Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MB::IB2;
        v->__copyFrom(proxy);
    }
}

void
Test::MB::__read(::IceInternal::BasicStream* __is, ::Test::MB::CBPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MB::CB;
        v->__copyFrom(proxy);
    }
}

void
Test::MA::__read(::IceInternal::BasicStream* __is, ::Test::MA::ICPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MA::IC;
        v->__copyFrom(proxy);
    }
}

void
Test::MA::__read(::IceInternal::BasicStream* __is, ::Test::MA::CCPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MA::CC;
        v->__copyFrom(proxy);
    }
}

void
Test::MA::__read(::IceInternal::BasicStream* __is, ::Test::MA::CDPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MA::CD;
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

static const ::std::string __Test__MA__IA_ids[2] =
{
    "::Ice::Object",
    "::Test::MA::IA"
};

bool
Test::MA::IA::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MA__IA_ids, __Test__MA__IA_ids + 2, _s);
}

::std::vector< ::std::string>
Test::MA::IA::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MA__IA_ids[0], &__Test__MA__IA_ids[2]);
}

const ::std::string&
Test::MA::IA::ice_id(const ::Ice::Current&) const
{
    return __Test__MA__IA_ids[1];
}

const ::std::string&
Test::MA::IA::ice_staticId()
{
    return __Test__MA__IA_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MA::IA::___iaop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MA::IAPrx p;
    ::Test::MA::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::IAPrx __ret = iaop(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MA__IA_all[] =
{
    "iaop",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MA::IA::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MA__IA_all, __Test__MA__IA_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MA__IA_all)
    {
        case 0:
        {
            return ___iaop(in, current);
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
Test::MA::IA::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MA::IA::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::MA::operator==(const ::Test::MA::IA& l, const ::Test::MA::IA& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MA::operator<(const ::Test::MA::IA& l, const ::Test::MA::IA& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MA::__patch__IAPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MA::IAPtr* p = static_cast< ::Test::MA::IAPtr*>(__addr);
    assert(p);
    *p = ::Test::MA::IAPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MA::IA::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MA__CA_ids[2] =
{
    "::Ice::Object",
    "::Test::MA::CA"
};

bool
Test::MA::CA::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MA__CA_ids, __Test__MA__CA_ids + 2, _s);
}

::std::vector< ::std::string>
Test::MA::CA::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MA__CA_ids[0], &__Test__MA__CA_ids[2]);
}

const ::std::string&
Test::MA::CA::ice_id(const ::Ice::Current&) const
{
    return __Test__MA__CA_ids[1];
}

const ::std::string&
Test::MA::CA::ice_staticId()
{
    return __Test__MA__CA_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MA::CA::___caop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MA::CAPrx p;
    ::Test::MA::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::CAPrx __ret = caop(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MA__CA_all[] =
{
    "caop",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MA::CA::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MA__CA_all, __Test__MA__CA_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MA__CA_all)
    {
        case 0:
        {
            return ___caop(in, current);
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
Test::MA::CA::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MA::CA::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::MA::operator==(const ::Test::MA::CA& l, const ::Test::MA::CA& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MA::operator<(const ::Test::MA::CA& l, const ::Test::MA::CA& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MA::__patch__CAPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MA::CAPtr* p = static_cast< ::Test::MA::CAPtr*>(__addr);
    assert(p);
    *p = ::Test::MA::CAPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MA::CA::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MB__IB1_ids[3] =
{
    "::Ice::Object",
    "::Test::MA::IA",
    "::Test::MB::IB1"
};

bool
Test::MB::IB1::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MB__IB1_ids, __Test__MB__IB1_ids + 3, _s);
}

::std::vector< ::std::string>
Test::MB::IB1::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MB__IB1_ids[0], &__Test__MB__IB1_ids[3]);
}

const ::std::string&
Test::MB::IB1::ice_id(const ::Ice::Current&) const
{
    return __Test__MB__IB1_ids[2];
}

const ::std::string&
Test::MB::IB1::ice_staticId()
{
    return __Test__MB__IB1_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MB::IB1::___ib1op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MB::IB1Prx p;
    ::Test::MB::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MB::IB1Prx __ret = ib1op(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MB__IB1_all[] =
{
    "iaop",
    "ib1op",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MB::IB1::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MB__IB1_all, __Test__MB__IB1_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MB__IB1_all)
    {
        case 0:
        {
            return ___iaop(in, current);
        }
        case 1:
        {
            return ___ib1op(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MB::IB1::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MB::IB1::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::MB::operator==(const ::Test::MB::IB1& l, const ::Test::MB::IB1& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MB::operator<(const ::Test::MB::IB1& l, const ::Test::MB::IB1& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MB::__patch__IB1Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MB::IB1Ptr* p = static_cast< ::Test::MB::IB1Ptr*>(__addr);
    assert(p);
    *p = ::Test::MB::IB1Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MB::IB1::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MB__IB2_ids[3] =
{
    "::Ice::Object",
    "::Test::MA::IA",
    "::Test::MB::IB2"
};

bool
Test::MB::IB2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MB__IB2_ids, __Test__MB__IB2_ids + 3, _s);
}

::std::vector< ::std::string>
Test::MB::IB2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MB__IB2_ids[0], &__Test__MB__IB2_ids[3]);
}

const ::std::string&
Test::MB::IB2::ice_id(const ::Ice::Current&) const
{
    return __Test__MB__IB2_ids[2];
}

const ::std::string&
Test::MB::IB2::ice_staticId()
{
    return __Test__MB__IB2_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MB::IB2::___ib2op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MB::IB2Prx p;
    ::Test::MB::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MB::IB2Prx __ret = ib2op(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MB__IB2_all[] =
{
    "iaop",
    "ib2op",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MB::IB2::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MB__IB2_all, __Test__MB__IB2_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MB__IB2_all)
    {
        case 0:
        {
            return ___iaop(in, current);
        }
        case 1:
        {
            return ___ib2op(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MB::IB2::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MB::IB2::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::MB::operator==(const ::Test::MB::IB2& l, const ::Test::MB::IB2& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MB::operator<(const ::Test::MB::IB2& l, const ::Test::MB::IB2& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MB::__patch__IB2Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MB::IB2Ptr* p = static_cast< ::Test::MB::IB2Ptr*>(__addr);
    assert(p);
    *p = ::Test::MB::IB2Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MB::IB2::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MB__CB_ids[3] =
{
    "::Ice::Object",
    "::Test::MA::CA",
    "::Test::MB::CB"
};

bool
Test::MB::CB::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MB__CB_ids, __Test__MB__CB_ids + 3, _s);
}

::std::vector< ::std::string>
Test::MB::CB::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MB__CB_ids[0], &__Test__MB__CB_ids[3]);
}

const ::std::string&
Test::MB::CB::ice_id(const ::Ice::Current&) const
{
    return __Test__MB__CB_ids[2];
}

const ::std::string&
Test::MB::CB::ice_staticId()
{
    return __Test__MB__CB_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MB::CB::___cbop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MB::CBPrx p;
    ::Test::MB::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MB::CBPrx __ret = cbop(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MB__CB_all[] =
{
    "caop",
    "cbop",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MB::CB::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MB__CB_all, __Test__MB__CB_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MB__CB_all)
    {
        case 0:
        {
            return ___caop(in, current);
        }
        case 1:
        {
            return ___cbop(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MB::CB::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Test::MA::CA::__write(__os);
}

void
Test::MB::CB::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Test::MA::CA::__read(__is, true);
}


bool
Test::MB::operator==(const ::Test::MB::CB& l, const ::Test::MB::CB& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MB::operator<(const ::Test::MB::CB& l, const ::Test::MB::CB& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MB::__patch__CBPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MB::CBPtr* p = static_cast< ::Test::MB::CBPtr*>(__addr);
    assert(p);
    *p = ::Test::MB::CBPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MB::CB::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MA__IC_ids[5] =
{
    "::Ice::Object",
    "::Test::MA::IA",
    "::Test::MA::IC",
    "::Test::MB::IB1",
    "::Test::MB::IB2"
};

bool
Test::MA::IC::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MA__IC_ids, __Test__MA__IC_ids + 5, _s);
}

::std::vector< ::std::string>
Test::MA::IC::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MA__IC_ids[0], &__Test__MA__IC_ids[5]);
}

const ::std::string&
Test::MA::IC::ice_id(const ::Ice::Current&) const
{
    return __Test__MA__IC_ids[2];
}

const ::std::string&
Test::MA::IC::ice_staticId()
{
    return __Test__MA__IC_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MA::IC::___icop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MA::ICPrx p;
    ::Test::MA::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::ICPrx __ret = icop(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MA__IC_all[] =
{
    "iaop",
    "ib1op",
    "ib2op",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "icop"
};

::Ice::DispatchStatus
Test::MA::IC::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MA__IC_all, __Test__MA__IC_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MA__IC_all)
    {
        case 0:
        {
            return ___iaop(in, current);
        }
        case 1:
        {
            return ___ib1op(in, current);
        }
        case 2:
        {
            return ___ib2op(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___icop(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MA::IC::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MA::IC::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::MA::operator==(const ::Test::MA::IC& l, const ::Test::MA::IC& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MA::operator<(const ::Test::MA::IC& l, const ::Test::MA::IC& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MA::__patch__ICPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MA::ICPtr* p = static_cast< ::Test::MA::ICPtr*>(__addr);
    assert(p);
    *p = ::Test::MA::ICPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MA::IC::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MA__CC_ids[4] =
{
    "::Ice::Object",
    "::Test::MA::CA",
    "::Test::MA::CC",
    "::Test::MB::CB"
};

bool
Test::MA::CC::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MA__CC_ids, __Test__MA__CC_ids + 4, _s);
}

::std::vector< ::std::string>
Test::MA::CC::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MA__CC_ids[0], &__Test__MA__CC_ids[4]);
}

const ::std::string&
Test::MA::CC::ice_id(const ::Ice::Current&) const
{
    return __Test__MA__CC_ids[2];
}

const ::std::string&
Test::MA::CC::ice_staticId()
{
    return __Test__MA__CC_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MA::CC::___ccop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MA::CCPrx p;
    ::Test::MA::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::CCPrx __ret = ccop(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MA__CC_all[] =
{
    "caop",
    "cbop",
    "ccop",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MA::CC::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MA__CC_all, __Test__MA__CC_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MA__CC_all)
    {
        case 0:
        {
            return ___caop(in, current);
        }
        case 1:
        {
            return ___cbop(in, current);
        }
        case 2:
        {
            return ___ccop(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MA::CC::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Test::MB::CB::__write(__os);
}

void
Test::MA::CC::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Test::MB::CB::__read(__is, true);
}


bool
Test::MA::operator==(const ::Test::MA::CC& l, const ::Test::MA::CC& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MA::operator<(const ::Test::MA::CC& l, const ::Test::MA::CC& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MA::__patch__CCPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MA::CCPtr* p = static_cast< ::Test::MA::CCPtr*>(__addr);
    assert(p);
    *p = ::Test::MA::CCPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MA::CC::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MA__CD_ids[8] =
{
    "::Ice::Object",
    "::Test::MA::CA",
    "::Test::MA::CC",
    "::Test::MA::CD",
    "::Test::MA::IA",
    "::Test::MB::CB",
    "::Test::MB::IB1",
    "::Test::MB::IB2"
};

bool
Test::MA::CD::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MA__CD_ids, __Test__MA__CD_ids + 8, _s);
}

::std::vector< ::std::string>
Test::MA::CD::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MA__CD_ids[0], &__Test__MA__CD_ids[8]);
}

const ::std::string&
Test::MA::CD::ice_id(const ::Ice::Current&) const
{
    return __Test__MA__CD_ids[3];
}

const ::std::string&
Test::MA::CD::ice_staticId()
{
    return __Test__MA__CD_ids[3];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MA::CD::___cdop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MA::CDPrx p;
    ::Test::MA::__read(__is, p);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::CDPrx __ret = cdop(p, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MA__CD_all[] =
{
    "caop",
    "cbop",
    "ccop",
    "cdop",
    "iaop",
    "ib1op",
    "ib2op",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::MA::CD::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MA__CD_all, __Test__MA__CD_all + 11, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MA__CD_all)
    {
        case 0:
        {
            return ___caop(in, current);
        }
        case 1:
        {
            return ___cbop(in, current);
        }
        case 2:
        {
            return ___ccop(in, current);
        }
        case 3:
        {
            return ___cdop(in, current);
        }
        case 4:
        {
            return ___iaop(in, current);
        }
        case 5:
        {
            return ___ib1op(in, current);
        }
        case 6:
        {
            return ___ib2op(in, current);
        }
        case 7:
        {
            return ___ice_id(in, current);
        }
        case 8:
        {
            return ___ice_ids(in, current);
        }
        case 9:
        {
            return ___ice_isA(in, current);
        }
        case 10:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MA::CD::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Test::MA::CC::__write(__os);
}

void
Test::MA::CD::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Test::MA::CC::__read(__is, true);
}


bool
Test::MA::operator==(const ::Test::MA::CD& l, const ::Test::MA::CD& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::MA::operator<(const ::Test::MA::CD& l, const ::Test::MA::CD& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::MA::__patch__CDPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MA::CDPtr* p = static_cast< ::Test::MA::CDPtr*>(__addr);
    assert(p);
    *p = ::Test::MA::CDPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MA::CD::ice_staticId(), v->ice_id());
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
Test::Initial::___caop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::CAPrx __ret = caop(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___cbop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MB::CBPrx __ret = cbop(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___ccop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::CCPrx __ret = ccop(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___cdop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::CDPrx __ret = cdop(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___iaop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::IAPrx __ret = iaop(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___ib1op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MB::IB1Prx __ret = ib1op(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___ib2op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MB::IB2Prx __ret = ib2op(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Initial::___icop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MA::ICPrx __ret = icop(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__Initial_all[] =
{
    "caop",
    "cbop",
    "ccop",
    "cdop",
    "iaop",
    "ib1op",
    "ib2op",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "icop",
    "shutdown"
};

::Ice::DispatchStatus
Test::Initial::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__Initial_all, __Test__Initial_all + 13, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Initial_all)
    {
        case 0:
        {
            return ___caop(in, current);
        }
        case 1:
        {
            return ___cbop(in, current);
        }
        case 2:
        {
            return ___ccop(in, current);
        }
        case 3:
        {
            return ___cdop(in, current);
        }
        case 4:
        {
            return ___iaop(in, current);
        }
        case 5:
        {
            return ___ib1op(in, current);
        }
        case 6:
        {
            return ___ib2op(in, current);
        }
        case 7:
        {
            return ___ice_id(in, current);
        }
        case 8:
        {
            return ___ice_ids(in, current);
        }
        case 9:
        {
            return ___ice_isA(in, current);
        }
        case 10:
        {
            return ___ice_ping(in, current);
        }
        case 11:
        {
            return ___icop(in, current);
        }
        case 12:
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

::Test::MA::IAPrx
IceProxy::Test::MA::IA::iaop(const ::Test::MA::IAPrx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MA__IA__iaop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MA__IA__iaop_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MA::IAPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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
IceProxy::Test::MA::IA::ice_staticId()
{
    return __Test__MA__IA_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::MA::IA::__newInstance() const
{
    return new IA;
}

::Test::MA::CAPrx
IceProxy::Test::MA::CA::caop(const ::Test::MA::CAPrx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MA__CA__caop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MA__CA__caop_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MA::CAPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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
IceProxy::Test::MA::CA::ice_staticId()
{
    return __Test__MA__CA_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::MA::CA::__newInstance() const
{
    return new CA;
}

::Test::MB::IB1Prx
IceProxy::Test::MB::IB1::ib1op(const ::Test::MB::IB1Prx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MB__IB1__ib1op_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MB__IB1__ib1op_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MB::IB1Prx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MB::__read(__is, __ret);
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
IceProxy::Test::MB::IB1::ice_staticId()
{
    return __Test__MB__IB1_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::MB::IB1::__newInstance() const
{
    return new IB1;
}

::Test::MB::IB2Prx
IceProxy::Test::MB::IB2::ib2op(const ::Test::MB::IB2Prx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MB__IB2__ib2op_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MB__IB2__ib2op_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MB::IB2Prx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MB::__read(__is, __ret);
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
IceProxy::Test::MB::IB2::ice_staticId()
{
    return __Test__MB__IB2_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::MB::IB2::__newInstance() const
{
    return new IB2;
}

::Test::MB::CBPrx
IceProxy::Test::MB::CB::cbop(const ::Test::MB::CBPrx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MB__CB__cbop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MB__CB__cbop_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MB::CBPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MB::__read(__is, __ret);
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
IceProxy::Test::MB::CB::ice_staticId()
{
    return __Test__MB__CB_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::MB::CB::__newInstance() const
{
    return new CB;
}

::Test::MA::ICPrx
IceProxy::Test::MA::IC::icop(const ::Test::MA::ICPrx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MA__IC__icop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MA__IC__icop_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MA::ICPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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
IceProxy::Test::MA::IC::ice_staticId()
{
    return __Test__MA__IC_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::MA::IC::__newInstance() const
{
    return new IC;
}

::Test::MA::CCPrx
IceProxy::Test::MA::CC::ccop(const ::Test::MA::CCPrx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MA__CC__ccop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MA__CC__ccop_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MA::CCPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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
IceProxy::Test::MA::CC::ice_staticId()
{
    return __Test__MA__CC_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::MA::CC::__newInstance() const
{
    return new CC;
}

::Test::MA::CDPrx
IceProxy::Test::MA::CD::cdop(const ::Test::MA::CDPrx& p, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MA__CD__cdop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MA__CD__cdop_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
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
                ::Test::MA::CDPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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
IceProxy::Test::MA::CD::ice_staticId()
{
    return __Test__MA__CD_ids[3];
}

::IceProxy::Ice::Object*
IceProxy::Test::MA::CD::__newInstance() const
{
    return new CD;
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

::Test::MA::CAPrx
IceProxy::Test::Initial::caop(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__caop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__caop_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MA::CAPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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

::Test::MB::CBPrx
IceProxy::Test::Initial::cbop(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__cbop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__cbop_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MB::CBPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MB::__read(__is, __ret);
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

::Test::MA::CCPrx
IceProxy::Test::Initial::ccop(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__ccop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__ccop_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MA::CCPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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

::Test::MA::CDPrx
IceProxy::Test::Initial::cdop(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__cdop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__cdop_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MA::CDPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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

::Test::MA::IAPrx
IceProxy::Test::Initial::iaop(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__iaop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__iaop_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MA::IAPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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

::Test::MB::IB1Prx
IceProxy::Test::Initial::ib1op(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__ib1op_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__ib1op_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MB::IB1Prx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MB::__read(__is, __ret);
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

::Test::MB::IB2Prx
IceProxy::Test::Initial::ib2op(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__ib2op_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__ib2op_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MB::IB2Prx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MB::__read(__is, __ret);
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

::Test::MA::ICPrx
IceProxy::Test::Initial::icop(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__Initial__icop_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Initial__icop_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::MA::ICPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::MA::__read(__is, __ret);
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
IceProxy::Test::Initial::ice_staticId()
{
    return __Test__Initial_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Initial::__newInstance() const
{
    return new Initial;
}
