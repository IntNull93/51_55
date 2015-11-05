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

static const ::std::string __Test__A__callA_name = "callA";

static const ::std::string __Test__B__callB_name = "callB";

static const ::std::string __Test__C__callC_name = "callC";

static const ::std::string __Test__D__callD_name = "callD";

static const ::std::string __Test__E__callE_name = "callE";

static const ::std::string __Test__F__callF_name = "callF";

static const ::std::string __Test__G__shutdown_name = "shutdown";

static const ::std::string __Test__G__callG_name = "callG";

static const ::std::string __Test__H__callH_name = "callH";

::Ice::Object* IceInternal::upCast(::Test::Empty* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Empty* p) { return p; }

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

::Ice::Object* IceInternal::upCast(::Test::G* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::G* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::H* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::H* p) { return p; }

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
Test::__read(::IceInternal::BasicStream* __is, ::Test::GPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::G;
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
Test::A::___callA(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callA(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__A_all[] =
{
    "callA",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
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
            return ___callA(in, current);
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
Test::A::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
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
::Ice::DispatchStatus
Test::B::___callB(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callB(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__B_all[] =
{
    "callA",
    "callB",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::B::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__B_all, __Test__B_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__B_all)
    {
        case 0:
        {
            return ___callA(in, current);
        }
        case 1:
        {
            return ___callB(in, current);
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
Test::B::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
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
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
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

static const ::std::string __Test__C_ids[3] =
{
    "::Ice::Object",
    "::Test::A",
    "::Test::C"
};

bool
Test::C::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__C_ids, __Test__C_ids + 3, _s);
}

::std::vector< ::std::string>
Test::C::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__C_ids[0], &__Test__C_ids[3]);
}

const ::std::string&
Test::C::ice_id(const ::Ice::Current&) const
{
    return __Test__C_ids[2];
}

const ::std::string&
Test::C::ice_staticId()
{
    return __Test__C_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::C::___callC(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callC(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__C_all[] =
{
    "callA",
    "callC",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::C::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__C_all, __Test__C_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__C_all)
    {
        case 0:
        {
            return ___callA(in, current);
        }
        case 1:
        {
            return ___callC(in, current);
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
Test::C::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
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

static const ::std::string __Test__D_ids[5] =
{
    "::Ice::Object",
    "::Test::A",
    "::Test::B",
    "::Test::C",
    "::Test::D"
};

bool
Test::D::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D_ids, __Test__D_ids + 5, _s);
}

::std::vector< ::std::string>
Test::D::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D_ids[0], &__Test__D_ids[5]);
}

const ::std::string&
Test::D::ice_id(const ::Ice::Current&) const
{
    return __Test__D_ids[4];
}

const ::std::string&
Test::D::ice_staticId()
{
    return __Test__D_ids[4];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::D::___callD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callD(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__D_all[] =
{
    "callA",
    "callB",
    "callC",
    "callD",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::D::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__D_all, __Test__D_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__D_all)
    {
        case 0:
        {
            return ___callA(in, current);
        }
        case 1:
        {
            return ___callB(in, current);
        }
        case 2:
        {
            return ___callC(in, current);
        }
        case 3:
        {
            return ___callD(in, current);
        }
        case 4:
        {
            return ___ice_id(in, current);
        }
        case 5:
        {
            return ___ice_ids(in, current);
        }
        case 6:
        {
            return ___ice_isA(in, current);
        }
        case 7:
        {
            return ___ice_ping(in, current);
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
Test::E::___callE(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callE(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__E_all[] =
{
    "callE",
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
            return ___callE(in, current);
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

static const ::std::string __Test__F_ids[3] =
{
    "::Ice::Object",
    "::Test::E",
    "::Test::F"
};

bool
Test::F::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__F_ids, __Test__F_ids + 3, _s);
}

::std::vector< ::std::string>
Test::F::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__F_ids[0], &__Test__F_ids[3]);
}

const ::std::string&
Test::F::ice_id(const ::Ice::Current&) const
{
    return __Test__F_ids[2];
}

const ::std::string&
Test::F::ice_staticId()
{
    return __Test__F_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::F::___callF(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callF(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__F_all[] =
{
    "callE",
    "callF",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Test::F::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__F_all, __Test__F_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__F_all)
    {
        case 0:
        {
            return ___callE(in, current);
        }
        case 1:
        {
            return ___callF(in, current);
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
Test::F::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
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

static const ::std::string __Test__G_ids[2] =
{
    "::Ice::Object",
    "::Test::G"
};

bool
Test::G::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__G_ids, __Test__G_ids + 2, _s);
}

::std::vector< ::std::string>
Test::G::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__G_ids[0], &__Test__G_ids[2]);
}

const ::std::string&
Test::G::ice_id(const ::Ice::Current&) const
{
    return __Test__G_ids[1];
}

const ::std::string&
Test::G::ice_staticId()
{
    return __Test__G_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::G::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::G::___callG(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callG(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__G_all[] =
{
    "callG",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

::Ice::DispatchStatus
Test::G::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__G_all, __Test__G_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__G_all)
    {
        case 0:
        {
            return ___callG(in, current);
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
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::G::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::G::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::G& l, const ::Test::G& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::G& l, const ::Test::G& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__GPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::GPtr* p = static_cast< ::Test::GPtr*>(__addr);
    assert(p);
    *p = ::Test::GPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::G::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__H_ids[3] =
{
    "::Ice::Object",
    "::Test::G",
    "::Test::H"
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
    return __Test__H_ids[2];
}

const ::std::string&
Test::H::ice_staticId()
{
    return __Test__H_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::H::___callH(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = callH(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__H_all[] =
{
    "callG",
    "callH",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

::Ice::DispatchStatus
Test::H::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__H_all, __Test__H_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__H_all)
    {
        case 0:
        {
            return ___callG(in, current);
        }
        case 1:
        {
            return ___callH(in, current);
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
        case 6:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

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

::std::string
IceProxy::Test::A::callA(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__A__callA_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__A__callA_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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

::std::string
IceProxy::Test::B::callB(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__B__callB_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__B__callB_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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
IceProxy::Test::B::ice_staticId()
{
    return __Test__B_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::B::__newInstance() const
{
    return new B;
}

::std::string
IceProxy::Test::C::callC(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__C__callC_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__C__callC_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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
    return __Test__C_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::C::__newInstance() const
{
    return new C;
}

::std::string
IceProxy::Test::D::callD(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__D__callD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__D__callD_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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
    return __Test__D_ids[4];
}

::IceProxy::Ice::Object*
IceProxy::Test::D::__newInstance() const
{
    return new D;
}

::std::string
IceProxy::Test::E::callE(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__E__callE_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__E__callE_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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

::std::string
IceProxy::Test::F::callF(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__F__callF_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__F__callF_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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
    return __Test__F_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::F::__newInstance() const
{
    return new F;
}

void
IceProxy::Test::G::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__G__shutdown_name, ::Ice::Normal, __ctx);
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

::std::string
IceProxy::Test::G::callG(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__G__callG_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__G__callG_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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
IceProxy::Test::G::ice_staticId()
{
    return __Test__G_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::G::__newInstance() const
{
    return new G;
}

::std::string
IceProxy::Test::H::callH(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__H__callH_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__H__callH_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::std::string __ret;
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
IceProxy::Test::H::ice_staticId()
{
    return __Test__H_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::H::__newInstance() const
{
    return new H;
}
