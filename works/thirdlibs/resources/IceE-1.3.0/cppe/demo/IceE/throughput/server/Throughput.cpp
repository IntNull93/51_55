// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Throughput.ice'

#include <Throughput.h>
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

static const ::std::string __Demo__Throughput__needsWarmup_name = "needsWarmup";

static const ::std::string __Demo__Throughput__startWarmup_name = "startWarmup";

static const ::std::string __Demo__Throughput__endWarmup_name = "endWarmup";

static const ::std::string __Demo__Throughput__sendByteSeq_name = "sendByteSeq";

static const ::std::string __Demo__Throughput__recvByteSeq_name = "recvByteSeq";

static const ::std::string __Demo__Throughput__echoByteSeq_name = "echoByteSeq";

static const ::std::string __Demo__Throughput__sendStringSeq_name = "sendStringSeq";

static const ::std::string __Demo__Throughput__recvStringSeq_name = "recvStringSeq";

static const ::std::string __Demo__Throughput__echoStringSeq_name = "echoStringSeq";

static const ::std::string __Demo__Throughput__sendStructSeq_name = "sendStructSeq";

static const ::std::string __Demo__Throughput__recvStructSeq_name = "recvStructSeq";

static const ::std::string __Demo__Throughput__echoStructSeq_name = "echoStructSeq";

static const ::std::string __Demo__Throughput__sendFixedSeq_name = "sendFixedSeq";

static const ::std::string __Demo__Throughput__recvFixedSeq_name = "recvFixedSeq";

static const ::std::string __Demo__Throughput__echoFixedSeq_name = "echoFixedSeq";

static const ::std::string __Demo__Throughput__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Demo::Throughput* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::Throughput* p) { return p; }

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::ThroughputPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Throughput;
        v->__copyFrom(proxy);
    }
}

bool
Demo::StringDouble::operator==(const StringDouble& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(s != __rhs.s)
    {
        return false;
    }
    if(d != __rhs.d)
    {
        return false;
    }
    return true;
}

bool
Demo::StringDouble::operator<(const StringDouble& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(s < __rhs.s)
    {
        return true;
    }
    else if(__rhs.s < s)
    {
        return false;
    }
    if(d < __rhs.d)
    {
        return true;
    }
    else if(__rhs.d < d)
    {
        return false;
    }
    return false;
}

void
Demo::StringDouble::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(s);
    __os->write(d);
}

void
Demo::StringDouble::__read(::IceInternal::BasicStream* __is)
{
    __is->read(s);
    __is->read(d);
}

void
Demo::__writeStringDoubleSeq(::IceInternal::BasicStream* __os, const ::Demo::StringDouble* begin, const ::Demo::StringDouble* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
Demo::__readStringDoubleSeq(::IceInternal::BasicStream* __is, ::Demo::StringDoubleSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 9);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
Demo::Fixed::operator==(const Fixed& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(i != __rhs.i)
    {
        return false;
    }
    if(j != __rhs.j)
    {
        return false;
    }
    if(d != __rhs.d)
    {
        return false;
    }
    return true;
}

bool
Demo::Fixed::operator<(const Fixed& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(i < __rhs.i)
    {
        return true;
    }
    else if(__rhs.i < i)
    {
        return false;
    }
    if(j < __rhs.j)
    {
        return true;
    }
    else if(__rhs.j < j)
    {
        return false;
    }
    if(d < __rhs.d)
    {
        return true;
    }
    else if(__rhs.d < d)
    {
        return false;
    }
    return false;
}

void
Demo::Fixed::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(i);
    __os->write(j);
    __os->write(d);
}

void
Demo::Fixed::__read(::IceInternal::BasicStream* __is)
{
    __is->read(i);
    __is->read(j);
    __is->read(d);
}

void
Demo::__writeFixedSeq(::IceInternal::BasicStream* __os, const ::Demo::Fixed* begin, const ::Demo::Fixed* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
Demo::__readFixedSeq(::IceInternal::BasicStream* __is, ::Demo::FixedSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->checkFixedSeq(sz, 16);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
    }
}

static const ::std::string __Demo__Throughput_ids[2] =
{
    "::Demo::Throughput",
    "::Ice::Object"
};

