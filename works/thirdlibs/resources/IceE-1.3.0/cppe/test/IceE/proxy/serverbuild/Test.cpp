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

static const ::std::string __Test__MyClass__shutdown_name = "shutdown";

static const ::std::string __Test__MyClass__getContext_name = "getContext";

static const ::std::string __Test__MyDerivedClass__echo_name = "echo";

::Ice::Object* IceInternal::upCast(::Test::MyClass* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MyClass* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::MyDerivedClass* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::MyDerivedClass* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::MyClassPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MyClass;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::MyDerivedClassPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MyDerivedClass;
        v->__copyFrom(proxy);
    }
}

void
Test::__writeContext(::IceInternal::BasicStream* __os, const ::Test::Context& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::Context::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test::__readContext(::IceInternal::BasicStream* __is, ::Test::Context& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::Test::Context::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

static const ::std::string __Test__MyClass_ids[2] =
{
    "::Ice::Object",
    "::Test::MyClass"
};

bool
Test::MyClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MyClass_ids, __Test__MyClass_ids + 2, _s);
}

::std::vector< ::std::string>
Test::MyClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MyClass_ids[0], &__Test__MyClass_ids[2]);
}

const ::std::string&
Test::MyClass::ice_id(const ::Ice::Current&) const
{
    return __Test__MyClass_ids[1];
}

const ::std::string&
Test::MyClass::ice_staticId()
{
    return __Test__MyClass_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___getContext(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::Context __ret = getContext(__current);
    ::Test::__writeContext(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MyClass_all[] =
{
    "getContext",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

::Ice::DispatchStatus
Test::MyClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MyClass_all, __Test__MyClass_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyClass_all)
    {
        case 0:
        {
            return ___getContext(in, current);
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
Test::MyClass::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::MyClass::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::MyClass& l, const ::Test::MyClass& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::MyClass& l, const ::Test::MyClass& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__MyClassPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MyClassPtr* p = static_cast< ::Test::MyClassPtr*>(__addr);
    assert(p);
    *p = ::Test::MyClassPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MyClass::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__MyDerivedClass_ids[3] =
{
    "::Ice::Object",
    "::Test::MyClass",
    "::Test::MyDerivedClass"
};

bool
Test::MyDerivedClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MyDerivedClass_ids, __Test__MyDerivedClass_ids + 3, _s);
}

::std::vector< ::std::string>
Test::MyDerivedClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MyDerivedClass_ids[0], &__Test__MyDerivedClass_ids[3]);
}

const ::std::string&
Test::MyDerivedClass::ice_id(const ::Ice::Current&) const
{
    return __Test__MyDerivedClass_ids[2];
}

const ::std::string&
Test::MyDerivedClass::ice_staticId()
{
    return __Test__MyDerivedClass_ids[2];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyDerivedClass::___echo(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::ObjectPrx obj;
    __is->read(obj);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::ObjectPrx __ret = echo(obj, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MyDerivedClass_all[] =
{
    "echo",
    "getContext",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

::Ice::DispatchStatus
Test::MyDerivedClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MyDerivedClass_all, __Test__MyDerivedClass_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyDerivedClass_all)
    {
        case 0:
        {
            return ___echo(in, current);
        }
        case 1:
        {
            return ___getContext(in, current);
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
Test::MyDerivedClass::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Test::MyClass::__write(__os);
}

void
Test::MyDerivedClass::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Test::MyClass::__read(__is, true);
}


bool
Test::operator==(const ::Test::MyDerivedClass& l, const ::Test::MyDerivedClass& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::MyDerivedClass& l, const ::Test::MyDerivedClass& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__MyDerivedClassPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::MyDerivedClassPtr* p = static_cast< ::Test::MyDerivedClassPtr*>(__addr);
    assert(p);
    *p = ::Test::MyDerivedClassPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::MyDerivedClass::ice_staticId(), v->ice_id());
    }
}

void
IceProxy::Test::MyClass::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__shutdown_name, ::Ice::Normal, __ctx);
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

::Test::Context
IceProxy::Test::MyClass::getContext(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__getContext_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__getContext_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::Context __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readContext(__is, __ret);
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
IceProxy::Test::MyClass::ice_staticId()
{
    return __Test__MyClass_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::MyClass::__newInstance() const
{
    return new MyClass;
}

::Ice::ObjectPrx
IceProxy::Test::MyDerivedClass::echo(const ::Ice::ObjectPrx& obj, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyDerivedClass__echo_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyDerivedClass__echo_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(obj);
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
                ::Ice::ObjectPrx __ret;
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
IceProxy::Test::MyDerivedClass::ice_staticId()
{
    return __Test__MyDerivedClass_ids[2];
}

::IceProxy::Ice::Object*
IceProxy::Test::MyDerivedClass::__newInstance() const
{
    return new MyDerivedClass;
}
