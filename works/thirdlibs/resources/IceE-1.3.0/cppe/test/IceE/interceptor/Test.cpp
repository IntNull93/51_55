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

static const ::std::string __Test__MyObject__add_name = "add";

static const ::std::string __Test__MyObject__addWithRetry_name = "addWithRetry";

static const ::std::string __Test__MyObject__badAdd_name = "badAdd";

static const ::std::string __Test__MyObject__notExistAdd_name = "notExistAdd";

static const ::std::string __Test__MyObject__badSystemAdd_name = "badSystemAdd";

::Ice::Object* IceInternal::upCast(::Test::MyObject* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MyObject* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::MyObjectPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MyObject;
        v->__copyFrom(proxy);
    }
}

Test::InvalidInputException::InvalidInputException(const ::std::string& __ice_message) :
    ::Ice::UserException(),
    message(__ice_message)
{
}

Test::InvalidInputException::~InvalidInputException() throw()
{
}

static const char* __Test__InvalidInputException_name = "Test::InvalidInputException";

::std::string
Test::InvalidInputException::ice_name() const
{
    return __Test__InvalidInputException_name;
}

::Ice::Exception*
Test::InvalidInputException::ice_clone() const
{
    return new InvalidInputException(*this);
}

void
Test::InvalidInputException::ice_throw() const
{
    throw *this;
}

void
Test::InvalidInputException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test::InvalidInputException"), false);
    __os->startWriteSlice();
    __os->write(message);
    __os->endWriteSlice();
}

void
Test::InvalidInputException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(message);
    __is->endReadSlice();
}

struct __F__Test__InvalidInputException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test::InvalidInputException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test__InvalidInputException__Ptr = new __F__Test__InvalidInputException;

const ::IceInternal::UserExceptionFactoryPtr&
Test::InvalidInputException::ice_factory()
{
    return __F__Test__InvalidInputException__Ptr;
}

class __F__Test__InvalidInputException__Init
{
public:

    __F__Test__InvalidInputException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::InvalidInputException", ::Test::InvalidInputException::ice_factory());
    }

    ~__F__Test__InvalidInputException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::InvalidInputException");
    }
};

static __F__Test__InvalidInputException__Init __F__Test__InvalidInputException__i;

#ifdef __APPLE__
extern "C" { void __F__Test__InvalidInputException__initializer() {} }
#endif

Test::RetryException::RetryException(const char* __file, int __line) :
    ::Ice::LocalException(__file, __line)
{
}

Test::RetryException::~RetryException() throw()
{
}

static const char* __Test__RetryException_name = "Test::RetryException";

::std::string
Test::RetryException::ice_name() const
{
    return __Test__RetryException_name;
}

::Ice::Exception*
Test::RetryException::ice_clone() const
{
    return new RetryException(*this);
}

void
Test::RetryException::ice_throw() const
{
    throw *this;
}

static const ::std::string __Test__MyObject_ids[2] =
{
    "::Ice::Object",
    "::Test::MyObject"
};

bool
Test::MyObject::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MyObject_ids, __Test__MyObject_ids + 2, _s);
}

::std::vector< ::std::string>
Test::MyObject::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MyObject_ids[0], &__Test__MyObject_ids[2]);
}

const ::std::string&
Test::MyObject::ice_id(const ::Ice::Current&) const
{
    return __Test__MyObject_ids[1];
}

const ::std::string&
Test::MyObject::ice_staticId()
{
    return __Test__MyObject_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyObject::___add(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int y;
    __is->read(x);
    __is->read(y);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = add(x, y, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyObject::___addWithRetry(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int y;
    __is->read(x);
    __is->read(y);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = addWithRetry(x, y, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyObject::___badAdd(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int y;
    __is->read(x);
    __is->read(y);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::Ice::Int __ret = badAdd(x, y, __current);
        __os->write(__ret);
    }
    catch(const ::Test::InvalidInputException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyObject::___notExistAdd(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int y;
    __is->read(x);
    __is->read(y);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = notExistAdd(x, y, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyObject::___badSystemAdd(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int y;
    __is->read(x);
    __is->read(y);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = badSystemAdd(x, y, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MyObject_all[] =
{
    "add",
    "addWithRetry",
    "badAdd",
    "badSystemAdd",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "notExistAdd"
};

::Ice::DispatchStatus
Test::MyObject::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MyObject_all, __Test__MyObject_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyObject_all)
    {
        case 0:
        {
            return ___add(in, current);
        }
        case 1:
        {
            return ___addWithRetry(in, current);
        }
        case 2:
        {
            return ___badAdd(in, current);
        }
        case 3:
        {
            return ___badSystemAdd(in, current);
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
        case 8:
        {
            return ___notExistAdd(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::MyObject::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MyObject::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::MyObject& l, const ::Test::MyObject& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::MyObject& l, const ::Test::MyObject& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__MyObjectPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MyObjectPtr* p = static_cast< ::Test::MyObjectPtr*>(__addr);
    assert(p);
    *p = ::Test::MyObjectPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MyObject::ice_staticId(), v->ice_id());
    }
}

::Ice::Int
IceProxy::Test::MyObject::add(::Ice::Int x, ::Ice::Int y, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyObject__add_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyObject__add_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(y);
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

::Ice::Int
IceProxy::Test::MyObject::addWithRetry(::Ice::Int x, ::Ice::Int y, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyObject__addWithRetry_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyObject__addWithRetry_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(y);
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

::Ice::Int
IceProxy::Test::MyObject::badAdd(::Ice::Int x, ::Ice::Int y, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyObject__badAdd_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyObject__badAdd_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(y);
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
                    catch(const ::Test::InvalidInputException&)
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

::Ice::Int
IceProxy::Test::MyObject::notExistAdd(::Ice::Int x, ::Ice::Int y, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyObject__notExistAdd_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyObject__notExistAdd_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(y);
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

::Ice::Int
IceProxy::Test::MyObject::badSystemAdd(::Ice::Int x, ::Ice::Int y, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyObject__badSystemAdd_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyObject__badSystemAdd_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(y);
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
IceProxy::Test::MyObject::ice_staticId()
{
    return __Test__MyObject_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::MyObject::__newInstance() const
{
    return new MyObject;
}
