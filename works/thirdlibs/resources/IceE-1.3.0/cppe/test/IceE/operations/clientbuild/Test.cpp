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

static const ::std::string __Test__MyClass__opVoid_name = "opVoid";

static const ::std::string __Test__MyClass__opByte_name = "opByte";

static const ::std::string __Test__MyClass__opBool_name = "opBool";

static const ::std::string __Test__MyClass__opShortIntLong_name = "opShortIntLong";

static const ::std::string __Test__MyClass__opFloatDouble_name = "opFloatDouble";

static const ::std::string __Test__MyClass__opString_name = "opString";

static const ::std::string __Test__MyClass__opMyEnum_name = "opMyEnum";

static const ::std::string __Test__MyClass__opMyClass_name = "opMyClass";

static const ::std::string __Test__MyClass__opStruct_name = "opStruct";

static const ::std::string __Test__MyClass__opByteS_name = "opByteS";

static const ::std::string __Test__MyClass__opBoolS_name = "opBoolS";

static const ::std::string __Test__MyClass__opShortIntLongS_name = "opShortIntLongS";

static const ::std::string __Test__MyClass__opFloatDoubleS_name = "opFloatDoubleS";

static const ::std::string __Test__MyClass__opStringS_name = "opStringS";

static const ::std::string __Test__MyClass__opByteSS_name = "opByteSS";

static const ::std::string __Test__MyClass__opBoolSS_name = "opBoolSS";

static const ::std::string __Test__MyClass__opShortIntLongSS_name = "opShortIntLongSS";

static const ::std::string __Test__MyClass__opFloatDoubleSS_name = "opFloatDoubleSS";

static const ::std::string __Test__MyClass__opStringSS_name = "opStringSS";

static const ::std::string __Test__MyClass__opStringSSS_name = "opStringSSS";

static const ::std::string __Test__MyClass__opByteBoolD_name = "opByteBoolD";

static const ::std::string __Test__MyClass__opShortIntD_name = "opShortIntD";

static const ::std::string __Test__MyClass__opLongFloatD_name = "opLongFloatD";

static const ::std::string __Test__MyClass__opStringStringD_name = "opStringStringD";

static const ::std::string __Test__MyClass__opStringMyEnumD_name = "opStringMyEnumD";

static const ::std::string __Test__MyClass__opIntS_name = "opIntS";

static const ::std::string __Test__MyClass__opByteSOneway_name = "opByteSOneway";

static const ::std::string __Test__MyClass__opContext_name = "opContext";

static const ::std::string __Test__MyClass__opDoubleMarshaling_name = "opDoubleMarshaling";

static const ::std::string __Test__MyDerivedClass__opDerived_name = "opDerived";

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
Test::__write(::IceInternal::BasicStream* __os, ::Test::MyEnum v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 3);
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::MyEnum& v)
{
    ::Ice::Byte val;
    __is->read(val, 3);
    v = static_cast< ::Test::MyEnum>(val);
}

bool
Test::AnotherStruct::operator==(const AnotherStruct& __rhs) const
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
Test::AnotherStruct::operator<(const AnotherStruct& __rhs) const
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
Test::AnotherStruct::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(s);
}

void
Test::AnotherStruct::__read(::IceInternal::BasicStream* __is)
{
    __is->read(s);
}

bool
Test::Structure::operator==(const Structure& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(p != __rhs.p)
    {
        return false;
    }
    if(e != __rhs.e)
    {
        return false;
    }
    if(s != __rhs.s)
    {
        return false;
    }
    return true;
}

bool
Test::Structure::operator<(const Structure& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(p < __rhs.p)
    {
        return true;
    }
    else if(__rhs.p < p)
    {
        return false;
    }
    if(e < __rhs.e)
    {
        return true;
    }
    else if(__rhs.e < e)
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
Test::Structure::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p.get())));
    ::Test::__write(__os, e);
    s.__write(__os);
}

void
Test::Structure::__read(::IceInternal::BasicStream* __is)
{
    ::Test::__read(__is, p);
    ::Test::__read(__is, e);
    s.__read(__is);
}

void
Test::__writeMyEnumS(::IceInternal::BasicStream* __os, const ::Test::MyEnum* begin, const ::Test::MyEnum* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__write(__os, begin[i]);
    }
}

void
Test::__readMyEnumS(::IceInternal::BasicStream* __is, ::Test::MyEnumS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->checkFixedSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__read(__is, v[i]);
    }
}

void
Test::__writeMyClassS(::IceInternal::BasicStream* __os, const ::Test::MyClassPrx* begin, const ::Test::MyClassPrx* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(begin[i].get())));
    }
}

