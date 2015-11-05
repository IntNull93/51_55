// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Router.ice'

#include <Router.h>
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

static const ::std::string __Glacier2__Router__getCategoryForClient_name = "getCategoryForClient";

static const ::std::string __Glacier2__Router__createSession_name = "createSession";

static const ::std::string __Glacier2__Router__destroySession_name = "destroySession";

static const ::std::string __Glacier2__Router__getSessionTimeout_name = "getSessionTimeout";

static const ::std::string __Glacier2__Admin__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Glacier2::Router* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::Router* p) { return p; }

::Ice::Object* IceInternal::upCast(::Glacier2::Admin* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Glacier2::Admin* p) { return p; }

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::RouterPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::Router;
        v->__copyFrom(proxy);
    }
}

void
Glacier2::__read(::IceInternal::BasicStream* __is, ::Glacier2::AdminPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Glacier2::Admin;
        v->__copyFrom(proxy);
    }
}

Glacier2::PermissionDeniedException::PermissionDeniedException(const ::std::string& __ice_reason) :
    ::Ice::UserException(),
    reason(__ice_reason)
{
}

Glacier2::PermissionDeniedException::~PermissionDeniedException() throw()
{
}

static const char* __Glacier2__PermissionDeniedException_name = "Glacier2::PermissionDeniedException";

::std::string
Glacier2::PermissionDeniedException::ice_name() const
{
    return __Glacier2__PermissionDeniedException_name;
}

::Ice::Exception*
Glacier2::PermissionDeniedException::ice_clone() const
{
    return new PermissionDeniedException(*this);
}

void
Glacier2::PermissionDeniedException::ice_throw() const
{
    throw *this;
}

void
Glacier2::PermissionDeniedException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Glacier2::PermissionDeniedException"), false);
    __os->startWriteSlice();
    __os->write(reason);
    __os->endWriteSlice();
}

void
Glacier2::PermissionDeniedException::__read(::IceInternal::BasicStream* __is, bool __rid)
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

struct __F__Glacier2__PermissionDeniedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Glacier2::PermissionDeniedException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Glacier2__PermissionDeniedException__Ptr = new __F__Glacier2__PermissionDeniedException;

const ::IceInternal::UserExceptionFactoryPtr&
Glacier2::PermissionDeniedException::ice_factory()
{
    return __F__Glacier2__PermissionDeniedException__Ptr;
}

class __F__Glacier2__PermissionDeniedException__Init
{
public:

    __F__Glacier2__PermissionDeniedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Glacier2::PermissionDeniedException", ::Glacier2::PermissionDeniedException::ice_factory());
    }

    ~__F__Glacier2__PermissionDeniedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Glacier2::PermissionDeniedException");
    }
};

static __F__Glacier2__PermissionDeniedException__Init __F__Glacier2__PermissionDeniedException__i;

#ifdef __APPLE__
extern "C" { void __F__Glacier2__PermissionDeniedException__initializer() {} }
#endif

Glacier2::SessionNotExistException::~SessionNotExistException() throw()
{
}

static const char* __Glacier2__SessionNotExistException_name = "Glacier2::SessionNotExistException";

::std::string
Glacier2::SessionNotExistException::ice_name() const
{
    return __Glacier2__SessionNotExistException_name;
}

::Ice::Exception*
Glacier2::SessionNotExistException::ice_clone() const
{
    return new SessionNotExistException(*this);
}

void
Glacier2::SessionNotExistException::ice_throw() const
{
    throw *this;
}

void
Glacier2::SessionNotExistException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Glacier2::SessionNotExistException"), false);
    __os->startWriteSlice();
    __os->endWriteSlice();
}

void
Glacier2::SessionNotExistException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->endReadSlice();
}

struct __F__Glacier2__SessionNotExistException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Glacier2::SessionNotExistException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Glacier2__SessionNotExistException__Ptr = new __F__Glacier2__SessionNotExistException;

const ::IceInternal::UserExceptionFactoryPtr&
Glacier2::SessionNotExistException::ice_factory()
{
    return __F__Glacier2__SessionNotExistException__Ptr;
}

class __F__Glacier2__SessionNotExistException__Init
{
public:

    __F__Glacier2__SessionNotExistException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Glacier2::SessionNotExistException", ::Glacier2::SessionNotExistException::ice_factory());
    }

    ~__F__Glacier2__SessionNotExistException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Glacier2::SessionNotExistException");
    }
};

static __F__Glacier2__SessionNotExistException__Init __F__Glacier2__SessionNotExistException__i;

#ifdef __APPLE__
extern "C" { void __F__Glacier2__SessionNotExistException__initializer() {} }
#endif

static const ::std::string __Glacier2__Router_ids[3] =
{
    "::Glacier2::Router",
    "::Ice::Object",
    "::Ice::Router"
};

bool
Glacier2::Router::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__Router_ids, __Glacier2__Router_ids + 3, _s);
}

