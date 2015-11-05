// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Session.ice'

#include <Session.h>
#include <IceE/LocalException.h>
#include <IceE/ObjectFactory.h>
#include <IceE/BasicStream.h>
#include <IceE/LocalException.h>
#include <IceE/Iterator.h>
#include <IceE/DisableWarnings.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

static const ::std::string __Glacier2__Session__destroy_name = "destroy";

static const ::std::string __Glacier2__StringSet__add_name = "add";

static const ::std::string __Glacier2__StringSet__remove_name = "remove";

static const ::std::string __Glacier2__StringSet__get_name = "get";

static const ::std::string __Glacier2__IdentitySet__add_name = "add";

static const ::std::string __Glacier2__IdentitySet__remove_name = "remove";

static const ::std::string __Glacier2__IdentitySet__get_name = "get";

static const ::std::string __Glacier2__SessionControl__categories_name = "categories";

static const ::std::string __Glacier2__SessionControl__adapterIds_name = "adapterIds";

static const ::std::string __Glacier2__SessionControl__identities_name = "identities";

static const ::std::string __Glacier2__SessionControl__destroy_name = "destroy";

static const ::std::string __Glacier2__SessionManager__create_name = "create";

::Ice::Object* IceInternal::upCast(::Glacier2::Session* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::Session* p) { return p; }

::Ice::Object* IceInternal::upCast(::Glacier2::StringSet* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::StringSet* p) { return p; }

::Ice::Object* IceInternal::upCast(::Glacier2::IdentitySet* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::IdentitySet* p) { return p; }

::Ice::Object* IceInternal::upCast(::Glacier2::SessionControl* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::SessionControl* p) { return p; }

::Ice::Object* IceInternal::upCast(::Glacier2::SessionManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::SessionManager* p) { return p; }

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::SessionPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::Session;
        v->__copyFrom(proxy);
    }
}

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::StringSetPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::StringSet;
        v->__copyFrom(proxy);
    }
}

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::IdentitySetPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::IdentitySet;
        v->__copyFrom(proxy);
    }
}

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::SessionControlPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::SessionControl;
        v->__copyFrom(proxy);
    }
}

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::SessionManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::SessionManager;
        v->__copyFrom(proxy);
    }
}

void
Ice::__writeIdentitySeq(::IceInternal::BasicStream* __os, const ::Ice::Identity* begin, const ::Ice::Identity* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
Ice::__readIdentitySeq(::IceInternal::BasicStream* __is, ::Ice::IdentitySeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

Glacier2::CannotCreateSessionException::CannotCreateSessionException(const ::std::string& __ice_reason) :
    ::Ice::UserException(),
    reason(__ice_reason)
{
}

Glacier2::CannotCreateSessionException::~CannotCreateSessionException() throw()
{
}

static const char* __Glacier2__CannotCreateSessionException_name = "Glacier2::CannotCreateSessionException";

::std::string
Glacier2::CannotCreateSessionException::ice_name() const
{
    return __Glacier2__CannotCreateSessionException_name;
}

::Ice::Exception*
Glacier2::CannotCreateSessionException::ice_clone() const
{
    return new CannotCreateSessionException(*this);
}

void
Glacier2::CannotCreateSessionException::ice_throw() const
{
    throw *this;
}

void
Glacier2::CannotCreateSessionException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Glacier2::CannotCreateSessionException"), false);
    __os->startWriteSlice();
    __os->write(reason);
    __os->endWriteSlice();
}

void
Glacier2::CannotCreateSessionException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(reason);
    __is->endReadSlice();
}

struct __F__Glacier2__CannotCreateSessionException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Glacier2::CannotCreateSessionException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Glacier2__CannotCreateSessionException__Ptr = new __F__Glacier2__CannotCreateSessionException;

const ::IceInternal::UserExceptionFactoryPtr&
Glacier2::CannotCreateSessionException::ice_factory()
{
    return __F__Glacier2__CannotCreateSessionException__Ptr;
}

