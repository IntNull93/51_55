// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Wstring.ice'

#include <Wstring.h>
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

static const ::std::string __Test1__WstringClass__opString_name = "opString";

static const ::std::string __Test1__WstringClass__opStruct_name = "opStruct";

static const ::std::string __Test1__WstringClass__throwExcept_name = "throwExcept";

static const ::std::string __Test2__WstringClass__opString_name = "opString";

static const ::std::string __Test2__WstringClass__opStruct_name = "opStruct";

static const ::std::string __Test2__WstringClass__throwExcept_name = "throwExcept";

::Ice::Object* IceInternal::upCast(::Test1::WstringClass* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test1::WstringClass* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test2::WstringClass* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test2::WstringClass* p) { return p; }

void
Test1::__read(::IceInternal::BasicStream* __is, ::Test1::WstringClassPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test1::WstringClass;
        v->__copyFrom(proxy);
    }
}

void
Test2::__read(::IceInternal::BasicStream* __is, ::Test2::WstringClassPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test2::WstringClass;
        v->__copyFrom(proxy);
    }
}

void
Test1::__writeWstringWStringDict(::IceInternal::BasicStream* __os, const ::Test1::WstringWStringDict& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test1::WstringWStringDict::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test1::__readWstringWStringDict(::IceInternal::BasicStream* __is, ::Test1::WstringWStringDict& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Wstring, ::Ice::Wstring> pair;
        __is->read(const_cast< ::Ice::Wstring&>(pair.first));
        ::Test1::WstringWStringDict::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
Test1::WstringStruct::operator==(const WstringStruct& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(s != __rhs.s)
    {
        return false;
    }
    return true;
}

bool
Test1::WstringStruct::operator<(const WstringStruct& __rhs) const
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
    return false;
}

void
Test1::WstringStruct::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(s);
}

void
Test1::WstringStruct::__read(::IceInternal::BasicStream* __is)
{
    __is->read(s);
}

Test1::WstringException::WstringException(const ::Ice::Wstring& __ice_reason) :
    ::Ice::UserException(),
    reason(__ice_reason)
{
}

Test1::WstringException::~WstringException() throw()
{
}

static const char* __Test1__WstringException_name = "Test1::WstringException";

::std::string
Test1::WstringException::ice_name() const
{
    return __Test1__WstringException_name;
}

::Ice::Exception*
Test1::WstringException::ice_clone() const
{
    return new WstringException(*this);
}

void
Test1::WstringException::ice_throw() const
{
    throw *this;
}

void
Test1::WstringException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test1::WstringException"), false);
    __os->startWriteSlice();
    __os->write(reason);
    __os->endWriteSlice();
}

void
Test1::WstringException::__read(::IceInternal::BasicStream* __is, bool __rid)
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

struct __F__Test1__WstringException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test1::WstringException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test1__WstringException__Ptr = new __F__Test1__WstringException;

const ::IceInternal::UserExceptionFactoryPtr&
Test1::WstringException::ice_factory()
{
    return __F__Test1__WstringException__Ptr;
}

class __F__Test1__WstringException__Init
{
public:

    __F__Test1__WstringException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test1::WstringException", ::Test1::WstringException::ice_factory());
    }

    ~__F__Test1__WstringException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test1::WstringException");
    }
};

static __F__Test1__WstringException__Init __F__Test1__WstringException__i;

#ifdef __APPLE__
extern "C" { void __F__Test1__WstringException__initializer() {} }
#endif

void
Test2::__writeWstringWStringDict(::IceInternal::BasicStream* __os, const ::Test2::WstringWStringDict& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test2::WstringWStringDict::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test2::__readWstringWStringDict(::IceInternal::BasicStream* __is, ::Test2::WstringWStringDict& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Wstring, ::Ice::Wstring> pair;
        __is->read(const_cast< ::Ice::Wstring&>(pair.first));
        ::Test2::WstringWStringDict::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
Test2::WstringStruct::operator==(const WstringStruct& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(s != __rhs.s)
    {
        return false;
    }
    return true;
}

bool
Test2::WstringStruct::operator<(const WstringStruct& __rhs) const
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
    return false;
}

void
Test2::WstringStruct::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(s);
}

void
Test2::WstringStruct::__read(::IceInternal::BasicStream* __is)
{
    __is->read(s);
}

Test2::WstringException::WstringException(const ::Ice::Wstring& __ice_reason) :
    ::Ice::UserException(),
    reason(__ice_reason)
{
}

Test2::WstringException::~WstringException() throw()
{
}

static const char* __Test2__WstringException_name = "Test2::WstringException";

