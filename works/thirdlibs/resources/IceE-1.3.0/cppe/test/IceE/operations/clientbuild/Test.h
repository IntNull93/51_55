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

#ifndef __Test_h__
#define __Test_h__

#include <IceE/ProxyF.h>
#include <IceE/ObjectF.h>
#include <IceE/Exception.h>
#include <IceE/ScopedArray.h>
#include <IceE/Proxy.h>
#include <IceE/Object.h>
#ifndef ICEE_PURE_CLIENT
#  include <IceE/Incoming.h>
#endif
#include <IceE/Outgoing.h>
#ifdef ICEE_HAS_AMI
#   include <IceE/OutgoingAsync.h>
#endif
#include <IceE/UndefSysMacros.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace Test
{

class MyClass;

class MyDerivedClass;

}

}

namespace Test
{

class MyClass;
bool operator==(const MyClass&, const MyClass&);
bool operator<(const MyClass&, const MyClass&);

class MyDerivedClass;
bool operator==(const MyDerivedClass&, const MyDerivedClass&);
bool operator<(const MyDerivedClass&, const MyDerivedClass&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::MyClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MyClass*);

::Ice::Object* upCast(::Test::MyDerivedClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MyDerivedClass*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::MyClass> MyClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MyClass> MyClassPrx;

void __read(::IceInternal::BasicStream*, MyClassPrx&);
void __patch__MyClassPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::MyDerivedClass> MyDerivedClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MyDerivedClass> MyDerivedClassPrx;

void __read(::IceInternal::BasicStream*, MyDerivedClassPrx&);
void __patch__MyDerivedClassPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

enum MyEnum
{
    enum1,
    enum2,
    enum3
};

void __write(::IceInternal::BasicStream*, MyEnum);
void __read(::IceInternal::BasicStream*, MyEnum&);

struct AnotherStruct
{
    ::std::string s;

    bool operator==(const AnotherStruct&) const;
    bool operator<(const AnotherStruct&) const;
    bool operator!=(const AnotherStruct& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const AnotherStruct& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const AnotherStruct& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const AnotherStruct& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct Structure
{
    ::Test::MyClassPrx p;
    ::Test::MyEnum e;
    ::Test::AnotherStruct s;

    bool operator==(const Structure&) const;
    bool operator<(const Structure&) const;
    bool operator!=(const Structure& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Structure& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Structure& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Structure& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::Ice::Byte> ByteS;

typedef ::std::vector<bool> BoolS;

typedef ::std::vector< ::Ice::Short> ShortS;

typedef ::std::vector< ::Ice::Int> IntS;

typedef ::std::vector< ::Ice::Long> LongS;

typedef ::std::vector< ::Ice::Float> FloatS;

typedef ::std::vector< ::Ice::Double> DoubleS;

typedef ::std::vector< ::std::string> StringS;

typedef ::std::vector< ::Test::MyEnum> MyEnumS;
void __writeMyEnumS(::IceInternal::BasicStream*, const ::Test::MyEnum*, const ::Test::MyEnum*);
void __readMyEnumS(::IceInternal::BasicStream*, MyEnumS&);

typedef ::std::vector< ::Test::MyClassPrx> MyClassS;
void __writeMyClassS(::IceInternal::BasicStream*, const ::Test::MyClassPrx*, const ::Test::MyClassPrx*);
void __readMyClassS(::IceInternal::BasicStream*, MyClassS&);

typedef ::std::vector< ::Test::ByteS> ByteSS;
void __writeByteSS(::IceInternal::BasicStream*, const ::Test::ByteS*, const ::Test::ByteS*);
void __readByteSS(::IceInternal::BasicStream*, ByteSS&);

typedef ::std::vector< ::Test::BoolS> BoolSS;
void __writeBoolSS(::IceInternal::BasicStream*, const ::Test::BoolS*, const ::Test::BoolS*);
void __readBoolSS(::IceInternal::BasicStream*, BoolSS&);

typedef ::std::vector< ::Test::ShortS> ShortSS;
void __writeShortSS(::IceInternal::BasicStream*, const ::Test::ShortS*, const ::Test::ShortS*);
void __readShortSS(::IceInternal::BasicStream*, ShortSS&);

typedef ::std::vector< ::Test::IntS> IntSS;
void __writeIntSS(::IceInternal::BasicStream*, const ::Test::IntS*, const ::Test::IntS*);
void __readIntSS(::IceInternal::BasicStream*, IntSS&);

typedef ::std::vector< ::Test::LongS> LongSS;
void __writeLongSS(::IceInternal::BasicStream*, const ::Test::LongS*, const ::Test::LongS*);
void __readLongSS(::IceInternal::BasicStream*, LongSS&);

typedef ::std::vector< ::Test::FloatS> FloatSS;
void __writeFloatSS(::IceInternal::BasicStream*, const ::Test::FloatS*, const ::Test::FloatS*);
void __readFloatSS(::IceInternal::BasicStream*, FloatSS&);

typedef ::std::vector< ::Test::DoubleS> DoubleSS;
void __writeDoubleSS(::IceInternal::BasicStream*, const ::Test::DoubleS*, const ::Test::DoubleS*);
void __readDoubleSS(::IceInternal::BasicStream*, DoubleSS&);

typedef ::std::vector< ::Test::StringS> StringSS;
void __writeStringSS(::IceInternal::BasicStream*, const ::Test::StringS*, const ::Test::StringS*);
void __readStringSS(::IceInternal::BasicStream*, StringSS&);

typedef ::std::vector< ::Test::MyEnumS> MyEnumSS;
void __writeMyEnumSS(::IceInternal::BasicStream*, const ::Test::MyEnumS*, const ::Test::MyEnumS*);
void __readMyEnumSS(::IceInternal::BasicStream*, MyEnumSS&);

typedef ::std::vector< ::Test::MyClassS> MyClassSS;
void __writeMyClassSS(::IceInternal::BasicStream*, const ::Test::MyClassS*, const ::Test::MyClassS*);
void __readMyClassSS(::IceInternal::BasicStream*, MyClassSS&);

typedef ::std::vector< ::Test::StringSS> StringSSS;
void __writeStringSSS(::IceInternal::BasicStream*, const ::Test::StringSS*, const ::Test::StringSS*);
void __readStringSSS(::IceInternal::BasicStream*, StringSSS&);

typedef ::std::map< ::Ice::Byte, bool> ByteBoolD;
void __writeByteBoolD(::IceInternal::BasicStream*, const ByteBoolD&);
void __readByteBoolD(::IceInternal::BasicStream*, ByteBoolD&);

typedef ::std::map< ::Ice::Short, ::Ice::Int> ShortIntD;
void __writeShortIntD(::IceInternal::BasicStream*, const ShortIntD&);
void __readShortIntD(::IceInternal::BasicStream*, ShortIntD&);

typedef ::std::map< ::Ice::Long, ::Ice::Float> LongFloatD;
void __writeLongFloatD(::IceInternal::BasicStream*, const LongFloatD&);
void __readLongFloatD(::IceInternal::BasicStream*, LongFloatD&);

typedef ::std::map< ::std::string, ::std::string> StringStringD;
void __writeStringStringD(::IceInternal::BasicStream*, const StringStringD&);
void __readStringStringD(::IceInternal::BasicStream*, StringStringD&);

typedef ::std::map< ::std::string, ::Test::MyEnum> StringMyEnumD;
void __writeStringMyEnumD(::IceInternal::BasicStream*, const StringMyEnumD&);
void __readStringMyEnumD(::IceInternal::BasicStream*, StringMyEnumD&);

}

namespace Test
{

class MyClass : virtual public ::Ice::Object
{
public:

    typedef MyClassPrx ProxyType;
    typedef MyClassPtr PointerType;
    
    MyClass() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void opVoid(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opVoid(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Byte opByte(::Ice::Byte, ::Ice::Byte, ::Ice::Byte&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByte(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual bool opBool(bool, bool, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBool(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Long opShortIntLong(::Ice::Short, ::Ice::Int, ::Ice::Long, ::Ice::Short&, ::Ice::Int&, ::Ice::Long&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opShortIntLong(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Double opFloatDouble(::Ice::Float, ::Ice::Double, ::Ice::Float&, ::Ice::Double&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opFloatDouble(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::std::string opString(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opString(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MyEnum opMyEnum(::Test::MyEnum, ::Test::MyEnum&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opMyEnum(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::MyClassPrx opMyClass(const ::Test::MyClassPrx&, ::Test::MyClassPrx&, ::Test::MyClassPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opMyClass(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::Structure opStruct(const ::Test::Structure&, const ::Test::Structure&, ::Test::Structure&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStruct(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteS opByteS(const ::Test::ByteS&, const ::Test::ByteS&, ::Test::ByteS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BoolS opBoolS(const ::Test::BoolS&, const ::Test::BoolS&, ::Test::BoolS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::LongS opShortIntLongS(const ::Test::ShortS&, const ::Test::IntS&, const ::Test::LongS&, ::Test::ShortS&, ::Test::IntS&, ::Test::LongS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opShortIntLongS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::DoubleS opFloatDoubleS(const ::Test::FloatS&, const ::Test::DoubleS&, ::Test::FloatS&, ::Test::DoubleS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opFloatDoubleS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringS opStringS(const ::Test::StringS&, const ::Test::StringS&, ::Test::StringS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteSS opByteSS(const ::Test::ByteSS&, const ::Test::ByteSS&, ::Test::ByteSS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteSS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BoolSS opBoolSS(const ::Test::BoolSS&, const ::Test::BoolSS&, ::Test::BoolSS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolSS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::LongSS opShortIntLongSS(const ::Test::ShortSS&, const ::Test::IntSS&, const ::Test::LongSS&, ::Test::ShortSS&, ::Test::IntSS&, ::Test::LongSS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opShortIntLongSS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::DoubleSS opFloatDoubleSS(const ::Test::FloatSS&, const ::Test::DoubleSS&, ::Test::FloatSS&, ::Test::DoubleSS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opFloatDoubleSS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringSS opStringSS(const ::Test::StringSS&, const ::Test::StringSS&, ::Test::StringSS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringSS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringSSS opStringSSS(const ::Test::StringSSS&, const ::Test::StringSSS&, ::Test::StringSSS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringSSS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteBoolD opByteBoolD(const ::Test::ByteBoolD&, const ::Test::ByteBoolD&, ::Test::ByteBoolD&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteBoolD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ShortIntD opShortIntD(const ::Test::ShortIntD&, const ::Test::ShortIntD&, ::Test::ShortIntD&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opShortIntD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::LongFloatD opLongFloatD(const ::Test::LongFloatD&, const ::Test::LongFloatD&, ::Test::LongFloatD&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opLongFloatD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringStringD opStringStringD(const ::Test::StringStringD&, const ::Test::StringStringD&, ::Test::StringStringD&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringStringD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringMyEnumD opStringMyEnumD(const ::Test::StringMyEnumD&, const ::Test::StringMyEnumD&, ::Test::StringMyEnumD&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringMyEnumD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::IntS opIntS(const ::Test::IntS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opIntS(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void opByteSOneway(const ::Test::ByteS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteSOneway(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringStringD opContext(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opContext(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void opDoubleMarshaling(::Ice::Double, const ::Test::DoubleS&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opDoubleMarshaling(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class MyDerivedClass : virtual public ::Test::MyClass
{
public:

    typedef MyDerivedClassPrx ProxyType;
    typedef MyDerivedClassPtr PointerType;
    
    MyDerivedClass() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void opDerived(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opDerived(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace Test
{
#ifdef ICEE_HAS_AMI

class AMI_MyClass_shutdown : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_shutdown> AMI_MyClass_shutdownPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opVoid : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opVoid> AMI_MyClass_opVoidPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opByte : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Byte, ::Ice::Byte) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, ::Ice::Byte, ::Ice::Byte, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opByte> AMI_MyClass_opBytePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opBool : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool, bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, bool, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opBool> AMI_MyClass_opBoolPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opShortIntLong : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long, ::Ice::Short, ::Ice::Int, ::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, ::Ice::Short, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opShortIntLong> AMI_MyClass_opShortIntLongPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opFloatDouble : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double, ::Ice::Float, ::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, ::Ice::Float, ::Ice::Double, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opFloatDouble> AMI_MyClass_opFloatDoublePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opString : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opString> AMI_MyClass_opStringPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opMyEnum : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Test::MyEnum, ::Test::MyEnum) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, ::Test::MyEnum, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opMyEnum> AMI_MyClass_opMyEnumPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opMyClass : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::MyClassPrx&, const ::Test::MyClassPrx&, const ::Test::MyClassPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::MyClassPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opMyClass> AMI_MyClass_opMyClassPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opStruct : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::Structure&, const ::Test::Structure&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::Structure&, const ::Test::Structure&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opStruct> AMI_MyClass_opStructPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opByteS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::ByteS&, const ::Test::ByteS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ByteS&, const ::Test::ByteS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opByteS> AMI_MyClass_opByteSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opBoolS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::BoolS&, const ::Test::BoolS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::BoolS&, const ::Test::BoolS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opBoolS> AMI_MyClass_opBoolSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opShortIntLongS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::LongS&, const ::Test::ShortS&, const ::Test::IntS&, const ::Test::LongS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ShortS&, const ::Test::IntS&, const ::Test::LongS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opShortIntLongS> AMI_MyClass_opShortIntLongSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opFloatDoubleS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::DoubleS&, const ::Test::FloatS&, const ::Test::DoubleS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::FloatS&, const ::Test::DoubleS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opFloatDoubleS> AMI_MyClass_opFloatDoubleSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opStringS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringS&, const ::Test::StringS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::StringS&, const ::Test::StringS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opStringS> AMI_MyClass_opStringSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opByteSS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::ByteSS&, const ::Test::ByteSS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ByteSS&, const ::Test::ByteSS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opByteSS> AMI_MyClass_opByteSSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opBoolSS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::BoolSS&, const ::Test::BoolSS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::BoolSS&, const ::Test::BoolSS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opBoolSS> AMI_MyClass_opBoolSSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opShortIntLongSS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::LongSS&, const ::Test::ShortSS&, const ::Test::IntSS&, const ::Test::LongSS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ShortSS&, const ::Test::IntSS&, const ::Test::LongSS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opShortIntLongSS> AMI_MyClass_opShortIntLongSSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opFloatDoubleSS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::DoubleSS&, const ::Test::FloatSS&, const ::Test::DoubleSS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::FloatSS&, const ::Test::DoubleSS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opFloatDoubleSS> AMI_MyClass_opFloatDoubleSSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opStringSS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringSS&, const ::Test::StringSS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::StringSS&, const ::Test::StringSS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opStringSS> AMI_MyClass_opStringSSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opStringSSS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringSSS&, const ::Test::StringSSS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::StringSSS&, const ::Test::StringSSS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opStringSSS> AMI_MyClass_opStringSSSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opByteBoolD : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::ByteBoolD&, const ::Test::ByteBoolD&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ByteBoolD&, const ::Test::ByteBoolD&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opByteBoolD> AMI_MyClass_opByteBoolDPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opShortIntD : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::ShortIntD&, const ::Test::ShortIntD&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ShortIntD&, const ::Test::ShortIntD&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opShortIntD> AMI_MyClass_opShortIntDPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opLongFloatD : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::LongFloatD&, const ::Test::LongFloatD&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::LongFloatD&, const ::Test::LongFloatD&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opLongFloatD> AMI_MyClass_opLongFloatDPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opStringStringD : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringStringD&, const ::Test::StringStringD&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::StringStringD&, const ::Test::StringStringD&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opStringStringD> AMI_MyClass_opStringStringDPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opStringMyEnumD : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringMyEnumD&, const ::Test::StringMyEnumD&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::StringMyEnumD&, const ::Test::StringMyEnumD&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opStringMyEnumD> AMI_MyClass_opStringMyEnumDPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opIntS : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::IntS&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::IntS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opIntS> AMI_MyClass_opIntSPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opByteSOneway : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Test::ByteS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opByteSOneway> AMI_MyClass_opByteSOnewayPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opContext : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringStringD&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opContext> AMI_MyClass_opContextPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyClass_opDoubleMarshaling : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyClassPrx&, ::Ice::Double, const ::Test::DoubleS&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyClass_opDoubleMarshaling> AMI_MyClass_opDoubleMarshalingPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_MyDerivedClass_opDerived : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::MyDerivedClassPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_MyDerivedClass_opDerived> AMI_MyDerivedClass_opDerivedPtr;
#endif

}

namespace IceProxy
{

namespace Test
{

class MyClass : virtual public ::IceProxy::Ice::Object
{
public:

    void shutdown()
    {
        shutdown(0);
    }
    void shutdown(const ::Ice::Context& __ctx)
    {
        shutdown(&__ctx);
    }
    
private:

    void shutdown(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool shutdown_async(const ::Test::AMI_MyClass_shutdownPtr&);
    bool shutdown_async(const ::Test::AMI_MyClass_shutdownPtr&, const ::Ice::Context&);
    #endif

    void opVoid()
    {
        opVoid(0);
    }
    void opVoid(const ::Ice::Context& __ctx)
    {
        opVoid(&__ctx);
    }
    
private:

    void opVoid(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opVoid_async(const ::Test::AMI_MyClass_opVoidPtr&);
    bool opVoid_async(const ::Test::AMI_MyClass_opVoidPtr&, const ::Ice::Context&);
    #endif

    ::Ice::Byte opByte(::Ice::Byte p1, ::Ice::Byte p2, ::Ice::Byte& p3)
    {
        return opByte(p1, p2, p3, 0);
    }
    ::Ice::Byte opByte(::Ice::Byte p1, ::Ice::Byte p2, ::Ice::Byte& p3, const ::Ice::Context& __ctx)
    {
        return opByte(p1, p2, p3, &__ctx);
    }
    
private:

    ::Ice::Byte opByte(::Ice::Byte, ::Ice::Byte, ::Ice::Byte&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByte_async(const ::Test::AMI_MyClass_opBytePtr&, ::Ice::Byte, ::Ice::Byte);
    bool opByte_async(const ::Test::AMI_MyClass_opBytePtr&, ::Ice::Byte, ::Ice::Byte, const ::Ice::Context&);
    #endif

    bool opBool(bool p1, bool p2, bool& p3)
    {
        return opBool(p1, p2, p3, 0);
    }
    bool opBool(bool p1, bool p2, bool& p3, const ::Ice::Context& __ctx)
    {
        return opBool(p1, p2, p3, &__ctx);
    }
    
private:

    bool opBool(bool, bool, bool&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBool_async(const ::Test::AMI_MyClass_opBoolPtr&, bool, bool);
    bool opBool_async(const ::Test::AMI_MyClass_opBoolPtr&, bool, bool, const ::Ice::Context&);
    #endif

    ::Ice::Long opShortIntLong(::Ice::Short p1, ::Ice::Int p2, ::Ice::Long p3, ::Ice::Short& p4, ::Ice::Int& p5, ::Ice::Long& p6)
    {
        return opShortIntLong(p1, p2, p3, p4, p5, p6, 0);
    }
    ::Ice::Long opShortIntLong(::Ice::Short p1, ::Ice::Int p2, ::Ice::Long p3, ::Ice::Short& p4, ::Ice::Int& p5, ::Ice::Long& p6, const ::Ice::Context& __ctx)
    {
        return opShortIntLong(p1, p2, p3, p4, p5, p6, &__ctx);
    }
    
private:

    ::Ice::Long opShortIntLong(::Ice::Short, ::Ice::Int, ::Ice::Long, ::Ice::Short&, ::Ice::Int&, ::Ice::Long&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opShortIntLong_async(const ::Test::AMI_MyClass_opShortIntLongPtr&, ::Ice::Short, ::Ice::Int, ::Ice::Long);
    bool opShortIntLong_async(const ::Test::AMI_MyClass_opShortIntLongPtr&, ::Ice::Short, ::Ice::Int, ::Ice::Long, const ::Ice::Context&);
    #endif

    ::Ice::Double opFloatDouble(::Ice::Float p1, ::Ice::Double p2, ::Ice::Float& p3, ::Ice::Double& p4)
    {
        return opFloatDouble(p1, p2, p3, p4, 0);
    }
    ::Ice::Double opFloatDouble(::Ice::Float p1, ::Ice::Double p2, ::Ice::Float& p3, ::Ice::Double& p4, const ::Ice::Context& __ctx)
    {
        return opFloatDouble(p1, p2, p3, p4, &__ctx);
    }
    
private:

    ::Ice::Double opFloatDouble(::Ice::Float, ::Ice::Double, ::Ice::Float&, ::Ice::Double&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opFloatDouble_async(const ::Test::AMI_MyClass_opFloatDoublePtr&, ::Ice::Float, ::Ice::Double);
    bool opFloatDouble_async(const ::Test::AMI_MyClass_opFloatDoublePtr&, ::Ice::Float, ::Ice::Double, const ::Ice::Context&);
    #endif

    ::std::string opString(const ::std::string& p1, const ::std::string& p2, ::std::string& p3)
    {
        return opString(p1, p2, p3, 0);
    }
    ::std::string opString(const ::std::string& p1, const ::std::string& p2, ::std::string& p3, const ::Ice::Context& __ctx)
    {
        return opString(p1, p2, p3, &__ctx);
    }
    
private:

    ::std::string opString(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opString_async(const ::Test::AMI_MyClass_opStringPtr&, const ::std::string&, const ::std::string&);
    bool opString_async(const ::Test::AMI_MyClass_opStringPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);
    #endif

    ::Test::MyEnum opMyEnum(::Test::MyEnum p1, ::Test::MyEnum& p2)
    {
        return opMyEnum(p1, p2, 0);
    }
    ::Test::MyEnum opMyEnum(::Test::MyEnum p1, ::Test::MyEnum& p2, const ::Ice::Context& __ctx)
    {
        return opMyEnum(p1, p2, &__ctx);
    }
    
private:

    ::Test::MyEnum opMyEnum(::Test::MyEnum, ::Test::MyEnum&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opMyEnum_async(const ::Test::AMI_MyClass_opMyEnumPtr&, ::Test::MyEnum);
    bool opMyEnum_async(const ::Test::AMI_MyClass_opMyEnumPtr&, ::Test::MyEnum, const ::Ice::Context&);
    #endif

    ::Test::MyClassPrx opMyClass(const ::Test::MyClassPrx& p1, ::Test::MyClassPrx& p2, ::Test::MyClassPrx& p3)
    {
        return opMyClass(p1, p2, p3, 0);
    }
    ::Test::MyClassPrx opMyClass(const ::Test::MyClassPrx& p1, ::Test::MyClassPrx& p2, ::Test::MyClassPrx& p3, const ::Ice::Context& __ctx)
    {
        return opMyClass(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::MyClassPrx opMyClass(const ::Test::MyClassPrx&, ::Test::MyClassPrx&, ::Test::MyClassPrx&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opMyClass_async(const ::Test::AMI_MyClass_opMyClassPtr&, const ::Test::MyClassPrx&);
    bool opMyClass_async(const ::Test::AMI_MyClass_opMyClassPtr&, const ::Test::MyClassPrx&, const ::Ice::Context&);
    #endif

    ::Test::Structure opStruct(const ::Test::Structure& p1, const ::Test::Structure& p2, ::Test::Structure& p3)
    {
        return opStruct(p1, p2, p3, 0);
    }
    ::Test::Structure opStruct(const ::Test::Structure& p1, const ::Test::Structure& p2, ::Test::Structure& p3, const ::Ice::Context& __ctx)
    {
        return opStruct(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::Structure opStruct(const ::Test::Structure&, const ::Test::Structure&, ::Test::Structure&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStruct_async(const ::Test::AMI_MyClass_opStructPtr&, const ::Test::Structure&, const ::Test::Structure&);
    bool opStruct_async(const ::Test::AMI_MyClass_opStructPtr&, const ::Test::Structure&, const ::Test::Structure&, const ::Ice::Context&);
    #endif

    ::Test::ByteS opByteS(const ::Test::ByteS& p1, const ::Test::ByteS& p2, ::Test::ByteS& p3)
    {
        return opByteS(p1, p2, p3, 0);
    }
    ::Test::ByteS opByteS(const ::Test::ByteS& p1, const ::Test::ByteS& p2, ::Test::ByteS& p3, const ::Ice::Context& __ctx)
    {
        return opByteS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::ByteS opByteS(const ::Test::ByteS&, const ::Test::ByteS&, ::Test::ByteS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteS_async(const ::Test::AMI_MyClass_opByteSPtr&, const ::Test::ByteS&, const ::Test::ByteS&);
    bool opByteS_async(const ::Test::AMI_MyClass_opByteSPtr&, const ::Test::ByteS&, const ::Test::ByteS&, const ::Ice::Context&);
    #endif

    ::Test::BoolS opBoolS(const ::Test::BoolS& p1, const ::Test::BoolS& p2, ::Test::BoolS& p3)
    {
        return opBoolS(p1, p2, p3, 0);
    }
    ::Test::BoolS opBoolS(const ::Test::BoolS& p1, const ::Test::BoolS& p2, ::Test::BoolS& p3, const ::Ice::Context& __ctx)
    {
        return opBoolS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::BoolS opBoolS(const ::Test::BoolS&, const ::Test::BoolS&, ::Test::BoolS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolS_async(const ::Test::AMI_MyClass_opBoolSPtr&, const ::Test::BoolS&, const ::Test::BoolS&);
    bool opBoolS_async(const ::Test::AMI_MyClass_opBoolSPtr&, const ::Test::BoolS&, const ::Test::BoolS&, const ::Ice::Context&);
    #endif

    ::Test::LongS opShortIntLongS(const ::Test::ShortS& p1, const ::Test::IntS& p2, const ::Test::LongS& p3, ::Test::ShortS& p4, ::Test::IntS& p5, ::Test::LongS& p6)
    {
        return opShortIntLongS(p1, p2, p3, p4, p5, p6, 0);
    }
    ::Test::LongS opShortIntLongS(const ::Test::ShortS& p1, const ::Test::IntS& p2, const ::Test::LongS& p3, ::Test::ShortS& p4, ::Test::IntS& p5, ::Test::LongS& p6, const ::Ice::Context& __ctx)
    {
        return opShortIntLongS(p1, p2, p3, p4, p5, p6, &__ctx);
    }
    
private:

    ::Test::LongS opShortIntLongS(const ::Test::ShortS&, const ::Test::IntS&, const ::Test::LongS&, ::Test::ShortS&, ::Test::IntS&, ::Test::LongS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opShortIntLongS_async(const ::Test::AMI_MyClass_opShortIntLongSPtr&, const ::Test::ShortS&, const ::Test::IntS&, const ::Test::LongS&);
    bool opShortIntLongS_async(const ::Test::AMI_MyClass_opShortIntLongSPtr&, const ::Test::ShortS&, const ::Test::IntS&, const ::Test::LongS&, const ::Ice::Context&);
    #endif

    ::Test::DoubleS opFloatDoubleS(const ::Test::FloatS& p1, const ::Test::DoubleS& p2, ::Test::FloatS& p3, ::Test::DoubleS& p4)
    {
        return opFloatDoubleS(p1, p2, p3, p4, 0);
    }
    ::Test::DoubleS opFloatDoubleS(const ::Test::FloatS& p1, const ::Test::DoubleS& p2, ::Test::FloatS& p3, ::Test::DoubleS& p4, const ::Ice::Context& __ctx)
    {
        return opFloatDoubleS(p1, p2, p3, p4, &__ctx);
    }
    
private:

    ::Test::DoubleS opFloatDoubleS(const ::Test::FloatS&, const ::Test::DoubleS&, ::Test::FloatS&, ::Test::DoubleS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opFloatDoubleS_async(const ::Test::AMI_MyClass_opFloatDoubleSPtr&, const ::Test::FloatS&, const ::Test::DoubleS&);
    bool opFloatDoubleS_async(const ::Test::AMI_MyClass_opFloatDoubleSPtr&, const ::Test::FloatS&, const ::Test::DoubleS&, const ::Ice::Context&);
    #endif

    ::Test::StringS opStringS(const ::Test::StringS& p1, const ::Test::StringS& p2, ::Test::StringS& p3)
    {
        return opStringS(p1, p2, p3, 0);
    }
    ::Test::StringS opStringS(const ::Test::StringS& p1, const ::Test::StringS& p2, ::Test::StringS& p3, const ::Ice::Context& __ctx)
    {
        return opStringS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::StringS opStringS(const ::Test::StringS&, const ::Test::StringS&, ::Test::StringS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringS_async(const ::Test::AMI_MyClass_opStringSPtr&, const ::Test::StringS&, const ::Test::StringS&);
    bool opStringS_async(const ::Test::AMI_MyClass_opStringSPtr&, const ::Test::StringS&, const ::Test::StringS&, const ::Ice::Context&);
    #endif

    ::Test::ByteSS opByteSS(const ::Test::ByteSS& p1, const ::Test::ByteSS& p2, ::Test::ByteSS& p3)
    {
        return opByteSS(p1, p2, p3, 0);
    }
    ::Test::ByteSS opByteSS(const ::Test::ByteSS& p1, const ::Test::ByteSS& p2, ::Test::ByteSS& p3, const ::Ice::Context& __ctx)
    {
        return opByteSS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::ByteSS opByteSS(const ::Test::ByteSS&, const ::Test::ByteSS&, ::Test::ByteSS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteSS_async(const ::Test::AMI_MyClass_opByteSSPtr&, const ::Test::ByteSS&, const ::Test::ByteSS&);
    bool opByteSS_async(const ::Test::AMI_MyClass_opByteSSPtr&, const ::Test::ByteSS&, const ::Test::ByteSS&, const ::Ice::Context&);
    #endif

    ::Test::BoolSS opBoolSS(const ::Test::BoolSS& p1, const ::Test::BoolSS& p2, ::Test::BoolSS& p3)
    {
        return opBoolSS(p1, p2, p3, 0);
    }
    ::Test::BoolSS opBoolSS(const ::Test::BoolSS& p1, const ::Test::BoolSS& p2, ::Test::BoolSS& p3, const ::Ice::Context& __ctx)
    {
        return opBoolSS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::BoolSS opBoolSS(const ::Test::BoolSS&, const ::Test::BoolSS&, ::Test::BoolSS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolSS_async(const ::Test::AMI_MyClass_opBoolSSPtr&, const ::Test::BoolSS&, const ::Test::BoolSS&);
    bool opBoolSS_async(const ::Test::AMI_MyClass_opBoolSSPtr&, const ::Test::BoolSS&, const ::Test::BoolSS&, const ::Ice::Context&);
    #endif

    ::Test::LongSS opShortIntLongSS(const ::Test::ShortSS& p1, const ::Test::IntSS& p2, const ::Test::LongSS& p3, ::Test::ShortSS& p4, ::Test::IntSS& p5, ::Test::LongSS& p6)
    {
        return opShortIntLongSS(p1, p2, p3, p4, p5, p6, 0);
    }
    ::Test::LongSS opShortIntLongSS(const ::Test::ShortSS& p1, const ::Test::IntSS& p2, const ::Test::LongSS& p3, ::Test::ShortSS& p4, ::Test::IntSS& p5, ::Test::LongSS& p6, const ::Ice::Context& __ctx)
    {
        return opShortIntLongSS(p1, p2, p3, p4, p5, p6, &__ctx);
    }
    
private:

    ::Test::LongSS opShortIntLongSS(const ::Test::ShortSS&, const ::Test::IntSS&, const ::Test::LongSS&, ::Test::ShortSS&, ::Test::IntSS&, ::Test::LongSS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opShortIntLongSS_async(const ::Test::AMI_MyClass_opShortIntLongSSPtr&, const ::Test::ShortSS&, const ::Test::IntSS&, const ::Test::LongSS&);
    bool opShortIntLongSS_async(const ::Test::AMI_MyClass_opShortIntLongSSPtr&, const ::Test::ShortSS&, const ::Test::IntSS&, const ::Test::LongSS&, const ::Ice::Context&);
    #endif

    ::Test::DoubleSS opFloatDoubleSS(const ::Test::FloatSS& p1, const ::Test::DoubleSS& p2, ::Test::FloatSS& p3, ::Test::DoubleSS& p4)
    {
        return opFloatDoubleSS(p1, p2, p3, p4, 0);
    }
    ::Test::DoubleSS opFloatDoubleSS(const ::Test::FloatSS& p1, const ::Test::DoubleSS& p2, ::Test::FloatSS& p3, ::Test::DoubleSS& p4, const ::Ice::Context& __ctx)
    {
        return opFloatDoubleSS(p1, p2, p3, p4, &__ctx);
    }
    
private:

    ::Test::DoubleSS opFloatDoubleSS(const ::Test::FloatSS&, const ::Test::DoubleSS&, ::Test::FloatSS&, ::Test::DoubleSS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opFloatDoubleSS_async(const ::Test::AMI_MyClass_opFloatDoubleSSPtr&, const ::Test::FloatSS&, const ::Test::DoubleSS&);
    bool opFloatDoubleSS_async(const ::Test::AMI_MyClass_opFloatDoubleSSPtr&, const ::Test::FloatSS&, const ::Test::DoubleSS&, const ::Ice::Context&);
    #endif

    ::Test::StringSS opStringSS(const ::Test::StringSS& p1, const ::Test::StringSS& p2, ::Test::StringSS& p3)
    {
        return opStringSS(p1, p2, p3, 0);
    }
    ::Test::StringSS opStringSS(const ::Test::StringSS& p1, const ::Test::StringSS& p2, ::Test::StringSS& p3, const ::Ice::Context& __ctx)
    {
        return opStringSS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::StringSS opStringSS(const ::Test::StringSS&, const ::Test::StringSS&, ::Test::StringSS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringSS_async(const ::Test::AMI_MyClass_opStringSSPtr&, const ::Test::StringSS&, const ::Test::StringSS&);
    bool opStringSS_async(const ::Test::AMI_MyClass_opStringSSPtr&, const ::Test::StringSS&, const ::Test::StringSS&, const ::Ice::Context&);
    #endif

    ::Test::StringSSS opStringSSS(const ::Test::StringSSS& p1, const ::Test::StringSSS& p2, ::Test::StringSSS& p3)
    {
        return opStringSSS(p1, p2, p3, 0);
    }
    ::Test::StringSSS opStringSSS(const ::Test::StringSSS& p1, const ::Test::StringSSS& p2, ::Test::StringSSS& p3, const ::Ice::Context& __ctx)
    {
        return opStringSSS(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::StringSSS opStringSSS(const ::Test::StringSSS&, const ::Test::StringSSS&, ::Test::StringSSS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringSSS_async(const ::Test::AMI_MyClass_opStringSSSPtr&, const ::Test::StringSSS&, const ::Test::StringSSS&);
    bool opStringSSS_async(const ::Test::AMI_MyClass_opStringSSSPtr&, const ::Test::StringSSS&, const ::Test::StringSSS&, const ::Ice::Context&);
    #endif

    ::Test::ByteBoolD opByteBoolD(const ::Test::ByteBoolD& p1, const ::Test::ByteBoolD& p2, ::Test::ByteBoolD& p3)
    {
        return opByteBoolD(p1, p2, p3, 0);
    }
    ::Test::ByteBoolD opByteBoolD(const ::Test::ByteBoolD& p1, const ::Test::ByteBoolD& p2, ::Test::ByteBoolD& p3, const ::Ice::Context& __ctx)
    {
        return opByteBoolD(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::ByteBoolD opByteBoolD(const ::Test::ByteBoolD&, const ::Test::ByteBoolD&, ::Test::ByteBoolD&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteBoolD_async(const ::Test::AMI_MyClass_opByteBoolDPtr&, const ::Test::ByteBoolD&, const ::Test::ByteBoolD&);
    bool opByteBoolD_async(const ::Test::AMI_MyClass_opByteBoolDPtr&, const ::Test::ByteBoolD&, const ::Test::ByteBoolD&, const ::Ice::Context&);
    #endif

    ::Test::ShortIntD opShortIntD(const ::Test::ShortIntD& p1, const ::Test::ShortIntD& p2, ::Test::ShortIntD& p3)
    {
        return opShortIntD(p1, p2, p3, 0);
    }
    ::Test::ShortIntD opShortIntD(const ::Test::ShortIntD& p1, const ::Test::ShortIntD& p2, ::Test::ShortIntD& p3, const ::Ice::Context& __ctx)
    {
        return opShortIntD(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::ShortIntD opShortIntD(const ::Test::ShortIntD&, const ::Test::ShortIntD&, ::Test::ShortIntD&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opShortIntD_async(const ::Test::AMI_MyClass_opShortIntDPtr&, const ::Test::ShortIntD&, const ::Test::ShortIntD&);
    bool opShortIntD_async(const ::Test::AMI_MyClass_opShortIntDPtr&, const ::Test::ShortIntD&, const ::Test::ShortIntD&, const ::Ice::Context&);
    #endif

    ::Test::LongFloatD opLongFloatD(const ::Test::LongFloatD& p1, const ::Test::LongFloatD& p2, ::Test::LongFloatD& p3)
    {
        return opLongFloatD(p1, p2, p3, 0);
    }
    ::Test::LongFloatD opLongFloatD(const ::Test::LongFloatD& p1, const ::Test::LongFloatD& p2, ::Test::LongFloatD& p3, const ::Ice::Context& __ctx)
    {
        return opLongFloatD(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::LongFloatD opLongFloatD(const ::Test::LongFloatD&, const ::Test::LongFloatD&, ::Test::LongFloatD&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opLongFloatD_async(const ::Test::AMI_MyClass_opLongFloatDPtr&, const ::Test::LongFloatD&, const ::Test::LongFloatD&);
    bool opLongFloatD_async(const ::Test::AMI_MyClass_opLongFloatDPtr&, const ::Test::LongFloatD&, const ::Test::LongFloatD&, const ::Ice::Context&);
    #endif

    ::Test::StringStringD opStringStringD(const ::Test::StringStringD& p1, const ::Test::StringStringD& p2, ::Test::StringStringD& p3)
    {
        return opStringStringD(p1, p2, p3, 0);
    }
    ::Test::StringStringD opStringStringD(const ::Test::StringStringD& p1, const ::Test::StringStringD& p2, ::Test::StringStringD& p3, const ::Ice::Context& __ctx)
    {
        return opStringStringD(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::StringStringD opStringStringD(const ::Test::StringStringD&, const ::Test::StringStringD&, ::Test::StringStringD&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringStringD_async(const ::Test::AMI_MyClass_opStringStringDPtr&, const ::Test::StringStringD&, const ::Test::StringStringD&);
    bool opStringStringD_async(const ::Test::AMI_MyClass_opStringStringDPtr&, const ::Test::StringStringD&, const ::Test::StringStringD&, const ::Ice::Context&);
    #endif

    ::Test::StringMyEnumD opStringMyEnumD(const ::Test::StringMyEnumD& p1, const ::Test::StringMyEnumD& p2, ::Test::StringMyEnumD& p3)
    {
        return opStringMyEnumD(p1, p2, p3, 0);
    }
    ::Test::StringMyEnumD opStringMyEnumD(const ::Test::StringMyEnumD& p1, const ::Test::StringMyEnumD& p2, ::Test::StringMyEnumD& p3, const ::Ice::Context& __ctx)
    {
        return opStringMyEnumD(p1, p2, p3, &__ctx);
    }
    
private:

    ::Test::StringMyEnumD opStringMyEnumD(const ::Test::StringMyEnumD&, const ::Test::StringMyEnumD&, ::Test::StringMyEnumD&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringMyEnumD_async(const ::Test::AMI_MyClass_opStringMyEnumDPtr&, const ::Test::StringMyEnumD&, const ::Test::StringMyEnumD&);
    bool opStringMyEnumD_async(const ::Test::AMI_MyClass_opStringMyEnumDPtr&, const ::Test::StringMyEnumD&, const ::Test::StringMyEnumD&, const ::Ice::Context&);
    #endif

    ::Test::IntS opIntS(const ::Test::IntS& s)
    {
        return opIntS(s, 0);
    }
    ::Test::IntS opIntS(const ::Test::IntS& s, const ::Ice::Context& __ctx)
    {
        return opIntS(s, &__ctx);
    }
    
private:

    ::Test::IntS opIntS(const ::Test::IntS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opIntS_async(const ::Test::AMI_MyClass_opIntSPtr&, const ::Test::IntS&);
    bool opIntS_async(const ::Test::AMI_MyClass_opIntSPtr&, const ::Test::IntS&, const ::Ice::Context&);
    #endif

    void opByteSOneway(const ::Test::ByteS& s)
    {
        opByteSOneway(s, 0);
    }
    void opByteSOneway(const ::Test::ByteS& s, const ::Ice::Context& __ctx)
    {
        opByteSOneway(s, &__ctx);
    }
    
private:

    void opByteSOneway(const ::Test::ByteS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteSOneway_async(const ::Test::AMI_MyClass_opByteSOnewayPtr&, const ::Test::ByteS&);
    bool opByteSOneway_async(const ::Test::AMI_MyClass_opByteSOnewayPtr&, const ::Test::ByteS&, const ::Ice::Context&);
    #endif

    ::Test::StringStringD opContext()
    {
        return opContext(0);
    }
    ::Test::StringStringD opContext(const ::Ice::Context& __ctx)
    {
        return opContext(&__ctx);
    }
    
private:

    ::Test::StringStringD opContext(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opContext_async(const ::Test::AMI_MyClass_opContextPtr&);
    bool opContext_async(const ::Test::AMI_MyClass_opContextPtr&, const ::Ice::Context&);
    #endif

    void opDoubleMarshaling(::Ice::Double p1, const ::Test::DoubleS& p2)
    {
        opDoubleMarshaling(p1, p2, 0);
    }
    void opDoubleMarshaling(::Ice::Double p1, const ::Test::DoubleS& p2, const ::Ice::Context& __ctx)
    {
        opDoubleMarshaling(p1, p2, &__ctx);
    }
    
private:

    void opDoubleMarshaling(::Ice::Double, const ::Test::DoubleS&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opDoubleMarshaling_async(const ::Test::AMI_MyClass_opDoubleMarshalingPtr&, ::Ice::Double, const ::Test::DoubleS&);
    bool opDoubleMarshaling_async(const ::Test::AMI_MyClass_opDoubleMarshalingPtr&, ::Ice::Double, const ::Test::DoubleS&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<MyClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<MyClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<MyClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<MyClass> ice_twoway() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_oneway() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_batchOneway() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_datagram() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_batchDatagram() const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<MyClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class MyDerivedClass : virtual public ::IceProxy::Test::MyClass
{
public:

    void opDerived()
    {
        opDerived(0);
    }
    void opDerived(const ::Ice::Context& __ctx)
    {
        opDerived(&__ctx);
    }
    
private:

    void opDerived(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opDerived_async(const ::Test::AMI_MyDerivedClass_opDerivedPtr&);
    bool opDerived_async(const ::Test::AMI_MyDerivedClass_opDerivedPtr&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_twoway() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_oneway() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_batchOneway() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_datagram() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_batchDatagram() const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<MyDerivedClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<MyDerivedClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
