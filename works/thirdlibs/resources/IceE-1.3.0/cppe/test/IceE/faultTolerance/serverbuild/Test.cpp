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

static const ::std::string __Test__TestIntf__shutdown_name = "shutdown";

static const ::std::string __Test__TestIntf__abort_name = "abort";

static const ::std::string __Test__TestIntf__idempotentAbort_name = "idempotentAbort";

static const ::std::string __Test__TestIntf__pid_name = "pid";

::Ice::Object* IceInternal::upCast(::Test::TestIntf* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::TestIntf* p) { return p; }

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
Test::TestIntf::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___abort(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    abort(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___idempotentAbort(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    idempotentAbort(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___pid(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = pid(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__TestIntf_all[] =
{
    "abort",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "idempotentAbort",
    "pid",
    "shutdown"
};

::Ice::DispatchStatus
Test::TestIntf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__TestIntf_all, __Test__TestIntf_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestIntf_all)
    {
        case 0:
        {
            return ___abort(in, current);
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
            return ___idempotentAbort(in, current);
        }
        case 6:
        {
            return ___pid(in, current);
        }
        case 7:
        {
            return ___shutdown(in, current);
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_shutdown::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__TestIntf__shutdown_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_shutdown::__response(bool __ok)
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_abort::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__TestIntf__abort_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_abort::__response(bool __ok)
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_idempotentAbort::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__TestIntf__idempotentAbort_name, ::Ice::Idempotent, __ctx);
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
Test::AMI_TestIntf_idempotentAbort::__response(bool __ok)
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_pid::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__pid_name);
        __prepare(__prx, __Test__TestIntf__pid_name, ::Ice::Idempotent, __ctx);
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
Test::AMI_TestIntf_pid::__response(bool __ok)
{
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(__ret);
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
    ice_response(__ret);
    __releaseCallback();
}
#endif

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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::TestIntf::shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::abort(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__abort_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestIntf::abort_async(const ::Test::AMI_TestIntf_abortPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::abort_async(const ::Test::AMI_TestIntf_abortPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::idempotentAbort(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__idempotentAbort_name, ::Ice::Idempotent, __ctx);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::TestIntf::idempotentAbort_async(const ::Test::AMI_TestIntf_idempotentAbortPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::idempotentAbort_async(const ::Test::AMI_TestIntf_idempotentAbortPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

::Ice::Int
IceProxy::Test::TestIntf::pid(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__pid_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__pid_name, ::Ice::Idempotent, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Ice::Int __ret;
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::TestIntf::pid_async(const ::Test::AMI_TestIntf_pidPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::pid_async(const ::Test::AMI_TestIntf_pidPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

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