::std::string
Test2::WstringException::ice_name() const
{
    return __Test2__WstringException_name;
}

::Ice::Exception*
Test2::WstringException::ice_clone() const
{
    return new WstringException(*this);
}

void
Test2::WstringException::ice_throw() const
{
    throw *this;
}

void
Test2::WstringException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Test2::WstringException"), false);
    __os->startWriteSlice();
    __os->write(reason);
    __os->endWriteSlice();
}

void
Test2::WstringException::__read(::IceInternal::BasicStream* __is, bool __rid)
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

struct __F__Test2__WstringException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Test2::WstringException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Test2__WstringException__Ptr = new __F__Test2__WstringException;

const ::IceInternal::UserExceptionFactoryPtr&
Test2::WstringException::ice_factory()
{
    return __F__Test2__WstringException__Ptr;
}

class __F__Test2__WstringException__Init
{
public:

    __F__Test2__WstringException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test2::WstringException", ::Test2::WstringException::ice_factory());
    }

    ~__F__Test2__WstringException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test2::WstringException");
    }
};

static __F__Test2__WstringException__Init __F__Test2__WstringException__i;

#ifdef __APPLE__
extern "C" { void __F__Test2__WstringException__initializer() {} }
#endif

Test1::WstringClass::WstringClass(const ::Ice::Wstring& __ice_s) :
    s(__ice_s)
{
}

static const ::std::string __Test1__WstringClass_ids[2] =
{
    "::Ice::Object",
    "::Test1::WstringClass"
};

bool
Test1::WstringClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test1__WstringClass_ids, __Test1__WstringClass_ids + 2, _s);
}

::std::vector< ::std::string>
Test1::WstringClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test1__WstringClass_ids[0], &__Test1__WstringClass_ids[2]);
}

const ::std::string&
Test1::WstringClass::ice_id(const ::Ice::Current&) const
{
    return __Test1__WstringClass_ids[1];
}

const ::std::string&
Test1::WstringClass::ice_staticId()
{
    return __Test1__WstringClass_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test1::WstringClass::___opString(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Wstring s1;
    __is->read(s1);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Wstring s2;
    ::Ice::Wstring __ret = opString(s1, s2, __current);
    __os->write(s2);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test1::WstringClass::___opStruct(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test1::WstringStruct s1;
    s1.__read(__is);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test1::WstringStruct s2;
    ::Test1::WstringStruct __ret = opStruct(s1, s2, __current);
    s2.__write(__os);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test1::WstringClass::___throwExcept(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Wstring reason;
    __is->read(reason);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwExcept(reason, __current);
    }
    catch(const ::Test1::WstringException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test1__WstringClass_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "opString",
    "opStruct",
    "throwExcept"
};

::Ice::DispatchStatus
Test1::WstringClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test1__WstringClass_all, __Test1__WstringClass_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test1__WstringClass_all)
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
            return ___opString(in, current);
        }
        case 5:
        {
            return ___opStruct(in, current);
        }
        case 6:
        {
            return ___throwExcept(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test1::WstringClass::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(s);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test1::WstringClass::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(s);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test1::operator==(const ::Test1::WstringClass& l, const ::Test1::WstringClass& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test1::operator<(const ::Test1::WstringClass& l, const ::Test1::WstringClass& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test1::__patch__WstringClassPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test1::WstringClassPtr* p = static_cast< ::Test1::WstringClassPtr*>(__addr);
    assert(p);
    *p = ::Test1::WstringClassPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test1::WstringClass::ice_staticId(), v->ice_id());
    }
}

Test2::WstringClass::WstringClass(const ::Ice::Wstring& __ice_s) :
    s(__ice_s)
{
}

static const ::std::string __Test2__WstringClass_ids[2] =
{
    "::Ice::Object",
    "::Test2::WstringClass"
};

bool
Test2::WstringClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test2__WstringClass_ids, __Test2__WstringClass_ids + 2, _s);
}

::std::vector< ::std::string>
Test2::WstringClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test2__WstringClass_ids[0], &__Test2__WstringClass_ids[2]);
}

const ::std::string&
Test2::WstringClass::ice_id(const ::Ice::Current&) const
{
    return __Test2__WstringClass_ids[1];
}