bool
Demo::Throughput::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Throughput_ids, __Demo__Throughput_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Throughput::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Throughput_ids[0], &__Demo__Throughput_ids[2]);
}

const ::std::string&
Demo::Throughput::ice_id(const ::Ice::Current&) const
{
    return __Demo__Throughput_ids[0];
}

const ::std::string&
Demo::Throughput::ice_staticId()
{
    return __Demo__Throughput_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___needsWarmup(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = needsWarmup(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___startWarmup(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    startWarmup(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___endWarmup(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    endWarmup(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___sendByteSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> seq;
    __is->read(seq);
    sendByteSeq(seq, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___recvByteSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::ByteSeq __ret = recvByteSeq(__current);
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
::Ice::DispatchStatus
Demo::Throughput::___echoByteSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::ByteSeq seq;
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___seq;
    __is->read(___seq);
    ::std::vector< ::Ice::Byte>(___seq.first, ___seq.second).swap(seq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::ByteSeq __ret = echoByteSeq(seq, __current);
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
::Ice::DispatchStatus
Demo::Throughput::___sendStringSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::StringSeq seq;
    __is->read(seq);
    sendStringSeq(seq, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___recvStringSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::StringSeq __ret = recvStringSeq(__current);
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
::Ice::DispatchStatus
Demo::Throughput::___echoStringSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::StringSeq seq;
    __is->read(seq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::StringSeq __ret = echoStringSeq(seq, __current);
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
::Ice::DispatchStatus
Demo::Throughput::___sendStructSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::StringDoubleSeq seq;
    ::Demo::__readStringDoubleSeq(__is, seq);
    sendStructSeq(seq, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___recvStructSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::StringDoubleSeq __ret = recvStructSeq(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Demo::__writeStringDoubleSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___echoStructSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::StringDoubleSeq seq;
    ::Demo::__readStringDoubleSeq(__is, seq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::StringDoubleSeq __ret = echoStructSeq(seq, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Demo::__writeStringDoubleSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___sendFixedSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::FixedSeq seq;
    ::Demo::__readFixedSeq(__is, seq);
    sendFixedSeq(seq, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___recvFixedSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::FixedSeq __ret = recvFixedSeq(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Demo::__writeFixedSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___echoFixedSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Demo::FixedSeq seq;
    ::Demo::__readFixedSeq(__is, seq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::FixedSeq __ret = echoFixedSeq(seq, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Demo::__writeFixedSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Throughput::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Demo__Throughput_all[] =
{
    "echoByteSeq",
    "echoFixedSeq",
    "echoStringSeq",
    "echoStructSeq",
    "endWarmup",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "needsWarmup",
    "recvByteSeq",
    "recvFixedSeq",
    "recvStringSeq",
    "recvStructSeq",
    "sendByteSeq",
    "sendFixedSeq",
    "sendStringSeq",
    "sendStructSeq",
    "shutdown",
    "startWarmup"
};

::Ice::DispatchStatus
Demo::Throughput::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Demo__Throughput_all, __Demo__Throughput_all + 20, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Throughput_all)
    {
        case 0:
        {
            return ___echoByteSeq(in, current);
        }
        case 1:
        {
            return ___echoFixedSeq(in, current);
        }
        case 2:
        {
            return ___echoStringSeq(in, current);
        }
        case 3:
        {
            return ___echoStructSeq(in, current);
        }
        case 4:
        {
            return ___endWarmup(in, current);
        }
        case 5:
        {
            return ___ice_id(in, current);
        }
        case 6:
        {
            return ___ice_ids(in, current);
        }
        case 7:
        {
            return ___ice_isA(in, current);
        }
        case 8:
        {
            return ___ice_ping(in, current);
        }
        case 9:
        {
            return ___needsWarmup(in, current);
        }
        case 10:
        {
            return ___recvByteSeq(in, current);
        }
        case 11:
        {
            return ___recvFixedSeq(in, current);
        }
        case 12:
        {
            return ___recvStringSeq(in, current);
        }
        case 13:
        {
            return ___recvStructSeq(in, current);
        }
        case 14:
        {
            return ___sendByteSeq(in, current);
        }
        case 15:
        {
            return ___sendFixedSeq(in, current);
        }
        case 16:
        {
            return ___sendStringSeq(in, current);
        }
        case 17:
        {
            return ___sendStructSeq(in, current);
        }
        case 18:
        {
            return ___shutdown(in, current);
        }
        case 19:
        {
            return ___startWarmup(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Demo::Throughput::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Demo::Throughput::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Demo::operator==(const ::Demo::Throughput& l, const ::Demo::Throughput& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::Throughput& l, const ::Demo::Throughput& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Demo::__patch__ThroughputPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::ThroughputPtr* p = static_cast< ::Demo::ThroughputPtr*>(__addr);
    assert(p);
    *p = ::Demo::ThroughputPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::Throughput::ice_staticId(), v->ice_id());
    }
}

bool
IceProxy::Demo::Throughput::needsWarmup(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__needsWarmup_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__needsWarmup_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                bool __ret;
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

void
IceProxy::Demo::Throughput::startWarmup(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__startWarmup_name, ::Ice::Normal, __ctx);
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
IceProxy::Demo::Throughput::endWarmup(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__endWarmup_name, ::Ice::Normal, __ctx);
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
IceProxy::Demo::Throughput::sendByteSeq(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__sendByteSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(seq.first, seq.second);
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

::Demo::ByteSeq
IceProxy::Demo::Throughput::recvByteSeq(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__recvByteSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__recvByteSeq_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Demo::ByteSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> _____ret;
                __is->read(_____ret);
                ::std::vector< ::Ice::Byte>(_____ret.first, _____ret.second).swap(__ret);
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

::Demo::ByteSeq
IceProxy::Demo::Throughput::echoByteSeq(const ::Demo::ByteSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__echoByteSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__echoByteSeq_name, ::Ice::Normal, __ctx);
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
                ::Demo::ByteSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> _____ret;
                __is->read(_____ret);
                ::std::vector< ::Ice::Byte>(_____ret.first, _____ret.second).swap(__ret);
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
IceProxy::Demo::Throughput::sendStringSeq(const ::Demo::StringSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__sendStringSeq_name, ::Ice::Normal, __ctx);
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

::Demo::StringSeq
IceProxy::Demo::Throughput::recvStringSeq(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__recvStringSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__recvStringSeq_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Demo::StringSeq __ret;
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

::Demo::StringSeq
IceProxy::Demo::Throughput::echoStringSeq(const ::Demo::StringSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__echoStringSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__echoStringSeq_name, ::Ice::Normal, __ctx);
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
                ::Demo::StringSeq __ret;
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

void
IceProxy::Demo::Throughput::sendStructSeq(const ::Demo::StringDoubleSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__sendStructSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(seq.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Demo::__writeStringDoubleSeq(__os, &seq[0], &seq[0] + seq.size());
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

::Demo::StringDoubleSeq
IceProxy::Demo::Throughput::recvStructSeq(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__recvStructSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__recvStructSeq_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Demo::StringDoubleSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Demo::__readStringDoubleSeq(__is, __ret);
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

::Demo::StringDoubleSeq
IceProxy::Demo::Throughput::echoStructSeq(const ::Demo::StringDoubleSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__echoStructSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__echoStructSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(seq.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Demo::__writeStringDoubleSeq(__os, &seq[0], &seq[0] + seq.size());
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
                ::Demo::StringDoubleSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Demo::__readStringDoubleSeq(__is, __ret);
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
IceProxy::Demo::Throughput::sendFixedSeq(const ::Demo::FixedSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__sendFixedSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(seq.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Demo::__writeFixedSeq(__os, &seq[0], &seq[0] + seq.size());
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

::Demo::FixedSeq
IceProxy::Demo::Throughput::recvFixedSeq(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__recvFixedSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__recvFixedSeq_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Demo::FixedSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Demo::__readFixedSeq(__is, __ret);
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

::Demo::FixedSeq
IceProxy::Demo::Throughput::echoFixedSeq(const ::Demo::FixedSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Throughput__echoFixedSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__echoFixedSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(seq.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Demo::__writeFixedSeq(__os, &seq[0], &seq[0] + seq.size());
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
                ::Demo::FixedSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Demo::__readFixedSeq(__is, __ret);
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
IceProxy::Demo::Throughput::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Throughput__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Demo::Throughput::ice_staticId()
{
    return __Demo__Throughput_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Demo::Throughput::__newInstance() const
{
    return new Throughput;
}