class __F__Glacier2__CannotCreateSessionException__Init
{
public:

    __F__Glacier2__CannotCreateSessionException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Glacier2::CannotCreateSessionException", ::Glacier2::CannotCreateSessionException::ice_factory());
    }

    ~__F__Glacier2__CannotCreateSessionException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Glacier2::CannotCreateSessionException");
    }
};

static __F__Glacier2__CannotCreateSessionException__Init __F__Glacier2__CannotCreateSessionException__i;

#ifdef __APPLE__
extern "C" { void __F__Glacier2__CannotCreateSessionException__initializer() {} }
#endif

static const ::std::string __Glacier2__Session_ids[2] =
{
    "::Glacier2::Session",
    "::Ice::Object"
};

bool
Glacier2::Session::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__Session_ids, __Glacier2__Session_ids + 2, _s);
}

::std::vector< ::std::string>
Glacier2::Session::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__Session_ids[0], &__Glacier2__Session_ids[2]);
}

const ::std::string&
Glacier2::Session::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__Session_ids[0];
}

const ::std::string&
Glacier2::Session::ice_staticId()
{
    return __Glacier2__Session_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::Session::___destroy(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    destroy(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__Session_all[] =
{
    "destroy",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Glacier2::Session::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__Session_all, __Glacier2__Session_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__Session_all)
    {
        case 0:
        {
            return ___destroy(in, current);
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
Glacier2::Session::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::Session::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::Session& l, const ::Glacier2::Session& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::Session& l, const ::Glacier2::Session& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__SessionPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::SessionPtr* p = static_cast< ::Glacier2::SessionPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::SessionPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::Session::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Glacier2__StringSet_ids[2] =
{
    "::Glacier2::StringSet",
    "::Ice::Object"
};

bool
Glacier2::StringSet::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__StringSet_ids, __Glacier2__StringSet_ids + 2, _s);
}

::std::vector< ::std::string>
Glacier2::StringSet::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__StringSet_ids[0], &__Glacier2__StringSet_ids[2]);
}

const ::std::string&
Glacier2::StringSet::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__StringSet_ids[0];
}