const ::std::string&
Test2::WstringClass::ice_staticId()
{
    return __Test2__WstringClass_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test2::WstringClass::___opString(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Wstring s1;
    __is->read(s1);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Wstring s2;
    ::Ice::Wstring __ret = opString(s1, s2, __current);
    __os->write(s2);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test2::WstringClass::___opStruct(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test2::WstringStruct s1;
    s1.__read(__is);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test2::WstringStruct s2;
    ::Test2::WstringStruct __ret = opStruct(s1, s2, __current);
    s2.__write(__os);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test2::WstringClass::___throwExcept(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Wstring reason;
    __is->read(reason);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwExcept(reason, __current);
    }
    catch(const ::Test2::WstringException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test2__WstringClass_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "opString",
    "opStruct",
    "throwExcept"
};

::Ice::DispatchStatus
Test2::WstringClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test2__WstringClass_all, __Test2__WstringClass_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test2__WstringClass_all)
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
            return ___opString(in, current);
        }
        case 5:
        {
            return ___opStruct(in, current);
        }
        case 6:
        {
            return ___throwExcept(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test2::WstringClass::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(s);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test2::WstringClass::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(s);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Test2::operator==(const ::Test2::WstringClass& l, const ::Test2::WstringClass& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test2::operator<(const ::Test2::WstringClass& l, const ::Test2::WstringClass& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test2::__patch__WstringClassPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test2::WstringClassPtr* p = static_cast< ::Test2::WstringClassPtr*>(__addr);
    assert(p);
    *p = ::Test2::WstringClassPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test2::WstringClass::ice_staticId(), v->ice_id());
    }
}
#ifdef ICEE_HAS_AMI

bool
Test1::AMI_WstringClass_opString::__invoke(const ::Test1::WstringClassPrx& __prx, const ::Ice::Wstring& s1, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test1__WstringClass__opString_name);
        __prepare(__prx, __Test1__WstringClass__opString_name, ::Ice::Normal, __ctx);
        __os->write(s1);
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
Test1::AMI_WstringClass_opString::__response(bool __ok)
{
    ::Ice::Wstring s2;
    ::Ice::Wstring __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(s2);
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
    ice_response(__ret, s2);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test1::AMI_WstringClass_opStruct::__invoke(const ::Test1::WstringClassPrx& __prx, const ::Test1::WstringStruct& s1, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test1__WstringClass__opStruct_name);
        __prepare(__prx, __Test1__WstringClass__opStruct_name, ::Ice::Normal, __ctx);
        s1.__write(__os);
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
Test1::AMI_WstringClass_opStruct::__response(bool __ok)
{
    ::Test1::WstringStruct s2;
    ::Test1::WstringStruct __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        s2.__read(__is);
        __ret.__read(__is);
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
    ice_response(__ret, s2);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test1::AMI_WstringClass_throwExcept::__invoke(const ::Test1::WstringClassPrx& __prx, const ::Ice::Wstring& reason, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test1__WstringClass__throwExcept_name);
        __prepare(__prx, __Test1__WstringClass__throwExcept_name, ::Ice::Normal, __ctx);
        __os->write(reason);
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
Test1::AMI_WstringClass_throwExcept::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test1::WstringException& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
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
Test2::AMI_WstringClass_opString::__invoke(const ::Test2::WstringClassPrx& __prx, const ::Ice::Wstring& s1, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test2__WstringClass__opString_name);
        __prepare(__prx, __Test2__WstringClass__opString_name, ::Ice::Normal, __ctx);
        __os->write(s1);
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
Test2::AMI_WstringClass_opString::__response(bool __ok)
{
    ::Ice::Wstring s2;
    ::Ice::Wstring __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(s2);
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
    ice_response(__ret, s2);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test2::AMI_WstringClass_opStruct::__invoke(const ::Test2::WstringClassPrx& __prx, const ::Test2::WstringStruct& s1, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test2__WstringClass__opStruct_name);
        __prepare(__prx, __Test2__WstringClass__opStruct_name, ::Ice::Normal, __ctx);
        s1.__write(__os);
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
Test2::AMI_WstringClass_opStruct::__response(bool __ok)
{
    ::Test2::WstringStruct s2;
    ::Test2::WstringStruct __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        s2.__read(__is);
        __ret.__read(__is);
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
    ice_response(__ret, s2);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test2::AMI_WstringClass_throwExcept::__invoke(const ::Test2::WstringClassPrx& __prx, const ::Ice::Wstring& reason, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test2__WstringClass__throwExcept_name);
        __prepare(__prx, __Test2__WstringClass__throwExcept_name, ::Ice::Normal, __ctx);
        __os->write(reason);
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
Test2::AMI_WstringClass_throwExcept::__response(bool __ok)
{
    try
    {
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Test2::WstringException& __ex)
            {
                __exception(__ex);
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
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

::Ice::Wstring
IceProxy::Test1::WstringClass::opString(const ::Ice::Wstring& s1, ::Ice::Wstring& s2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test1__WstringClass__opString_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test1__WstringClass__opString_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(s1);
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
                ::Ice::Wstring __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(s2);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test1::WstringClass::opString_async(const ::Test1::AMI_WstringClass_opStringPtr& __cb, const ::Ice::Wstring& s1)
{
    return __cb->__invoke(this, s1, 0);
}

bool
IceProxy::Test1::WstringClass::opString_async(const ::Test1::AMI_WstringClass_opStringPtr& __cb, const ::Ice::Wstring& s1, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s1, &__ctx);
}
#endif

::Test1::WstringStruct
IceProxy::Test1::WstringClass::opStruct(const ::Test1::WstringStruct& s1, ::Test1::WstringStruct& s2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test1__WstringClass__opStruct_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test1__WstringClass__opStruct_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                s1.__write(__os);
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
                ::Test1::WstringStruct __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                s2.__read(__is);
                __ret.__read(__is);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test1::WstringClass::opStruct_async(const ::Test1::AMI_WstringClass_opStructPtr& __cb, const ::Test1::WstringStruct& s1)
{
    return __cb->__invoke(this, s1, 0);
}

bool
IceProxy::Test1::WstringClass::opStruct_async(const ::Test1::AMI_WstringClass_opStructPtr& __cb, const ::Test1::WstringStruct& s1, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s1, &__ctx);
}
#endif

void
IceProxy::Test1::WstringClass::throwExcept(const ::Ice::Wstring& reason, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test1__WstringClass__throwExcept_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test1__WstringClass__throwExcept_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(reason);
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
                    catch(const ::Test1::WstringException&)
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test1::WstringClass::throwExcept_async(const ::Test1::AMI_WstringClass_throwExceptPtr& __cb, const ::Ice::Wstring& reason)
{
    return __cb->__invoke(this, reason, 0);
}

bool
IceProxy::Test1::WstringClass::throwExcept_async(const ::Test1::AMI_WstringClass_throwExceptPtr& __cb, const ::Ice::Wstring& reason, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, reason, &__ctx);
}
#endif

const ::std::string&
IceProxy::Test1::WstringClass::ice_staticId()
{
    return __Test1__WstringClass_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test1::WstringClass::__newInstance() const
{
    return new WstringClass;
}

::Ice::Wstring
IceProxy::Test2::WstringClass::opString(const ::Ice::Wstring& s1, ::Ice::Wstring& s2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test2__WstringClass__opString_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test2__WstringClass__opString_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(s1);
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
                ::Ice::Wstring __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(s2);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test2::WstringClass::opString_async(const ::Test2::AMI_WstringClass_opStringPtr& __cb, const ::Ice::Wstring& s1)
{
    return __cb->__invoke(this, s1, 0);
}

bool
IceProxy::Test2::WstringClass::opString_async(const ::Test2::AMI_WstringClass_opStringPtr& __cb, const ::Ice::Wstring& s1, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s1, &__ctx);
}
#endif

::Test2::WstringStruct
IceProxy::Test2::WstringClass::opStruct(const ::Test2::WstringStruct& s1, ::Test2::WstringStruct& s2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test2__WstringClass__opStruct_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test2__WstringClass__opStruct_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                s1.__write(__os);
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
                ::Test2::WstringStruct __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                s2.__read(__is);
                __ret.__read(__is);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test2::WstringClass::opStruct_async(const ::Test2::AMI_WstringClass_opStructPtr& __cb, const ::Test2::WstringStruct& s1)
{
    return __cb->__invoke(this, s1, 0);
}

bool
IceProxy::Test2::WstringClass::opStruct_async(const ::Test2::AMI_WstringClass_opStructPtr& __cb, const ::Test2::WstringStruct& s1, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s1, &__ctx);
}
#endif

void
IceProxy::Test2::WstringClass::throwExcept(const ::Ice::Wstring& reason, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test2__WstringClass__throwExcept_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test2__WstringClass__throwExcept_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(reason);
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
                    catch(const ::Test2::WstringException&)
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test2::WstringClass::throwExcept_async(const ::Test2::AMI_WstringClass_throwExceptPtr& __cb, const ::Ice::Wstring& reason)
{
    return __cb->__invoke(this, reason, 0);
}

bool
IceProxy::Test2::WstringClass::throwExcept_async(const ::Test2::AMI_WstringClass_throwExceptPtr& __cb, const ::Ice::Wstring& reason, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, reason, &__ctx);
}
#endif

const ::std::string&
IceProxy::Test2::WstringClass::ice_staticId()
{
    return __Test2__WstringClass_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test2::WstringClass::__newInstance() const
{
    return new WstringClass;
}