::std::vector< ::std::string>
Glacier2::Router::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__Router_ids[0], &__Glacier2__Router_ids[3]);
}

const ::std::string&
Glacier2::Router::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__Router_ids[0];
}

const ::std::string&
Glacier2::Router::ice_staticId()
{
    return __Glacier2__Router_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::Router::___getCategoryForClient(::IceInternal::Incoming& __inS, const ::Ice::Current& __current) const
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = getCategoryForClient(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::Router::___createSession(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string password;
    __is->read(userId);
    __is->read(password);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::Glacier2::SessionPrx __ret = createSession(userId, password, __current);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    }
    catch(const ::Glacier2::CannotCreateSessionException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    catch(const ::Glacier2::PermissionDeniedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::Router::___destroySession(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        destroySession(__current);
    }
    catch(const ::Glacier2::SessionNotExistException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::Router::___getSessionTimeout(::IceInternal::Incoming& __inS, const ::Ice::Current& __current) const
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long __ret = getSessionTimeout(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__Router_all[] =
{
    "addProxies",
    "addProxy",
    "createSession",
    "destroySession",
    "getCategoryForClient",
    "getClientProxy",
    "getServerProxy",
    "getSessionTimeout",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Glacier2::Router::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__Router_all, __Glacier2__Router_all + 12, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__Router_all)
    {
        case 0:
        {
            return ___addProxies(in, current);
        }
        case 1:
        {
            return ___addProxy(in, current);
        }
        case 2:
        {
            return ___createSession(in, current);
        }
        case 3:
        {
            return ___destroySession(in, current);
        }
        case 4:
        {
            return ___getCategoryForClient(in, current);
        }
        case 5:
        {
            return ___getClientProxy(in, current);
        }
        case 6:
        {
            return ___getServerProxy(in, current);
        }
        case 7:
        {
            return ___getSessionTimeout(in, current);
        }
        case 8:
        {
            return ___ice_id(in, current);
        }
        case 9:
        {
            return ___ice_ids(in, current);
        }
        case 10:
        {
            return ___ice_isA(in, current);
        }
        case 11:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Glacier2::Router::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::Router::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::Router& l, const ::Glacier2::Router& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::Router& l, const ::Glacier2::Router& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__RouterPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::RouterPtr* p = static_cast< ::Glacier2::RouterPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::RouterPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::Router::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Glacier2__Admin_ids[2] =
{
    "::Glacier2::Admin",
    "::Ice::Object"
};

bool
Glacier2::Admin::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Glacier2__Admin_ids, __Glacier2__Admin_ids + 2, _s);
}

::std::vector< ::std::string>
Glacier2::Admin::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Glacier2__Admin_ids[0], &__Glacier2__Admin_ids[2]);
}

const ::std::string&
Glacier2::Admin::ice_id(const ::Ice::Current&) const
{
    return __Glacier2__Admin_ids[0];
}

const ::std::string&
Glacier2::Admin::ice_staticId()
{
    return __Glacier2__Admin_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Glacier2::Admin::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Glacier2__Admin_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

::Ice::DispatchStatus
Glacier2::Admin::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Glacier2__Admin_all, __Glacier2__Admin_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Glacier2__Admin_all)
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
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Glacier2::Admin::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Glacier2::Admin::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Glacier2::operator==(const ::Glacier2::Admin& l, const ::Glacier2::Admin& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Glacier2::operator<(const ::Glacier2::Admin& l, const ::Glacier2::Admin& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Glacier2::__patch__AdminPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Glacier2::AdminPtr* p = static_cast< ::Glacier2::AdminPtr*>(__addr);
    assert(p);
    *p = ::Glacier2::AdminPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Glacier2::Admin::ice_staticId(), v->ice_id());
    }
}

::std::string
IceProxy::Glacier2::Router::getCategoryForClient(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__Router__getCategoryForClient_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__Router__getCategoryForClient_name, ::Ice::Idempotent, __ctx);
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

::Glacier2::SessionPrx
IceProxy::Glacier2::Router::createSession(const ::std::string& userId, const ::std::string& password, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__Router__createSession_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__Router__createSession_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(userId);
                __os->write(password);
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
                    catch(const ::Glacier2::PermissionDeniedException&)
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

void
IceProxy::Glacier2::Router::destroySession(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__Router__destroySession_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__Router__destroySession_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Glacier2::SessionNotExistException&)
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

::Ice::Long
IceProxy::Glacier2::Router::getSessionTimeout(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Glacier2__Router__getSessionTimeout_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__Router__getSessionTimeout_name, ::Ice::Idempotent, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Ice::Long __ret;
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
IceProxy::Glacier2::Router::ice_staticId()
{
    return __Glacier2__Router_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::Router::__newInstance() const
{
    return new Router;
}

void
IceProxy::Glacier2::Admin::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Glacier2__Admin__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Glacier2::Admin::ice_staticId()
{
    return __Glacier2__Admin_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Glacier2::Admin::__newInstance() const
{
    return new Admin;
}