const ::std::string&
Glacier2::StringSet::ice_staticId()
{
    return __Glacier2__StringSet_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::StringSet::___add(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::StringSeq additions;
    __is->read(additions);
    add(additions, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::StringSet::___remove(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::StringSeq deletions;
    __is->read(deletions);
    remove(deletions, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::StringSet::___get(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::StringSeq __ret = get(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__StringSet_all[] =
{
    "add",
    "get",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "remove"
};

::Ice::DispatchStatus
Glacier2::StringSet::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__StringSet_all, __Glacier2__StringSet_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__StringSet_all)
    {
        case 0:
        {
            return ___add(in, current);
        }
        case 1:
        {
            return ___get(in, current);
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
            return ___remove(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Glacier2::StringSet::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::StringSet::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::StringSet& l, const ::Glacier2::StringSet& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::StringSet& l, const ::Glacier2::StringSet& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__StringSetPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::StringSetPtr* p = static_cast< ::Glacier2::StringSetPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::StringSetPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::StringSet::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Glacier2__IdentitySet_ids[2] =
{
    "::Glacier2::IdentitySet",
    "::Ice::Object"
};

bool
Glacier2::IdentitySet::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__IdentitySet_ids, __Glacier2__IdentitySet_ids + 2, _s);
}

::std::vector< ::std::string>
Glacier2::IdentitySet::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__IdentitySet_ids[0], &__Glacier2__IdentitySet_ids[2]);
}

const ::std::string&
Glacier2::IdentitySet::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__IdentitySet_ids[0];
}

const ::std::string&
Glacier2::IdentitySet::ice_staticId()
{
    return __Glacier2__IdentitySet_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::IdentitySet::___add(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::IdentitySeq additions;
    ::Ice::__readIdentitySeq(__is, additions);
    add(additions, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::IdentitySet::___remove(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::IdentitySeq deletions;
    ::Ice::__readIdentitySeq(__is, deletions);
    remove(deletions, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::IdentitySet::___get(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::IdentitySeq __ret = get(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Ice::__writeIdentitySeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__IdentitySet_all[] =
{
    "add",
    "get",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "remove"
};

::Ice::DispatchStatus
Glacier2::IdentitySet::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__IdentitySet_all, __Glacier2__IdentitySet_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__IdentitySet_all)
    {
        case 0:
        {
            return ___add(in, current);
        }
        case 1:
        {
            return ___get(in, current);
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
            return ___remove(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Glacier2::IdentitySet::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::IdentitySet::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::IdentitySet& l, const ::Glacier2::IdentitySet& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::IdentitySet& l, const ::Glacier2::IdentitySet& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__IdentitySetPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::IdentitySetPtr* p = static_cast< ::Glacier2::IdentitySetPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::IdentitySetPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::IdentitySet::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Glacier2__SessionControl_ids[2] =
{
    "::Glacier2::SessionControl",
    "::Ice::Object"
};

bool
Glacier2::SessionControl::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__SessionControl_ids, __Glacier2__SessionControl_ids + 2, _s);
}

::std::vector< ::std::string>
Glacier2::SessionControl::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__SessionControl_ids[0], &__Glacier2__SessionControl_ids[2]);
}

const ::std::string&
Glacier2::SessionControl::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__SessionControl_ids[0];
}

const ::std::string&
Glacier2::SessionControl::ice_staticId()
{
    return __Glacier2__SessionControl_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::SessionControl::___categories(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Glacier2::StringSetPrx __ret = categories(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::SessionControl::___adapterIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Glacier2::StringSetPrx __ret = adapterIds(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::SessionControl::___identities(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Glacier2::IdentitySetPrx __ret = identities(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::SessionControl::___destroy(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    destroy(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__SessionControl_all[] =
{
    "adapterIds",
    "categories",
    "destroy",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "identities"
};

::Ice::DispatchStatus
Glacier2::SessionControl::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__SessionControl_all, __Glacier2__SessionControl_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__SessionControl_all)
    {
        case 0:
        {
            return ___adapterIds(in, current);
        }
        case 1:
        {
            return ___categories(in, current);
        }
        case 2:
        {
            return ___destroy(in, current);
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
            return ___identities(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Glacier2::SessionControl::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::SessionControl::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::SessionControl& l, const ::Glacier2::SessionControl& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::SessionControl& l, const ::Glacier2::SessionControl& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__SessionControlPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::SessionControlPtr* p = static_cast< ::Glacier2::SessionControlPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::SessionControlPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::SessionControl::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Glacier2__SessionManager_ids[2] =
{
    "::Glacier2::SessionManager",
    "::Ice::Object"
};

bool
Glacier2::SessionManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__SessionManager_ids, __Glacier2__SessionManager_ids + 2, _s);
}

::std::vector< ::std::string>
Glacier2::SessionManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__SessionManager_ids[0], &__Glacier2__SessionManager_ids[2]);
}

const ::std::string&
Glacier2::SessionManager::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__SessionManager_ids[0];
}

const ::std::string&
Glacier2::SessionManager::ice_staticId()
{
    return __Glacier2__SessionManager_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::SessionManager::___create(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Glacier2::SessionControlPrx control;
    __is->read(userId);
    ::Glacier2::__read(__is, control);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::Glacier2::SessionPrx __ret = create(userId, control, __current);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    }
    catch(const ::Glacier2::CannotCreateSessionException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__SessionManager_all[] =
{
    "create",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Glacier2::SessionManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__SessionManager_all, __Glacier2__SessionManager_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__SessionManager_all)
    {
        case 0:
        {
            return ___create(in, current);
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
Glacier2::SessionManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::SessionManager::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::SessionManager& l, const ::Glacier2::SessionManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::SessionManager& l, const ::Glacier2::SessionManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__SessionManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::SessionManagerPtr* p = static_cast< ::Glacier2::SessionManagerPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::SessionManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::SessionManager::ice_staticId(), v->ice_id());
    }
}

void
IceProxy::Glacier2::Session::destroy(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__Session__destroy_name, ::Ice::Normal, __ctx);
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
IceProxy::Glacier2::Session::ice_staticId()
{
    return __Glacier2__Session_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::Session::__newInstance() const
{
    return new Session;
}

void
IceProxy::Glacier2::StringSet::add(const ::Ice::StringSeq& additions, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__StringSet__add_name, ::Ice::Idempotent, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(additions.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&additions[0], &additions[0] + additions.size());
                }
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
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
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
IceProxy::Glacier2::StringSet::remove(const ::Ice::StringSeq& deletions, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__StringSet__remove_name, ::Ice::Idempotent, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(deletions.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&deletions[0], &deletions[0] + deletions.size());
                }
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
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
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

::Ice::StringSeq
IceProxy::Glacier2::StringSet::get(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__StringSet__get_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__StringSet__get_name, ::Ice::Idempotent, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Ice::StringSeq __ret;
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
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
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
IceProxy::Glacier2::StringSet::ice_staticId()
{
    return __Glacier2__StringSet_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::StringSet::__newInstance() const
{
    return new StringSet;
}

void
IceProxy::Glacier2::IdentitySet::add(const ::Ice::IdentitySeq& additions, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__IdentitySet__add_name, ::Ice::Idempotent, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(additions.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Ice::__writeIdentitySeq(__os, &additions[0], &additions[0] + additions.size());
                }
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
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
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
IceProxy::Glacier2::IdentitySet::remove(const ::Ice::IdentitySeq& deletions, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__IdentitySet__remove_name, ::Ice::Idempotent, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(deletions.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Ice::__writeIdentitySeq(__os, &deletions[0], &deletions[0] + deletions.size());
                }
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
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
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

::Ice::IdentitySeq
IceProxy::Glacier2::IdentitySet::get(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__IdentitySet__get_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__IdentitySet__get_name, ::Ice::Idempotent, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Ice::IdentitySeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::__readIdentitySeq(__is, __ret);
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
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
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
IceProxy::Glacier2::IdentitySet::ice_staticId()
{
    return __Glacier2__IdentitySet_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::IdentitySet::__newInstance() const
{
    return new IdentitySet;
}

::Glacier2::StringSetPrx
IceProxy::Glacier2::SessionControl::categories(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__SessionControl__categories_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__SessionControl__categories_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Glacier2::StringSetPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Glacier2::__read(__is, __ret);
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

::Glacier2::StringSetPrx
IceProxy::Glacier2::SessionControl::adapterIds(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__SessionControl__adapterIds_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__SessionControl__adapterIds_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Glacier2::StringSetPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Glacier2::__read(__is, __ret);
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

::Glacier2::IdentitySetPrx
IceProxy::Glacier2::SessionControl::identities(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__SessionControl__identities_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__SessionControl__identities_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Glacier2::IdentitySetPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Glacier2::__read(__is, __ret);
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
IceProxy::Glacier2::SessionControl::destroy(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__SessionControl__destroy_name, ::Ice::Normal, __ctx);
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
IceProxy::Glacier2::SessionControl::ice_staticId()
{
    return __Glacier2__SessionControl_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::SessionControl::__newInstance() const
{
    return new SessionControl;
}

::Glacier2::SessionPrx
IceProxy::Glacier2::SessionManager::create(const ::std::string& userId, const ::Glacier2::SessionControlPrx& control, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__SessionManager__create_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__SessionManager__create_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(userId);
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(control.get())));
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
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Glacier2::CannotCreateSessionException&)
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
                ::Glacier2::SessionPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Glacier2::__read(__is, __ret);
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
IceProxy::Glacier2::SessionManager::ice_staticId()
{
    return __Glacier2__SessionManager_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::SessionManager::__newInstance() const
{
    return new SessionManager;
}