void
Test::__readMyClassS(::IceInternal::BasicStream* __is, ::Test::MyClassS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__read(__is, v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeByteSS(::IceInternal::BasicStream* __os, const ::Test::ByteS* begin, const ::Test::ByteS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readByteSS(::IceInternal::BasicStream* __is, ::Test::ByteSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___v;
        __is->read(___v);
        ::std::vector< ::Ice::Byte>(___v.first, ___v.second).swap(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeBoolSS(::IceInternal::BasicStream* __os, const ::Test::BoolS* begin, const ::Test::BoolS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(begin[i]);
    }
}

void
Test::__readBoolSS(::IceInternal::BasicStream* __is, ::Test::BoolSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeShortSS(::IceInternal::BasicStream* __os, const ::Test::ShortS* begin, const ::Test::ShortS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readShortSS(::IceInternal::BasicStream* __is, ::Test::ShortSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeIntSS(::IceInternal::BasicStream* __os, const ::Test::IntS* begin, const ::Test::IntS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readIntSS(::IceInternal::BasicStream* __is, ::Test::IntSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeLongSS(::IceInternal::BasicStream* __os, const ::Test::LongS* begin, const ::Test::LongS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readLongSS(::IceInternal::BasicStream* __is, ::Test::LongSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeFloatSS(::IceInternal::BasicStream* __os, const ::Test::FloatS* begin, const ::Test::FloatS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readFloatSS(::IceInternal::BasicStream* __is, ::Test::FloatSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeDoubleSS(::IceInternal::BasicStream* __os, const ::Test::DoubleS* begin, const ::Test::DoubleS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readDoubleSS(::IceInternal::BasicStream* __is, ::Test::DoubleSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringSS(::IceInternal::BasicStream* __os, const ::Test::StringS* begin, const ::Test::StringS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readStringSS(::IceInternal::BasicStream* __is, ::Test::StringSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeMyEnumSS(::IceInternal::BasicStream* __os, const ::Test::MyEnumS* begin, const ::Test::MyEnumS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeMyEnumS(__os, &begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readMyEnumSS(::IceInternal::BasicStream* __is, ::Test::MyEnumSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readMyEnumS(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeMyClassSS(::IceInternal::BasicStream* __os, const ::Test::MyClassS* begin, const ::Test::MyClassS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeMyClassS(__os, &begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readMyClassSS(::IceInternal::BasicStream* __is, ::Test::MyClassSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readMyClassS(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringSSS(::IceInternal::BasicStream* __os, const ::Test::StringSS* begin, const ::Test::StringSS* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeStringSS(__os, &begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
Test::__readStringSSS(::IceInternal::BasicStream* __is, ::Test::StringSSS& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readStringSS(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeByteBoolD(::IceInternal::BasicStream* __os, const ::Test::ByteBoolD& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::ByteBoolD::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test::__readByteBoolD(::IceInternal::BasicStream* __is, ::Test::ByteBoolD& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Byte, bool> pair;
        __is->read(const_cast< ::Ice::Byte&>(pair.first));
        ::Test::ByteBoolD::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
Test::__writeShortIntD(::IceInternal::BasicStream* __os, const ::Test::ShortIntD& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::ShortIntD::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test::__readShortIntD(::IceInternal::BasicStream* __is, ::Test::ShortIntD& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Short, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Short&>(pair.first));
        ::Test::ShortIntD::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
Test::__writeLongFloatD(::IceInternal::BasicStream* __os, const ::Test::LongFloatD& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::LongFloatD::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test::__readLongFloatD(::IceInternal::BasicStream* __is, ::Test::LongFloatD& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::Ice::Float> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::Test::LongFloatD::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
Test::__writeStringStringD(::IceInternal::BasicStream* __os, const ::Test::StringStringD& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::StringStringD::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test::__readStringStringD(::IceInternal::BasicStream* __is, ::Test::StringStringD& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::Test::StringStringD::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
Test::__writeStringMyEnumD(::IceInternal::BasicStream* __os, const ::Test::StringMyEnumD& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::StringMyEnumD::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        ::Test::__write(__os, p->second);
    }
}

void
Test::__readStringMyEnumD(::IceInternal::BasicStream* __is, ::Test::StringMyEnumD& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::Test::MyEnum> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::Test::StringMyEnumD::iterator __i = v.insert(v.end(), pair);
        ::Test::__read(__is, __i->second);
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
Test::MyClass::___opVoid(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    opVoid(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opByte(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Byte p1;
    ::Ice::Byte p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Byte p3;
    ::Ice::Byte __ret = opByte(p1, p2, p3, __current);
    __os->write(p3);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opBool(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    bool p1;
    bool p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    bool p3;
    bool __ret = opBool(p1, p2, p3, __current);
    __os->write(p3);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opShortIntLong(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Short p1;
    ::Ice::Int p2;
    ::Ice::Long p3;
    __is->read(p1);
    __is->read(p2);
    __is->read(p3);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Short p4;
    ::Ice::Int p5;
    ::Ice::Long p6;
    ::Ice::Long __ret = opShortIntLong(p1, p2, p3, p4, p5, p6, __current);
    __os->write(p4);
    __os->write(p5);
    __os->write(p6);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opFloatDouble(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Float p1;
    ::Ice::Double p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Float p3;
    ::Ice::Double p4;
    ::Ice::Double __ret = opFloatDouble(p1, p2, p3, p4, __current);
    __os->write(p3);
    __os->write(p4);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opString(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string p1;
    ::std::string p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string p3;
    ::std::string __ret = opString(p1, p2, p3, __current);
    __os->write(p3);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opMyEnum(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MyEnum p1;
    ::Test::__read(__is, p1);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MyEnum p2;
    ::Test::MyEnum __ret = opMyEnum(p1, p2, __current);
    ::Test::__write(__os, p2);
    ::Test::__write(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opMyClass(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::MyClassPrx p1;
    ::Test::__read(__is, p1);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::MyClassPrx p2;
    ::Test::MyClassPrx p3;
    ::Test::MyClassPrx __ret = opMyClass(p1, p2, p3, __current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p2.get())));
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p3.get())));
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opStruct(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::Structure p1;
    ::Test::Structure p2;
    p1.__read(__is);
    p2.__read(__is);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::Structure p3;
    ::Test::Structure __ret = opStruct(p1, p2, p3, __current);
    p3.__write(__os);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opByteS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ByteS p1;
    ::Test::ByteS p2;
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___p1;
    __is->read(___p1);
    ::std::vector< ::Ice::Byte>(___p1.first, ___p1.second).swap(p1);
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___p2;
    __is->read(___p2);
    ::std::vector< ::Ice::Byte>(___p2.first, ___p2.second).swap(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteS p3;
    ::Test::ByteS __ret = opByteS(p1, p2, p3, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p3[0], &p3[0] + p3.size());
    }
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
Test::MyClass::___opBoolS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::BoolS p1;
    ::Test::BoolS p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BoolS p3;
    ::Test::BoolS __ret = opBoolS(p1, p2, p3, __current);
    __os->write(p3);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opShortIntLongS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ShortS p1;
    ::Test::IntS p2;
    ::Test::LongS p3;
    __is->read(p1);
    __is->read(p2);
    __is->read(p3);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ShortS p4;
    ::Test::IntS p5;
    ::Test::LongS p6;
    ::Test::LongS __ret = opShortIntLongS(p1, p2, p3, p4, p5, p6, __current);
    if(p4.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p4[0], &p4[0] + p4.size());
    }
    if(p5.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p5[0], &p5[0] + p5.size());
    }
    if(p6.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p6[0], &p6[0] + p6.size());
    }
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
Test::MyClass::___opFloatDoubleS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::FloatS p1;
    ::Test::DoubleS p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::FloatS p3;
    ::Test::DoubleS p4;
    ::Test::DoubleS __ret = opFloatDoubleS(p1, p2, p3, p4, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p3[0], &p3[0] + p3.size());
    }
    if(p4.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p4[0], &p4[0] + p4.size());
    }
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
Test::MyClass::___opStringS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringS p1;
    ::Test::StringS p2;
    __is->read(p1);
    __is->read(p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringS p3;
    ::Test::StringS __ret = opStringS(p1, p2, p3, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&p3[0], &p3[0] + p3.size());
    }
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
Test::MyClass::___opByteSS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ByteSS p1;
    ::Test::ByteSS p2;
    ::Test::__readByteSS(__is, p1);
    ::Test::__readByteSS(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteSS p3;
    ::Test::ByteSS __ret = opByteSS(p1, p2, p3, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeByteSS(__os, &p3[0], &p3[0] + p3.size());
    }
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeByteSS(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opBoolSS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::BoolSS p1;
    ::Test::BoolSS p2;
    ::Test::__readBoolSS(__is, p1);
    ::Test::__readBoolSS(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BoolSS p3;
    ::Test::BoolSS __ret = opBoolSS(p1, p2, p3, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeBoolSS(__os, &p3[0], &p3[0] + p3.size());
    }
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeBoolSS(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opShortIntLongSS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ShortSS p1;
    ::Test::IntSS p2;
    ::Test::LongSS p3;
    ::Test::__readShortSS(__is, p1);
    ::Test::__readIntSS(__is, p2);
    ::Test::__readLongSS(__is, p3);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ShortSS p4;
    ::Test::IntSS p5;
    ::Test::LongSS p6;
    ::Test::LongSS __ret = opShortIntLongSS(p1, p2, p3, p4, p5, p6, __current);
    if(p4.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeShortSS(__os, &p4[0], &p4[0] + p4.size());
    }
    if(p5.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeIntSS(__os, &p5[0], &p5[0] + p5.size());
    }
    if(p6.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeLongSS(__os, &p6[0], &p6[0] + p6.size());
    }
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeLongSS(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opFloatDoubleSS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::FloatSS p1;
    ::Test::DoubleSS p2;
    ::Test::__readFloatSS(__is, p1);
    ::Test::__readDoubleSS(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::FloatSS p3;
    ::Test::DoubleSS p4;
    ::Test::DoubleSS __ret = opFloatDoubleSS(p1, p2, p3, p4, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeFloatSS(__os, &p3[0], &p3[0] + p3.size());
    }
    if(p4.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeDoubleSS(__os, &p4[0], &p4[0] + p4.size());
    }
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeDoubleSS(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opStringSS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringSS p1;
    ::Test::StringSS p2;
    ::Test::__readStringSS(__is, p1);
    ::Test::__readStringSS(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringSS p3;
    ::Test::StringSS __ret = opStringSS(p1, p2, p3, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeStringSS(__os, &p3[0], &p3[0] + p3.size());
    }
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeStringSS(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opStringSSS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringSSS p1;
    ::Test::StringSSS p2;
    ::Test::__readStringSSS(__is, p1);
    ::Test::__readStringSSS(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringSSS p3;
    ::Test::StringSSS __ret = opStringSSS(p1, p2, p3, __current);
    if(p3.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeStringSSS(__os, &p3[0], &p3[0] + p3.size());
    }
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Test::__writeStringSSS(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opByteBoolD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ByteBoolD p1;
    ::Test::ByteBoolD p2;
    ::Test::__readByteBoolD(__is, p1);
    ::Test::__readByteBoolD(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteBoolD p3;
    ::Test::ByteBoolD __ret = opByteBoolD(p1, p2, p3, __current);
    ::Test::__writeByteBoolD(__os, p3);
    ::Test::__writeByteBoolD(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opShortIntD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ShortIntD p1;
    ::Test::ShortIntD p2;
    ::Test::__readShortIntD(__is, p1);
    ::Test::__readShortIntD(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ShortIntD p3;
    ::Test::ShortIntD __ret = opShortIntD(p1, p2, p3, __current);
    ::Test::__writeShortIntD(__os, p3);
    ::Test::__writeShortIntD(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opLongFloatD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::LongFloatD p1;
    ::Test::LongFloatD p2;
    ::Test::__readLongFloatD(__is, p1);
    ::Test::__readLongFloatD(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::LongFloatD p3;
    ::Test::LongFloatD __ret = opLongFloatD(p1, p2, p3, __current);
    ::Test::__writeLongFloatD(__os, p3);
    ::Test::__writeLongFloatD(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opStringStringD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringStringD p1;
    ::Test::StringStringD p2;
    ::Test::__readStringStringD(__is, p1);
    ::Test::__readStringStringD(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringStringD p3;
    ::Test::StringStringD __ret = opStringStringD(p1, p2, p3, __current);
    ::Test::__writeStringStringD(__os, p3);
    ::Test::__writeStringStringD(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opStringMyEnumD(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringMyEnumD p1;
    ::Test::StringMyEnumD p2;
    ::Test::__readStringMyEnumD(__is, p1);
    ::Test::__readStringMyEnumD(__is, p2);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringMyEnumD p3;
    ::Test::StringMyEnumD __ret = opStringMyEnumD(p1, p2, p3, __current);
    ::Test::__writeStringMyEnumD(__os, p3);
    ::Test::__writeStringMyEnumD(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opIntS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::IntS s;
    __is->read(s);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::IntS __ret = opIntS(s, __current);
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
Test::MyClass::___opByteSOneway(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ByteS s;
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___s;
    __is->read(___s);
    ::std::vector< ::Ice::Byte>(___s.first, ___s.second).swap(s);
    opByteSOneway(s, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opContext(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringStringD __ret = opContext(__current);
    ::Test::__writeStringStringD(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::MyClass::___opDoubleMarshaling(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Double p1;
    ::Test::DoubleS p2;
    __is->read(p1);
    __is->read(p2);
    opDoubleMarshaling(p1, p2, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MyClass_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "opBool",
    "opBoolS",
    "opBoolSS",
    "opByte",
    "opByteBoolD",
    "opByteS",
    "opByteSOneway",
    "opByteSS",
    "opContext",
    "opDoubleMarshaling",
    "opFloatDouble",
    "opFloatDoubleS",
    "opFloatDoubleSS",
    "opIntS",
    "opLongFloatD",
    "opMyClass",
    "opMyEnum",
    "opShortIntD",
    "opShortIntLong",
    "opShortIntLongS",
    "opShortIntLongSS",
    "opString",
    "opStringMyEnumD",
    "opStringS",
    "opStringSS",
    "opStringSSS",
    "opStringStringD",
    "opStruct",
    "opVoid",
    "shutdown"
};

::Ice::DispatchStatus
Test::MyClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MyClass_all, __Test__MyClass_all + 34, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyClass_all)
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
            return ___opBool(in, current);
        }
        case 5:
        {
            return ___opBoolS(in, current);
        }
        case 6:
        {
            return ___opBoolSS(in, current);
        }
        case 7:
        {
            return ___opByte(in, current);
        }
        case 8:
        {
            return ___opByteBoolD(in, current);
        }
        case 9:
        {
            return ___opByteS(in, current);
        }
        case 10:
        {
            return ___opByteSOneway(in, current);
        }
        case 11:
        {
            return ___opByteSS(in, current);
        }
        case 12:
        {
            return ___opContext(in, current);
        }
        case 13:
        {
            return ___opDoubleMarshaling(in, current);
        }
        case 14:
        {
            return ___opFloatDouble(in, current);
        }
        case 15:
        {
            return ___opFloatDoubleS(in, current);
        }
        case 16:
        {
            return ___opFloatDoubleSS(in, current);
        }
        case 17:
        {
            return ___opIntS(in, current);
        }
        case 18:
        {
            return ___opLongFloatD(in, current);
        }
        case 19:
        {
            return ___opMyClass(in, current);
        }
        case 20:
        {
            return ___opMyEnum(in, current);
        }
        case 21:
        {
            return ___opShortIntD(in, current);
        }
        case 22:
        {
            return ___opShortIntLong(in, current);
        }
        case 23:
        {
            return ___opShortIntLongS(in, current);
        }
        case 24:
        {
            return ___opShortIntLongSS(in, current);
        }
        case 25:
        {
            return ___opString(in, current);
        }
        case 26:
        {
            return ___opStringMyEnumD(in, current);
        }
        case 27:
        {
            return ___opStringS(in, current);
        }
        case 28:
        {
            return ___opStringSS(in, current);
        }
        case 29:
        {
            return ___opStringSSS(in, current);
        }
        case 30:
        {
            return ___opStringStringD(in, current);
        }
        case 31:
        {
            return ___opStruct(in, current);
        }
        case 32:
        {
            return ___opVoid(in, current);
        }
        case 33:
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
Test::MyDerivedClass::___opDerived(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    opDerived(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__MyDerivedClass_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "opBool",
    "opBoolS",
    "opBoolSS",
    "opByte",
    "opByteBoolD",
    "opByteS",
    "opByteSOneway",
    "opByteSS",
    "opContext",
    "opDerived",
    "opDoubleMarshaling",
    "opFloatDouble",
    "opFloatDoubleS",
    "opFloatDoubleSS",
    "opIntS",
    "opLongFloatD",
    "opMyClass",
    "opMyEnum",
    "opShortIntD",
    "opShortIntLong",
    "opShortIntLongS",
    "opShortIntLongSS",
    "opString",
    "opStringMyEnumD",
    "opStringS",
    "opStringSS",
    "opStringSSS",
    "opStringStringD",
    "opStruct",
    "opVoid",
    "shutdown"
};

::Ice::DispatchStatus
Test::MyDerivedClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__MyDerivedClass_all, __Test__MyDerivedClass_all + 35, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyDerivedClass_all)
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
            return ___opBool(in, current);
        }
        case 5:
        {
            return ___opBoolS(in, current);
        }
        case 6:
        {
            return ___opBoolSS(in, current);
        }
        case 7:
        {
            return ___opByte(in, current);
        }
        case 8:
        {
            return ___opByteBoolD(in, current);
        }
        case 9:
        {
            return ___opByteS(in, current);
        }
        case 10:
        {
            return ___opByteSOneway(in, current);
        }
        case 11:
        {
            return ___opByteSS(in, current);
        }
        case 12:
        {
            return ___opContext(in, current);
        }
        case 13:
        {
            return ___opDerived(in, current);
        }
        case 14:
        {
            return ___opDoubleMarshaling(in, current);
        }
        case 15:
        {
            return ___opFloatDouble(in, current);
        }
        case 16:
        {
            return ___opFloatDoubleS(in, current);
        }
        case 17:
        {
            return ___opFloatDoubleSS(in, current);
        }
        case 18:
        {
            return ___opIntS(in, current);
        }
        case 19:
        {
            return ___opLongFloatD(in, current);
        }
        case 20:
        {
            return ___opMyClass(in, current);
        }
        case 21:
        {
            return ___opMyEnum(in, current);
        }
        case 22:
        {
            return ___opShortIntD(in, current);
        }
        case 23:
        {
            return ___opShortIntLong(in, current);
        }
        case 24:
        {
            return ___opShortIntLongS(in, current);
        }
        case 25:
        {
            return ___opShortIntLongSS(in, current);
        }
        case 26:
        {
            return ___opString(in, current);
        }
        case 27:
        {
            return ___opStringMyEnumD(in, current);
        }
        case 28:
        {
            return ___opStringS(in, current);
        }
        case 29:
        {
            return ___opStringSS(in, current);
        }
        case 30:
        {
            return ___opStringSSS(in, current);
        }
        case 31:
        {
            return ___opStringStringD(in, current);
        }
        case 32:
        {
            return ___opStruct(in, current);
        }
        case 33:
        {
            return ___opVoid(in, current);
        }
        case 34:
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_shutdown::__invoke(const ::Test::MyClassPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__MyClass__shutdown_name, ::Ice::Normal, __ctx);
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
Test::AMI_MyClass_shutdown::__response(bool __ok)
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
Test::AMI_MyClass_opVoid::__invoke(const ::Test::MyClassPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__MyClass__opVoid_name, ::Ice::Normal, __ctx);
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
Test::AMI_MyClass_opVoid::__response(bool __ok)
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
Test::AMI_MyClass_opByte::__invoke(const ::Test::MyClassPrx& __prx, ::Ice::Byte p1, ::Ice::Byte p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opByte_name);
        __prepare(__prx, __Test__MyClass__opByte_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        __os->write(p2);
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
Test::AMI_MyClass_opByte::__response(bool __ok)
{
    ::Ice::Byte p3;
    ::Ice::Byte __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opBool::__invoke(const ::Test::MyClassPrx& __prx, bool p1, bool p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opBool_name);
        __prepare(__prx, __Test__MyClass__opBool_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        __os->write(p2);
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
Test::AMI_MyClass_opBool::__response(bool __ok)
{
    bool p3;
    bool __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opShortIntLong::__invoke(const ::Test::MyClassPrx& __prx, ::Ice::Short p1, ::Ice::Int p2, ::Ice::Long p3, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opShortIntLong_name);
        __prepare(__prx, __Test__MyClass__opShortIntLong_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        __os->write(p2);
        __os->write(p3);
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
Test::AMI_MyClass_opShortIntLong::__response(bool __ok)
{
    ::Ice::Short p4;
    ::Ice::Int p5;
    ::Ice::Long p6;
    ::Ice::Long __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p4);
        __is->read(p5);
        __is->read(p6);
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
    ice_response(__ret, p4, p5, p6);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opFloatDouble::__invoke(const ::Test::MyClassPrx& __prx, ::Ice::Float p1, ::Ice::Double p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opFloatDouble_name);
        __prepare(__prx, __Test__MyClass__opFloatDouble_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        __os->write(p2);
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
Test::AMI_MyClass_opFloatDouble::__response(bool __ok)
{
    ::Ice::Float p3;
    ::Ice::Double p4;
    ::Ice::Double __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
        __is->read(p4);
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
    ice_response(__ret, p3, p4);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opString::__invoke(const ::Test::MyClassPrx& __prx, const ::std::string& p1, const ::std::string& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opString_name);
        __prepare(__prx, __Test__MyClass__opString_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        __os->write(p2);
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
Test::AMI_MyClass_opString::__response(bool __ok)
{
    ::std::string p3;
    ::std::string __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opMyEnum::__invoke(const ::Test::MyClassPrx& __prx, ::Test::MyEnum p1, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opMyEnum_name);
        __prepare(__prx, __Test__MyClass__opMyEnum_name, ::Ice::Normal, __ctx);
        ::Test::__write(__os, p1);
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
Test::AMI_MyClass_opMyEnum::__response(bool __ok)
{
    ::Test::MyEnum p2;
    ::Test::MyEnum __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__read(__is, p2);
        ::Test::__read(__is, __ret);
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
    ice_response(__ret, p2);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opMyClass::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::MyClassPrx& p1, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opMyClass_name);
        __prepare(__prx, __Test__MyClass__opMyClass_name, ::Ice::Normal, __ctx);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p1.get())));
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
Test::AMI_MyClass_opMyClass::__response(bool __ok)
{
    ::Test::MyClassPrx p2;
    ::Test::MyClassPrx p3;
    ::Test::MyClassPrx __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__read(__is, p2);
        ::Test::__read(__is, p3);
        ::Test::__read(__is, __ret);
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
    ice_response(__ret, p2, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opStruct::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::Structure& p1, const ::Test::Structure& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opStruct_name);
        __prepare(__prx, __Test__MyClass__opStruct_name, ::Ice::Normal, __ctx);
        p1.__write(__os);
        p2.__write(__os);
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
Test::AMI_MyClass_opStruct::__response(bool __ok)
{
    ::Test::Structure p3;
    ::Test::Structure __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        p3.__read(__is);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opByteS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ByteS& p1, const ::Test::ByteS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opByteS_name);
        __prepare(__prx, __Test__MyClass__opByteS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opByteS::__response(bool __ok)
{
    ::Test::ByteS p3;
    ::Test::ByteS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___p3;
        __is->read(___p3);
        ::std::vector< ::Ice::Byte>(___p3.first, ___p3.second).swap(p3);
        ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> _____ret;
        __is->read(_____ret);
        ::std::vector< ::Ice::Byte>(_____ret.first, _____ret.second).swap(__ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opBoolS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::BoolS& p1, const ::Test::BoolS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opBoolS_name);
        __prepare(__prx, __Test__MyClass__opBoolS_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        __os->write(p2);
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
Test::AMI_MyClass_opBoolS::__response(bool __ok)
{
    ::Test::BoolS p3;
    ::Test::BoolS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opShortIntLongS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ShortS& p1, const ::Test::IntS& p2, const ::Test::LongS& p3, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opShortIntLongS_name);
        __prepare(__prx, __Test__MyClass__opShortIntLongS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p2[0], &p2[0] + p2.size());
        }
        if(p3.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p3[0], &p3[0] + p3.size());
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
Test::AMI_MyClass_opShortIntLongS::__response(bool __ok)
{
    ::Test::ShortS p4;
    ::Test::IntS p5;
    ::Test::LongS p6;
    ::Test::LongS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p4);
        __is->read(p5);
        __is->read(p6);
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
    ice_response(__ret, p4, p5, p6);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opFloatDoubleS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::FloatS& p1, const ::Test::DoubleS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opFloatDoubleS_name);
        __prepare(__prx, __Test__MyClass__opFloatDoubleS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opFloatDoubleS::__response(bool __ok)
{
    ::Test::FloatS p3;
    ::Test::DoubleS p4;
    ::Test::DoubleS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
        __is->read(p4);
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
    ice_response(__ret, p3, p4);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opStringS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::StringS& p1, const ::Test::StringS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opStringS_name);
        __prepare(__prx, __Test__MyClass__opStringS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opStringS::__response(bool __ok)
{
    ::Test::StringS p3;
    ::Test::StringS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(p3);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opByteSS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ByteSS& p1, const ::Test::ByteSS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opByteSS_name);
        __prepare(__prx, __Test__MyClass__opByteSS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeByteSS(__os, &p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeByteSS(__os, &p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opByteSS::__response(bool __ok)
{
    ::Test::ByteSS p3;
    ::Test::ByteSS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readByteSS(__is, p3);
        ::Test::__readByteSS(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opBoolSS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::BoolSS& p1, const ::Test::BoolSS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opBoolSS_name);
        __prepare(__prx, __Test__MyClass__opBoolSS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeBoolSS(__os, &p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeBoolSS(__os, &p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opBoolSS::__response(bool __ok)
{
    ::Test::BoolSS p3;
    ::Test::BoolSS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readBoolSS(__is, p3);
        ::Test::__readBoolSS(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opShortIntLongSS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ShortSS& p1, const ::Test::IntSS& p2, const ::Test::LongSS& p3, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opShortIntLongSS_name);
        __prepare(__prx, __Test__MyClass__opShortIntLongSS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeShortSS(__os, &p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeIntSS(__os, &p2[0], &p2[0] + p2.size());
        }
        if(p3.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeLongSS(__os, &p3[0], &p3[0] + p3.size());
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
Test::AMI_MyClass_opShortIntLongSS::__response(bool __ok)
{
    ::Test::ShortSS p4;
    ::Test::IntSS p5;
    ::Test::LongSS p6;
    ::Test::LongSS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readShortSS(__is, p4);
        ::Test::__readIntSS(__is, p5);
        ::Test::__readLongSS(__is, p6);
        ::Test::__readLongSS(__is, __ret);
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
    ice_response(__ret, p4, p5, p6);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opFloatDoubleSS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::FloatSS& p1, const ::Test::DoubleSS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opFloatDoubleSS_name);
        __prepare(__prx, __Test__MyClass__opFloatDoubleSS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeFloatSS(__os, &p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeDoubleSS(__os, &p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opFloatDoubleSS::__response(bool __ok)
{
    ::Test::FloatSS p3;
    ::Test::DoubleSS p4;
    ::Test::DoubleSS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readFloatSS(__is, p3);
        ::Test::__readDoubleSS(__is, p4);
        ::Test::__readDoubleSS(__is, __ret);
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
    ice_response(__ret, p3, p4);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opStringSS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::StringSS& p1, const ::Test::StringSS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opStringSS_name);
        __prepare(__prx, __Test__MyClass__opStringSS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeStringSS(__os, &p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeStringSS(__os, &p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opStringSS::__response(bool __ok)
{
    ::Test::StringSS p3;
    ::Test::StringSS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringSS(__is, p3);
        ::Test::__readStringSS(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opStringSSS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::StringSSS& p1, const ::Test::StringSSS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opStringSSS_name);
        __prepare(__prx, __Test__MyClass__opStringSSS_name, ::Ice::Normal, __ctx);
        if(p1.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeStringSSS(__os, &p1[0], &p1[0] + p1.size());
        }
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeStringSSS(__os, &p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opStringSSS::__response(bool __ok)
{
    ::Test::StringSSS p3;
    ::Test::StringSSS __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringSSS(__is, p3);
        ::Test::__readStringSSS(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opByteBoolD::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ByteBoolD& p1, const ::Test::ByteBoolD& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opByteBoolD_name);
        __prepare(__prx, __Test__MyClass__opByteBoolD_name, ::Ice::Normal, __ctx);
        ::Test::__writeByteBoolD(__os, p1);
        ::Test::__writeByteBoolD(__os, p2);
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
Test::AMI_MyClass_opByteBoolD::__response(bool __ok)
{
    ::Test::ByteBoolD p3;
    ::Test::ByteBoolD __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readByteBoolD(__is, p3);
        ::Test::__readByteBoolD(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opShortIntD::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ShortIntD& p1, const ::Test::ShortIntD& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opShortIntD_name);
        __prepare(__prx, __Test__MyClass__opShortIntD_name, ::Ice::Normal, __ctx);
        ::Test::__writeShortIntD(__os, p1);
        ::Test::__writeShortIntD(__os, p2);
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
Test::AMI_MyClass_opShortIntD::__response(bool __ok)
{
    ::Test::ShortIntD p3;
    ::Test::ShortIntD __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readShortIntD(__is, p3);
        ::Test::__readShortIntD(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opLongFloatD::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::LongFloatD& p1, const ::Test::LongFloatD& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opLongFloatD_name);
        __prepare(__prx, __Test__MyClass__opLongFloatD_name, ::Ice::Normal, __ctx);
        ::Test::__writeLongFloatD(__os, p1);
        ::Test::__writeLongFloatD(__os, p2);
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
Test::AMI_MyClass_opLongFloatD::__response(bool __ok)
{
    ::Test::LongFloatD p3;
    ::Test::LongFloatD __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readLongFloatD(__is, p3);
        ::Test::__readLongFloatD(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opStringStringD::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::StringStringD& p1, const ::Test::StringStringD& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opStringStringD_name);
        __prepare(__prx, __Test__MyClass__opStringStringD_name, ::Ice::Normal, __ctx);
        ::Test::__writeStringStringD(__os, p1);
        ::Test::__writeStringStringD(__os, p2);
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
Test::AMI_MyClass_opStringStringD::__response(bool __ok)
{
    ::Test::StringStringD p3;
    ::Test::StringStringD __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringStringD(__is, p3);
        ::Test::__readStringStringD(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opStringMyEnumD::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::StringMyEnumD& p1, const ::Test::StringMyEnumD& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opStringMyEnumD_name);
        __prepare(__prx, __Test__MyClass__opStringMyEnumD_name, ::Ice::Normal, __ctx);
        ::Test::__writeStringMyEnumD(__os, p1);
        ::Test::__writeStringMyEnumD(__os, p2);
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
Test::AMI_MyClass_opStringMyEnumD::__response(bool __ok)
{
    ::Test::StringMyEnumD p3;
    ::Test::StringMyEnumD __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringMyEnumD(__is, p3);
        ::Test::__readStringMyEnumD(__is, __ret);
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
    ice_response(__ret, p3);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opIntS::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::IntS& s, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opIntS_name);
        __prepare(__prx, __Test__MyClass__opIntS_name, ::Ice::Normal, __ctx);
        if(s.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&s[0], &s[0] + s.size());
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
Test::AMI_MyClass_opIntS::__response(bool __ok)
{
    ::Test::IntS __ret;
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opByteSOneway::__invoke(const ::Test::MyClassPrx& __prx, const ::Test::ByteS& s, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__MyClass__opByteSOneway_name, ::Ice::Normal, __ctx);
        if(s.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&s[0], &s[0] + s.size());
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
Test::AMI_MyClass_opByteSOneway::__response(bool __ok)
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
Test::AMI_MyClass_opContext::__invoke(const ::Test::MyClassPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__MyClass__opContext_name);
        __prepare(__prx, __Test__MyClass__opContext_name, ::Ice::Normal, __ctx);
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
Test::AMI_MyClass_opContext::__response(bool __ok)
{
    ::Test::StringStringD __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringStringD(__is, __ret);
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
#ifdef ICEE_HAS_AMI

bool
Test::AMI_MyClass_opDoubleMarshaling::__invoke(const ::Test::MyClassPrx& __prx, ::Ice::Double p1, const ::Test::DoubleS& p2, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__MyClass__opDoubleMarshaling_name, ::Ice::Normal, __ctx);
        __os->write(p1);
        if(p2.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p2[0], &p2[0] + p2.size());
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
Test::AMI_MyClass_opDoubleMarshaling::__response(bool __ok)
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
Test::AMI_MyDerivedClass_opDerived::__invoke(const ::Test::MyDerivedClassPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__MyDerivedClass__opDerived_name, ::Ice::Normal, __ctx);
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
Test::AMI_MyDerivedClass_opDerived::__response(bool __ok)
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::MyClass::shutdown_async(const ::Test::AMI_MyClass_shutdownPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::MyClass::shutdown_async(const ::Test::AMI_MyClass_shutdownPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::MyClass::opVoid(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opVoid_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::MyClass::opVoid_async(const ::Test::AMI_MyClass_opVoidPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::MyClass::opVoid_async(const ::Test::AMI_MyClass_opVoidPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

::Ice::Byte
IceProxy::Test::MyClass::opByte(::Ice::Byte p1, ::Ice::Byte p2, ::Ice::Byte& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opByte_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opByte_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                __os->write(p2);
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
                ::Ice::Byte __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
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
IceProxy::Test::MyClass::opByte_async(const ::Test::AMI_MyClass_opBytePtr& __cb, ::Ice::Byte p1, ::Ice::Byte p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opByte_async(const ::Test::AMI_MyClass_opBytePtr& __cb, ::Ice::Byte p1, ::Ice::Byte p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

bool
IceProxy::Test::MyClass::opBool(bool p1, bool p2, bool& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opBool_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opBool_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                __os->write(p2);
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
                bool __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
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
IceProxy::Test::MyClass::opBool_async(const ::Test::AMI_MyClass_opBoolPtr& __cb, bool p1, bool p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opBool_async(const ::Test::AMI_MyClass_opBoolPtr& __cb, bool p1, bool p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Ice::Long
IceProxy::Test::MyClass::opShortIntLong(::Ice::Short p1, ::Ice::Int p2, ::Ice::Long p3, ::Ice::Short& p4, ::Ice::Int& p5, ::Ice::Long& p6, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opShortIntLong_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opShortIntLong_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                __os->write(p2);
                __os->write(p3);
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
                ::Ice::Long __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p4);
                __is->read(p5);
                __is->read(p6);
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
IceProxy::Test::MyClass::opShortIntLong_async(const ::Test::AMI_MyClass_opShortIntLongPtr& __cb, ::Ice::Short p1, ::Ice::Int p2, ::Ice::Long p3)
{
    return __cb->__invoke(this, p1, p2, p3, 0);
}

bool
IceProxy::Test::MyClass::opShortIntLong_async(const ::Test::AMI_MyClass_opShortIntLongPtr& __cb, ::Ice::Short p1, ::Ice::Int p2, ::Ice::Long p3, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, p3, &__ctx);
}
#endif

::Ice::Double
IceProxy::Test::MyClass::opFloatDouble(::Ice::Float p1, ::Ice::Double p2, ::Ice::Float& p3, ::Ice::Double& p4, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opFloatDouble_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opFloatDouble_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                __os->write(p2);
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
                ::Ice::Double __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
                __is->read(p4);
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
IceProxy::Test::MyClass::opFloatDouble_async(const ::Test::AMI_MyClass_opFloatDoublePtr& __cb, ::Ice::Float p1, ::Ice::Double p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opFloatDouble_async(const ::Test::AMI_MyClass_opFloatDoublePtr& __cb, ::Ice::Float p1, ::Ice::Double p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::std::string
IceProxy::Test::MyClass::opString(const ::std::string& p1, const ::std::string& p2, ::std::string& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opString_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opString_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                __os->write(p2);
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
                ::std::string __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
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
IceProxy::Test::MyClass::opString_async(const ::Test::AMI_MyClass_opStringPtr& __cb, const ::std::string& p1, const ::std::string& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opString_async(const ::Test::AMI_MyClass_opStringPtr& __cb, const ::std::string& p1, const ::std::string& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::MyEnum
IceProxy::Test::MyClass::opMyEnum(::Test::MyEnum p1, ::Test::MyEnum& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opMyEnum_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opMyEnum_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__write(__os, p1);
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
                ::Test::MyEnum __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__read(__is, p2);
                ::Test::__read(__is, __ret);
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
IceProxy::Test::MyClass::opMyEnum_async(const ::Test::AMI_MyClass_opMyEnumPtr& __cb, ::Test::MyEnum p1)
{
    return __cb->__invoke(this, p1, 0);
}

bool
IceProxy::Test::MyClass::opMyEnum_async(const ::Test::AMI_MyClass_opMyEnumPtr& __cb, ::Test::MyEnum p1, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, &__ctx);
}
#endif

::Test::MyClassPrx
IceProxy::Test::MyClass::opMyClass(const ::Test::MyClassPrx& p1, ::Test::MyClassPrx& p2, ::Test::MyClassPrx& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opMyClass_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opMyClass_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p1.get())));
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
                ::Test::MyClassPrx __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__read(__is, p2);
                ::Test::__read(__is, p3);
                ::Test::__read(__is, __ret);
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
IceProxy::Test::MyClass::opMyClass_async(const ::Test::AMI_MyClass_opMyClassPtr& __cb, const ::Test::MyClassPrx& p1)
{
    return __cb->__invoke(this, p1, 0);
}

bool
IceProxy::Test::MyClass::opMyClass_async(const ::Test::AMI_MyClass_opMyClassPtr& __cb, const ::Test::MyClassPrx& p1, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, &__ctx);
}
#endif

::Test::Structure
IceProxy::Test::MyClass::opStruct(const ::Test::Structure& p1, const ::Test::Structure& p2, ::Test::Structure& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opStruct_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opStruct_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                p1.__write(__os);
                p2.__write(__os);
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
                ::Test::Structure __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                p3.__read(__is);
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
IceProxy::Test::MyClass::opStruct_async(const ::Test::AMI_MyClass_opStructPtr& __cb, const ::Test::Structure& p1, const ::Test::Structure& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opStruct_async(const ::Test::AMI_MyClass_opStructPtr& __cb, const ::Test::Structure& p1, const ::Test::Structure& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::ByteS
IceProxy::Test::MyClass::opByteS(const ::Test::ByteS& p1, const ::Test::ByteS& p2, ::Test::ByteS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opByteS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opByteS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p2[0], &p2[0] + p2.size());
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
                ::Test::ByteS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___p3;
                __is->read(___p3);
                ::std::vector< ::Ice::Byte>(___p3.first, ___p3.second).swap(p3);
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::MyClass::opByteS_async(const ::Test::AMI_MyClass_opByteSPtr& __cb, const ::Test::ByteS& p1, const ::Test::ByteS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opByteS_async(const ::Test::AMI_MyClass_opByteSPtr& __cb, const ::Test::ByteS& p1, const ::Test::ByteS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::BoolS
IceProxy::Test::MyClass::opBoolS(const ::Test::BoolS& p1, const ::Test::BoolS& p2, ::Test::BoolS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opBoolS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opBoolS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                __os->write(p2);
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
                ::Test::BoolS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
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
IceProxy::Test::MyClass::opBoolS_async(const ::Test::AMI_MyClass_opBoolSPtr& __cb, const ::Test::BoolS& p1, const ::Test::BoolS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opBoolS_async(const ::Test::AMI_MyClass_opBoolSPtr& __cb, const ::Test::BoolS& p1, const ::Test::BoolS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::LongS
IceProxy::Test::MyClass::opShortIntLongS(const ::Test::ShortS& p1, const ::Test::IntS& p2, const ::Test::LongS& p3, ::Test::ShortS& p4, ::Test::IntS& p5, ::Test::LongS& p6, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opShortIntLongS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opShortIntLongS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p2[0], &p2[0] + p2.size());
                }
                if(p3.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p3[0], &p3[0] + p3.size());
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
                ::Test::LongS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p4);
                __is->read(p5);
                __is->read(p6);
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
IceProxy::Test::MyClass::opShortIntLongS_async(const ::Test::AMI_MyClass_opShortIntLongSPtr& __cb, const ::Test::ShortS& p1, const ::Test::IntS& p2, const ::Test::LongS& p3)
{
    return __cb->__invoke(this, p1, p2, p3, 0);
}

bool
IceProxy::Test::MyClass::opShortIntLongS_async(const ::Test::AMI_MyClass_opShortIntLongSPtr& __cb, const ::Test::ShortS& p1, const ::Test::IntS& p2, const ::Test::LongS& p3, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, p3, &__ctx);
}
#endif

::Test::DoubleS
IceProxy::Test::MyClass::opFloatDoubleS(const ::Test::FloatS& p1, const ::Test::DoubleS& p2, ::Test::FloatS& p3, ::Test::DoubleS& p4, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opFloatDoubleS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opFloatDoubleS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p2[0], &p2[0] + p2.size());
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
                ::Test::DoubleS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
                __is->read(p4);
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
IceProxy::Test::MyClass::opFloatDoubleS_async(const ::Test::AMI_MyClass_opFloatDoubleSPtr& __cb, const ::Test::FloatS& p1, const ::Test::DoubleS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opFloatDoubleS_async(const ::Test::AMI_MyClass_opFloatDoubleSPtr& __cb, const ::Test::FloatS& p1, const ::Test::DoubleS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::StringS
IceProxy::Test::MyClass::opStringS(const ::Test::StringS& p1, const ::Test::StringS& p2, ::Test::StringS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opStringS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opStringS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p2[0], &p2[0] + p2.size());
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
                ::Test::StringS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(p3);
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
IceProxy::Test::MyClass::opStringS_async(const ::Test::AMI_MyClass_opStringSPtr& __cb, const ::Test::StringS& p1, const ::Test::StringS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opStringS_async(const ::Test::AMI_MyClass_opStringSPtr& __cb, const ::Test::StringS& p1, const ::Test::StringS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::ByteSS
IceProxy::Test::MyClass::opByteSS(const ::Test::ByteSS& p1, const ::Test::ByteSS& p2, ::Test::ByteSS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opByteSS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opByteSS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeByteSS(__os, &p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeByteSS(__os, &p2[0], &p2[0] + p2.size());
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
                ::Test::ByteSS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readByteSS(__is, p3);
                ::Test::__readByteSS(__is, __ret);
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
IceProxy::Test::MyClass::opByteSS_async(const ::Test::AMI_MyClass_opByteSSPtr& __cb, const ::Test::ByteSS& p1, const ::Test::ByteSS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opByteSS_async(const ::Test::AMI_MyClass_opByteSSPtr& __cb, const ::Test::ByteSS& p1, const ::Test::ByteSS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::BoolSS
IceProxy::Test::MyClass::opBoolSS(const ::Test::BoolSS& p1, const ::Test::BoolSS& p2, ::Test::BoolSS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opBoolSS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opBoolSS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeBoolSS(__os, &p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeBoolSS(__os, &p2[0], &p2[0] + p2.size());
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
                ::Test::BoolSS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readBoolSS(__is, p3);
                ::Test::__readBoolSS(__is, __ret);
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
IceProxy::Test::MyClass::opBoolSS_async(const ::Test::AMI_MyClass_opBoolSSPtr& __cb, const ::Test::BoolSS& p1, const ::Test::BoolSS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opBoolSS_async(const ::Test::AMI_MyClass_opBoolSSPtr& __cb, const ::Test::BoolSS& p1, const ::Test::BoolSS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::LongSS
IceProxy::Test::MyClass::opShortIntLongSS(const ::Test::ShortSS& p1, const ::Test::IntSS& p2, const ::Test::LongSS& p3, ::Test::ShortSS& p4, ::Test::IntSS& p5, ::Test::LongSS& p6, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opShortIntLongSS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opShortIntLongSS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeShortSS(__os, &p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeIntSS(__os, &p2[0], &p2[0] + p2.size());
                }
                if(p3.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeLongSS(__os, &p3[0], &p3[0] + p3.size());
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
                ::Test::LongSS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readShortSS(__is, p4);
                ::Test::__readIntSS(__is, p5);
                ::Test::__readLongSS(__is, p6);
                ::Test::__readLongSS(__is, __ret);
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
IceProxy::Test::MyClass::opShortIntLongSS_async(const ::Test::AMI_MyClass_opShortIntLongSSPtr& __cb, const ::Test::ShortSS& p1, const ::Test::IntSS& p2, const ::Test::LongSS& p3)
{
    return __cb->__invoke(this, p1, p2, p3, 0);
}

bool
IceProxy::Test::MyClass::opShortIntLongSS_async(const ::Test::AMI_MyClass_opShortIntLongSSPtr& __cb, const ::Test::ShortSS& p1, const ::Test::IntSS& p2, const ::Test::LongSS& p3, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, p3, &__ctx);
}
#endif

::Test::DoubleSS
IceProxy::Test::MyClass::opFloatDoubleSS(const ::Test::FloatSS& p1, const ::Test::DoubleSS& p2, ::Test::FloatSS& p3, ::Test::DoubleSS& p4, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opFloatDoubleSS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opFloatDoubleSS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeFloatSS(__os, &p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeDoubleSS(__os, &p2[0], &p2[0] + p2.size());
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
                ::Test::DoubleSS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readFloatSS(__is, p3);
                ::Test::__readDoubleSS(__is, p4);
                ::Test::__readDoubleSS(__is, __ret);
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
IceProxy::Test::MyClass::opFloatDoubleSS_async(const ::Test::AMI_MyClass_opFloatDoubleSSPtr& __cb, const ::Test::FloatSS& p1, const ::Test::DoubleSS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opFloatDoubleSS_async(const ::Test::AMI_MyClass_opFloatDoubleSSPtr& __cb, const ::Test::FloatSS& p1, const ::Test::DoubleSS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::StringSS
IceProxy::Test::MyClass::opStringSS(const ::Test::StringSS& p1, const ::Test::StringSS& p2, ::Test::StringSS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opStringSS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opStringSS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeStringSS(__os, &p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeStringSS(__os, &p2[0], &p2[0] + p2.size());
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
                ::Test::StringSS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringSS(__is, p3);
                ::Test::__readStringSS(__is, __ret);
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
IceProxy::Test::MyClass::opStringSS_async(const ::Test::AMI_MyClass_opStringSSPtr& __cb, const ::Test::StringSS& p1, const ::Test::StringSS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opStringSS_async(const ::Test::AMI_MyClass_opStringSSPtr& __cb, const ::Test::StringSS& p1, const ::Test::StringSS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::StringSSS
IceProxy::Test::MyClass::opStringSSS(const ::Test::StringSSS& p1, const ::Test::StringSSS& p2, ::Test::StringSSS& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opStringSSS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opStringSSS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(p1.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeStringSSS(__os, &p1[0], &p1[0] + p1.size());
                }
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    ::Test::__writeStringSSS(__os, &p2[0], &p2[0] + p2.size());
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
                ::Test::StringSSS __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringSSS(__is, p3);
                ::Test::__readStringSSS(__is, __ret);
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
IceProxy::Test::MyClass::opStringSSS_async(const ::Test::AMI_MyClass_opStringSSSPtr& __cb, const ::Test::StringSSS& p1, const ::Test::StringSSS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opStringSSS_async(const ::Test::AMI_MyClass_opStringSSSPtr& __cb, const ::Test::StringSSS& p1, const ::Test::StringSSS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::ByteBoolD
IceProxy::Test::MyClass::opByteBoolD(const ::Test::ByteBoolD& p1, const ::Test::ByteBoolD& p2, ::Test::ByteBoolD& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opByteBoolD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opByteBoolD_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeByteBoolD(__os, p1);
                ::Test::__writeByteBoolD(__os, p2);
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
                ::Test::ByteBoolD __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readByteBoolD(__is, p3);
                ::Test::__readByteBoolD(__is, __ret);
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
IceProxy::Test::MyClass::opByteBoolD_async(const ::Test::AMI_MyClass_opByteBoolDPtr& __cb, const ::Test::ByteBoolD& p1, const ::Test::ByteBoolD& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opByteBoolD_async(const ::Test::AMI_MyClass_opByteBoolDPtr& __cb, const ::Test::ByteBoolD& p1, const ::Test::ByteBoolD& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::ShortIntD
IceProxy::Test::MyClass::opShortIntD(const ::Test::ShortIntD& p1, const ::Test::ShortIntD& p2, ::Test::ShortIntD& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opShortIntD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opShortIntD_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeShortIntD(__os, p1);
                ::Test::__writeShortIntD(__os, p2);
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
                ::Test::ShortIntD __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readShortIntD(__is, p3);
                ::Test::__readShortIntD(__is, __ret);
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
IceProxy::Test::MyClass::opShortIntD_async(const ::Test::AMI_MyClass_opShortIntDPtr& __cb, const ::Test::ShortIntD& p1, const ::Test::ShortIntD& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opShortIntD_async(const ::Test::AMI_MyClass_opShortIntDPtr& __cb, const ::Test::ShortIntD& p1, const ::Test::ShortIntD& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::LongFloatD
IceProxy::Test::MyClass::opLongFloatD(const ::Test::LongFloatD& p1, const ::Test::LongFloatD& p2, ::Test::LongFloatD& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opLongFloatD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opLongFloatD_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeLongFloatD(__os, p1);
                ::Test::__writeLongFloatD(__os, p2);
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
                ::Test::LongFloatD __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readLongFloatD(__is, p3);
                ::Test::__readLongFloatD(__is, __ret);
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
IceProxy::Test::MyClass::opLongFloatD_async(const ::Test::AMI_MyClass_opLongFloatDPtr& __cb, const ::Test::LongFloatD& p1, const ::Test::LongFloatD& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opLongFloatD_async(const ::Test::AMI_MyClass_opLongFloatDPtr& __cb, const ::Test::LongFloatD& p1, const ::Test::LongFloatD& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::StringStringD
IceProxy::Test::MyClass::opStringStringD(const ::Test::StringStringD& p1, const ::Test::StringStringD& p2, ::Test::StringStringD& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opStringStringD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opStringStringD_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeStringStringD(__os, p1);
                ::Test::__writeStringStringD(__os, p2);
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
                ::Test::StringStringD __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringStringD(__is, p3);
                ::Test::__readStringStringD(__is, __ret);
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
IceProxy::Test::MyClass::opStringStringD_async(const ::Test::AMI_MyClass_opStringStringDPtr& __cb, const ::Test::StringStringD& p1, const ::Test::StringStringD& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opStringStringD_async(const ::Test::AMI_MyClass_opStringStringDPtr& __cb, const ::Test::StringStringD& p1, const ::Test::StringStringD& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::StringMyEnumD
IceProxy::Test::MyClass::opStringMyEnumD(const ::Test::StringMyEnumD& p1, const ::Test::StringMyEnumD& p2, ::Test::StringMyEnumD& p3, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opStringMyEnumD_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opStringMyEnumD_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeStringMyEnumD(__os, p1);
                ::Test::__writeStringMyEnumD(__os, p2);
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
                ::Test::StringMyEnumD __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringMyEnumD(__is, p3);
                ::Test::__readStringMyEnumD(__is, __ret);
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
IceProxy::Test::MyClass::opStringMyEnumD_async(const ::Test::AMI_MyClass_opStringMyEnumDPtr& __cb, const ::Test::StringMyEnumD& p1, const ::Test::StringMyEnumD& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opStringMyEnumD_async(const ::Test::AMI_MyClass_opStringMyEnumDPtr& __cb, const ::Test::StringMyEnumD& p1, const ::Test::StringMyEnumD& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

::Test::IntS
IceProxy::Test::MyClass::opIntS(const ::Test::IntS& s, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opIntS_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opIntS_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(s.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&s[0], &s[0] + s.size());
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
                ::Test::IntS __ret;
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
#ifdef ICEE_HAS_AMI

bool
IceProxy::Test::MyClass::opIntS_async(const ::Test::AMI_MyClass_opIntSPtr& __cb, const ::Test::IntS& s)
{
    return __cb->__invoke(this, s, 0);
}

bool
IceProxy::Test::MyClass::opIntS_async(const ::Test::AMI_MyClass_opIntSPtr& __cb, const ::Test::IntS& s, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s, &__ctx);
}
#endif

void
IceProxy::Test::MyClass::opByteSOneway(const ::Test::ByteS& s, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opByteSOneway_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(s.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&s[0], &s[0] + s.size());
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
IceProxy::Test::MyClass::opByteSOneway_async(const ::Test::AMI_MyClass_opByteSOnewayPtr& __cb, const ::Test::ByteS& s)
{
    return __cb->__invoke(this, s, 0);
}

bool
IceProxy::Test::MyClass::opByteSOneway_async(const ::Test::AMI_MyClass_opByteSOnewayPtr& __cb, const ::Test::ByteS& s, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s, &__ctx);
}
#endif

::Test::StringStringD
IceProxy::Test::MyClass::opContext(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__MyClass__opContext_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opContext_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Test::StringStringD __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringStringD(__is, __ret);
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
IceProxy::Test::MyClass::opContext_async(const ::Test::AMI_MyClass_opContextPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::MyClass::opContext_async(const ::Test::AMI_MyClass_opContextPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

void
IceProxy::Test::MyClass::opDoubleMarshaling(::Ice::Double p1, const ::Test::DoubleS& p2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyClass__opDoubleMarshaling_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(p1);
                if(p2.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&p2[0], &p2[0] + p2.size());
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
IceProxy::Test::MyClass::opDoubleMarshaling_async(const ::Test::AMI_MyClass_opDoubleMarshalingPtr& __cb, ::Ice::Double p1, const ::Test::DoubleS& p2)
{
    return __cb->__invoke(this, p1, p2, 0);
}

bool
IceProxy::Test::MyClass::opDoubleMarshaling_async(const ::Test::AMI_MyClass_opDoubleMarshalingPtr& __cb, ::Ice::Double p1, const ::Test::DoubleS& p2, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, p1, p2, &__ctx);
}
#endif

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

void
IceProxy::Test::MyDerivedClass::opDerived(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__MyDerivedClass__opDerived_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::MyDerivedClass::opDerived_async(const ::Test::AMI_MyDerivedClass_opDerivedPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::MyDerivedClass::opDerived_async(const ::Test::AMI_MyDerivedClass_opDerivedPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

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
