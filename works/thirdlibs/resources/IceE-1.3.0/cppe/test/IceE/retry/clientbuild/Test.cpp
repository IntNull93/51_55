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

static const ::std::string __Test__Retry__op_name = "op";

static const ::std::string __Test__Retry__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Test::Retry* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Retry* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::RetryPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Retry;
        v->__copyFrom(proxy);
    }
}

static const ::std::string __Test__Retry_ids[2] =
{
    "::Ice::Object",
    "::Test::Retry"
};

bool
Test::Retry::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Retry_ids, __Test__Retry_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Retry::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Retry_ids[0], &__Test__Retry_ids[2]);
}

const ::std::string&
Test::Retry::ice_id(const ::Ice::Current&) const
{
    return __Test__Retry_ids[1];
}

const ::std::string&
Test::Retry::ice_staticId()
{
    return __Test__Retry_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Retry::___op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    bool kill;
    __is->read(kill);
    op(kill, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Retry::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__Retry_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "op",
    "shutdown"
};

::Ice::DispatchStatus
Test::Retry::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__Retry_all, __Test__Retry_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Retry_all)
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
Test::Retry::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Retry::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::Retry& l, const ::Test::Retry& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Retry& l, const ::Test::Retry& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__RetryPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::RetryPtr* p = static_cast< ::Test::RetryPtr*>(__addr);
    assert(p);
    *p = ::Test::RetryPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Retry::ice_staticId(), v->ice_id());
    }
}
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Retry_op::__invoke(const ::Test::RetryPrx& __prx, bool kill, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Retry__op_name, ::Ice::Normal, __ctx);
        __os->write(kill);
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
Test::AMI_Retry_op::__response(bool __ok)
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
IceProxy::Test::Retry::op(bool kill, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Retry__op_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(kill);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::Retry::op_async(const ::Test::AMI_Retry_opPtr& __cb, bool kill)
{
    return __cb->__invoke(this, kill, 0);
}

bool
IceProxy::Test::Retry::op_async(const ::Test::AMI_Retry_opPtr& __cb, bool kill, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, kill, &__ctx);
}
#endif

void
IceProxy::Test::Retry::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Retry__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Retry::ice_staticId()
{
    return __Test__Retry_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Retry::__newInstance() const
{
    return new Retry;
}
