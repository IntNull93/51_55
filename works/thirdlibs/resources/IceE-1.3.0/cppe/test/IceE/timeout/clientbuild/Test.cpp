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

static const ::std::string __Test__Timeout__op_name = "op";

static const ::std::string __Test__Timeout__sendData_name = "sendData";

static const ::std::string __Test__Timeout__sleep_name = "sleep";

static const ::std::string __Test__Timeout__holdAdapter_name = "holdAdapter";

static const ::std::string __Test__Timeout__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Test::Timeout* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::Timeout* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::TimeoutPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Timeout;
        v->__copyFrom(proxy);
    }
}

static const ::std::string __Test__Timeout_ids[2] =
{
    "::Ice::Object",
    "::Test::Timeout"
};

bool
Test::Timeout::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Timeout_ids, __Test__Timeout_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Timeout::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Timeout_ids[0], &__Test__Timeout_ids[2]);
}

const ::std::string&
Test::Timeout::ice_id(const ::Ice::Current&) const
{
    return __Test__Timeout_ids[1];
}

const ::std::string&
Test::Timeout::ice_staticId()
{
    return __Test__Timeout_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Timeout::___op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    op(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Timeout::___sendData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ByteSeq seq;
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___seq;
    __is->read(___seq);
    ::std::vector< ::Ice::Byte>(___seq.first, ___seq.second).swap(seq);
    sendData(seq, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Timeout::___sleep(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int to;
    __is->read(to);
    sleep(to, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Timeout::___holdAdapter(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int to;
    __is->read(to);
    holdAdapter(to, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::Timeout::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__Timeout_all[] =
{
    "holdAdapter",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "op",
    "sendData",
    "shutdown",
    "sleep"
};

::Ice::DispatchStatus
Test::Timeout::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__Timeout_all, __Test__Timeout_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Timeout_all)
    {
        case 0:
        {
            return ___holdAdapter(in, current);
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
            return ___op(in, current);
        }
        case 6:
        {
            return ___sendData(in, current);
        }
        case 7:
        {
            return ___shutdown(in, current);
        }
        case 8:
        {
            return ___sleep(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::Timeout::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::Timeout::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::Timeout& l, const ::Test::Timeout& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::Timeout& l, const ::Test::Timeout& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__TimeoutPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::TimeoutPtr* p = static_cast< ::Test::TimeoutPtr*>(__addr);
    assert(p);
    *p = ::Test::TimeoutPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::Timeout::ice_staticId(), v->ice_id());
    }
}
#ifdef ICEE_HAS_AMI

bool
Test::AMI_Timeout_op::__invoke(const ::Test::TimeoutPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Timeout__op_name, ::Ice::Normal, __ctx);
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
Test::AMI_Timeout_op::__response(bool __ok)
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
Test::AMI_Timeout_sendData::__invoke(const ::Test::TimeoutPrx& __prx, const ::Test::ByteSeq& seq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Timeout__sendData_name, ::Ice::Normal, __ctx);
        if(seq.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&seq[0], &seq[0] + seq.size());
        }
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
Test::AMI_Timeout_sendData::__response(bool __ok)
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
Test::AMI_Timeout_sleep::__invoke(const ::Test::TimeoutPrx& __prx, ::Ice::Int to, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__Timeout__sleep_name, ::Ice::Normal, __ctx);
        __os->write(to);
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
Test::AMI_Timeout_sleep::__response(bool __ok)
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
IceProxy::Test::Timeout::op(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Timeout__op_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Timeout::op_async(const ::Test::AMI_Timeout_opPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::Timeout::op_async(const ::Test::AMI_Timeout_opPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::Timeout::sendData(const ::Test::ByteSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Timeout__sendData_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(seq.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&seq[0], &seq[0] + seq.size());
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
IceProxy::Test::Timeout::sendData_async(const ::Test::AMI_Timeout_sendDataPtr& __cb, const ::Test::ByteSeq& seq)
{
    return __cb->__invoke(this, seq, 0);
}

bool
IceProxy::Test::Timeout::sendData_async(const ::Test::AMI_Timeout_sendDataPtr& __cb, const ::Test::ByteSeq& seq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, seq, &__ctx);
}
#endif

void
IceProxy::Test::Timeout::sleep(::Ice::Int to, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Timeout__sleep_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(to);
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
IceProxy::Test::Timeout::sleep_async(const ::Test::AMI_Timeout_sleepPtr& __cb, ::Ice::Int to)
{
    return __cb->__invoke(this, to, 0);
}

bool
IceProxy::Test::Timeout::sleep_async(const ::Test::AMI_Timeout_sleepPtr& __cb, ::Ice::Int to, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, to, &__ctx);
}
#endif

void
IceProxy::Test::Timeout::holdAdapter(::Ice::Int to, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Timeout__holdAdapter_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(to);
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

void
IceProxy::Test::Timeout::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__Timeout__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Timeout::ice_staticId()
{
    return __Test__Timeout_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::Timeout::__newInstance() const
{
    return new Timeout;
}
