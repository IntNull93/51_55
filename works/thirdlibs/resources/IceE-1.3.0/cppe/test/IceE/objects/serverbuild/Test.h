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
#include <IceE/UserExceptionFactory.h>
#include <IceE/FactoryTable.h>
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

class Base;

class B;

class C;

class A;

class D;

class E;

class F;

class I;

class J;

class H;

class Initial;

class Empty;

class AlsoEmpty;

class UnexpectedObjectExceptionTest;

class COneMember;

class CTwoMembers;

}

}

namespace Test
{

class Base;
bool operator==(const Base&, const Base&);
bool operator<(const Base&, const Base&);

class B;
bool operator==(const B&, const B&);
bool operator<(const B&, const B&);

class C;
bool operator==(const C&, const C&);
bool operator<(const C&, const C&);

class A;
bool operator==(const A&, const A&);
bool operator<(const A&, const A&);

class D;
bool operator==(const D&, const D&);
bool operator<(const D&, const D&);

class E;
bool operator==(const E&, const E&);
bool operator<(const E&, const E&);

class F;
bool operator==(const F&, const F&);
bool operator<(const F&, const F&);

class I;
bool operator==(const I&, const I&);
bool operator<(const I&, const I&);

class J;
bool operator==(const J&, const J&);
bool operator<(const J&, const J&);

class H;
bool operator==(const H&, const H&);
bool operator<(const H&, const H&);

class Initial;
bool operator==(const Initial&, const Initial&);
bool operator<(const Initial&, const Initial&);

class Empty;
bool operator==(const Empty&, const Empty&);
bool operator<(const Empty&, const Empty&);

class AlsoEmpty;
bool operator==(const AlsoEmpty&, const AlsoEmpty&);
bool operator<(const AlsoEmpty&, const AlsoEmpty&);

class UnexpectedObjectExceptionTest;
bool operator==(const UnexpectedObjectExceptionTest&, const UnexpectedObjectExceptionTest&);
bool operator<(const UnexpectedObjectExceptionTest&, const UnexpectedObjectExceptionTest&);

class COneMember;
bool operator==(const COneMember&, const COneMember&);
bool operator<(const COneMember&, const COneMember&);

class CTwoMembers;
bool operator==(const CTwoMembers&, const CTwoMembers&);
bool operator<(const CTwoMembers&, const CTwoMembers&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::Base*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Base*);

::Ice::Object* upCast(::Test::B*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::B*);

::Ice::Object* upCast(::Test::C*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::C*);

::Ice::Object* upCast(::Test::A*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::A*);

::Ice::Object* upCast(::Test::D*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::D*);

::Ice::Object* upCast(::Test::E*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::E*);

::Ice::Object* upCast(::Test::F*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::F*);

::Ice::Object* upCast(::Test::I*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::I*);

::Ice::Object* upCast(::Test::J*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::J*);

::Ice::Object* upCast(::Test::H*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::H*);

::Ice::Object* upCast(::Test::Initial*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Initial*);

::Ice::Object* upCast(::Test::Empty*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Empty*);

::Ice::Object* upCast(::Test::AlsoEmpty*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::AlsoEmpty*);

::Ice::Object* upCast(::Test::UnexpectedObjectExceptionTest*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::UnexpectedObjectExceptionTest*);

::Ice::Object* upCast(::Test::COneMember*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::COneMember*);

::Ice::Object* upCast(::Test::CTwoMembers*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::CTwoMembers*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::Base> BasePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Base> BasePrx;

void __read(::IceInternal::BasicStream*, BasePrx&);
void __patch__BasePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::B> BPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::B> BPrx;

void __read(::IceInternal::BasicStream*, BPrx&);
void __patch__BPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::C> CPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::C> CPrx;

void __read(::IceInternal::BasicStream*, CPrx&);
void __patch__CPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::A> APtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::A> APrx;

void __read(::IceInternal::BasicStream*, APrx&);
void __patch__APtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::D> DPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::D> DPrx;

void __read(::IceInternal::BasicStream*, DPrx&);
void __patch__DPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::E> EPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::E> EPrx;

void __read(::IceInternal::BasicStream*, EPrx&);
void __patch__EPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::F> FPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::F> FPrx;

void __read(::IceInternal::BasicStream*, FPrx&);
void __patch__FPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::I> IPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::I> IPrx;

void __read(::IceInternal::BasicStream*, IPrx&);
void __patch__IPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::J> JPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::J> JPrx;

void __read(::IceInternal::BasicStream*, JPrx&);
void __patch__JPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::H> HPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::H> HPrx;

void __read(::IceInternal::BasicStream*, HPrx&);
void __patch__HPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::Initial> InitialPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Initial> InitialPrx;

void __read(::IceInternal::BasicStream*, InitialPrx&);
void __patch__InitialPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::Empty> EmptyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Empty> EmptyPrx;

void __read(::IceInternal::BasicStream*, EmptyPrx&);
void __patch__EmptyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::AlsoEmpty> AlsoEmptyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::AlsoEmpty> AlsoEmptyPrx;

void __read(::IceInternal::BasicStream*, AlsoEmptyPrx&);
void __patch__AlsoEmptyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::UnexpectedObjectExceptionTest> UnexpectedObjectExceptionTestPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::UnexpectedObjectExceptionTest> UnexpectedObjectExceptionTestPrx;

void __read(::IceInternal::BasicStream*, UnexpectedObjectExceptionTestPrx&);
void __patch__UnexpectedObjectExceptionTestPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::COneMember> COneMemberPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::COneMember> COneMemberPrx;

void __read(::IceInternal::BasicStream*, COneMemberPrx&);
void __patch__COneMemberPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::CTwoMembers> CTwoMembersPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::CTwoMembers> CTwoMembersPrx;

void __read(::IceInternal::BasicStream*, CTwoMembersPrx&);
void __patch__CTwoMembersPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

struct S
{
    ::std::string str;

    bool operator==(const S&) const;
    bool operator<(const S&) const;
    bool operator!=(const S& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const S& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const S& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const S& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

class EOneMember : public ::Ice::UserException
{
public:

    EOneMember() {}
    explicit EOneMember(const ::Test::EmptyPtr&);
    virtual ~EOneMember() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Test::EmptyPtr e;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual bool __usesClasses() const;
};

static EOneMember __EOneMember_init;

class ETwoMembers : public ::Ice::UserException
{
public:

    ETwoMembers() {}
    ETwoMembers(const ::Test::EmptyPtr&, const ::Test::EmptyPtr&);
    virtual ~ETwoMembers() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Test::EmptyPtr e1;
    ::Test::EmptyPtr e2;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual bool __usesClasses() const;
};

struct SOneMember
{
    ::Test::EmptyPtr e;

    bool operator==(const SOneMember&) const;
    bool operator<(const SOneMember&) const;
    bool operator!=(const SOneMember& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const SOneMember& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SOneMember& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SOneMember& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STwoMembers
{
    ::Test::EmptyPtr e1;
    ::Test::EmptyPtr e2;

    bool operator==(const STwoMembers&) const;
    bool operator<(const STwoMembers&) const;
    bool operator!=(const STwoMembers& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const STwoMembers& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STwoMembers& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STwoMembers& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::Ice::Int, ::Test::COneMemberPtr> DOneMember;
void __writeDOneMember(::IceInternal::BasicStream*, const DOneMember&);
void __readDOneMember(::IceInternal::BasicStream*, DOneMember&);

typedef ::std::map< ::Ice::Int, ::Test::CTwoMembersPtr> DTwoMembers;
void __writeDTwoMembers(::IceInternal::BasicStream*, const DTwoMembers&);
void __readDTwoMembers(::IceInternal::BasicStream*, DTwoMembers&);

}

namespace Test
{

class Base : virtual public ::Ice::Object
{
public:

    typedef BasePrx ProxyType;
    typedef BasePtr PointerType;
    
    Base() {}
    Base(const ::Test::S&, const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Base() {}


public:

    ::Test::S theS;
    ::std::string str;
};

class A : virtual public ::Ice::Object
{
public:

    typedef APrx ProxyType;
    typedef APtr PointerType;
    
    A() {}
    A(const ::Test::BPtr&, const ::Test::CPtr&, bool);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual bool postUnmarshalInvoked(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___postUnmarshalInvoked(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::Test::BPtr theB;
    ::Test::CPtr theC;
    bool preMarshalInvoked;
};

class B : virtual public ::Test::A
{
public:

    typedef BPrx ProxyType;
    typedef BPtr PointerType;
    
    B() {}
    B(const ::Test::BPtr&, const ::Test::CPtr&, bool, const ::Test::APtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::Test::APtr theA;
};

class C : virtual public ::Ice::Object
{
public:

    typedef CPrx ProxyType;
    typedef CPtr PointerType;
    
    C() {}
    C(const ::Test::BPtr&, bool);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual bool postUnmarshalInvoked(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___postUnmarshalInvoked(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::Test::BPtr theB;
    bool preMarshalInvoked;
};

class D : virtual public ::Ice::Object
{
public:

    typedef DPrx ProxyType;
    typedef DPtr PointerType;
    
    D() {}
    D(const ::Test::APtr&, const ::Test::BPtr&, const ::Test::CPtr&, bool);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual bool postUnmarshalInvoked(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___postUnmarshalInvoked(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    ::Test::APtr theA;
    ::Test::BPtr theB;
    ::Test::CPtr theC;
    bool preMarshalInvoked;
};

class E : virtual public ::Ice::Object
{
public:

    typedef EPrx ProxyType;
    typedef EPtr PointerType;
    
    E() {}
    E(::Ice::Int, const ::std::string&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual bool checkValues(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___checkValues(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);


protected:

    ::Ice::Int i;
    ::std::string s;
};

class F : virtual public ::Ice::Object
{
public:

    typedef FPrx ProxyType;
    typedef FPtr PointerType;
    
    F() {}
    F(const ::Test::EPtr&, const ::Test::EPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual bool checkValues(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___checkValues(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);


protected:

    ::Test::EPtr e1;

public:

    ::Test::EPtr e2;
};

class I : virtual public ::Ice::Object
{
public:

    typedef IPrx ProxyType;
    typedef IPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class J : virtual public ::Test::I
{
public:

    typedef JPrx ProxyType;
    typedef JPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class H : virtual public ::Test::I
{
public:

    typedef HPrx ProxyType;
    typedef HPtr PointerType;
    
    H() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class Initial : virtual public ::Ice::Object
{
public:

    typedef InitialPrx ProxyType;
    typedef InitialPtr PointerType;
    
    Initial() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr getB1(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getB1(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BPtr getB2(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getB2(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::CPtr getC(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getC(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::DPtr getD(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getD(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::EPtr getE(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getE(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::FPtr getF(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getF(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void getAll(::Test::BPtr&, ::Test::BPtr&, ::Test::CPtr&, ::Test::DPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getAll(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::IPtr getI(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getI(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::IPtr getJ(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getJ(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::IPtr getH(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getH(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void setI(const ::Test::IPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___setI(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class Empty : virtual public ::Ice::Object
{
public:

    typedef EmptyPrx ProxyType;
    typedef EmptyPtr PointerType;
    
    Empty() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Empty() {}
};

class AlsoEmpty : virtual public ::Ice::Object
{
public:

    typedef AlsoEmptyPrx ProxyType;
    typedef AlsoEmptyPtr PointerType;
    
    AlsoEmpty() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~AlsoEmpty() {}
};

class UnexpectedObjectExceptionTest : virtual public ::Ice::Object
{
public:

    typedef UnexpectedObjectExceptionTestPrx ProxyType;
    typedef UnexpectedObjectExceptionTestPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::EmptyPtr op(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___op(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class COneMember : virtual public ::Ice::Object
{
public:

    typedef COneMemberPrx ProxyType;
    typedef COneMemberPtr PointerType;
    
    COneMember() {}
    explicit COneMember(const ::Test::EmptyPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~COneMember() {}


public:

    ::Test::EmptyPtr e;
};

class CTwoMembers : virtual public ::Ice::Object
{
public:

    typedef CTwoMembersPrx ProxyType;
    typedef CTwoMembersPtr PointerType;
    
    CTwoMembers() {}
    CTwoMembers(const ::Test::EmptyPtr&, const ::Test::EmptyPtr&);

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~CTwoMembers() {}


public:

    ::Test::EmptyPtr e1;
    ::Test::EmptyPtr e2;
};

}

namespace IceProxy
{

namespace Test
{

class Base : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Base> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_secure(bool __secure) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Base> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Base> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Base> ice_twoway() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_oneway() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_batchOneway() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_datagram() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_batchDatagram() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class A : virtual public ::IceProxy::Ice::Object
{
public:

    bool postUnmarshalInvoked()
    {
        return postUnmarshalInvoked(0);
    }
    bool postUnmarshalInvoked(const ::Ice::Context& __ctx)
    {
        return postUnmarshalInvoked(&__ctx);
    }
    
private:

    bool postUnmarshalInvoked(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<A> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_secure(bool __secure) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<A> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<A> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<A> ice_twoway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_oneway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_batchOneway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_datagram() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_batchDatagram() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_timeout(int __timeout) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class B : virtual public ::IceProxy::Test::A
{
public:
    
    ::IceInternal::ProxyHandle<B> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_secure(bool __secure) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<B> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<B> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<B> ice_twoway() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_oneway() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_batchOneway() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_datagram() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_batchDatagram() const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<B> ice_timeout(int __timeout) const
    {
        return dynamic_cast<B*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class C : virtual public ::IceProxy::Ice::Object
{
public:

    bool postUnmarshalInvoked()
    {
        return postUnmarshalInvoked(0);
    }
    bool postUnmarshalInvoked(const ::Ice::Context& __ctx)
    {
        return postUnmarshalInvoked(&__ctx);
    }
    
private:

    bool postUnmarshalInvoked(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<C> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_secure(bool __secure) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<C> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<C> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<C> ice_twoway() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_oneway() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_batchOneway() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_datagram() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_batchDatagram() const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<C> ice_timeout(int __timeout) const
    {
        return dynamic_cast<C*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class D : virtual public ::IceProxy::Ice::Object
{
public:

    bool postUnmarshalInvoked()
    {
        return postUnmarshalInvoked(0);
    }
    bool postUnmarshalInvoked(const ::Ice::Context& __ctx)
    {
        return postUnmarshalInvoked(&__ctx);
    }
    
private:

    bool postUnmarshalInvoked(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<D> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_secure(bool __secure) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<D> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<D> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<D> ice_twoway() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_oneway() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_batchOneway() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_datagram() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_batchDatagram() const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<D> ice_timeout(int __timeout) const
    {
        return dynamic_cast<D*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class E : virtual public ::IceProxy::Ice::Object
{
public:

    bool checkValues()
    {
        return checkValues(0);
    }
    bool checkValues(const ::Ice::Context& __ctx)
    {
        return checkValues(&__ctx);
    }
    
private:

    bool checkValues(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<E> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_secure(bool __secure) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<E> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<E> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<E> ice_twoway() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_oneway() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_batchOneway() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_datagram() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_batchDatagram() const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<E> ice_timeout(int __timeout) const
    {
        return dynamic_cast<E*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class F : virtual public ::IceProxy::Ice::Object
{
public:

    bool checkValues()
    {
        return checkValues(0);
    }
    bool checkValues(const ::Ice::Context& __ctx)
    {
        return checkValues(&__ctx);
    }
    
private:

    bool checkValues(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<F> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_secure(bool __secure) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<F> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<F> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<F> ice_twoway() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_oneway() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_batchOneway() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_datagram() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_batchDatagram() const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<F> ice_timeout(int __timeout) const
    {
        return dynamic_cast<F*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class I : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<I> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_secure(bool __secure) const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<I> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<I> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<I> ice_twoway() const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_oneway() const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_batchOneway() const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_datagram() const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_batchDatagram() const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<I> ice_timeout(int __timeout) const
    {
        return dynamic_cast<I*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class J : virtual public ::IceProxy::Test::I
{
public:
    
    ::IceInternal::ProxyHandle<J> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_secure(bool __secure) const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<J> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<J> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<J> ice_twoway() const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_oneway() const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_batchOneway() const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_datagram() const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_batchDatagram() const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<J> ice_timeout(int __timeout) const
    {
        return dynamic_cast<J*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class H : virtual public ::IceProxy::Test::I
{
public:
    
    ::IceInternal::ProxyHandle<H> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_secure(bool __secure) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<H> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<H> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<H> ice_twoway() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_oneway() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_batchOneway() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_datagram() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_batchDatagram() const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<H> ice_timeout(int __timeout) const
    {
        return dynamic_cast<H*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Initial : virtual public ::IceProxy::Ice::Object
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

    ::Test::BPtr getB1()
    {
        return getB1(0);
    }
    ::Test::BPtr getB1(const ::Ice::Context& __ctx)
    {
        return getB1(&__ctx);
    }
    
private:

    ::Test::BPtr getB1(const ::Ice::Context*);
    
public:

    ::Test::BPtr getB2()
    {
        return getB2(0);
    }
    ::Test::BPtr getB2(const ::Ice::Context& __ctx)
    {
        return getB2(&__ctx);
    }
    
private:

    ::Test::BPtr getB2(const ::Ice::Context*);
    
public:

    ::Test::CPtr getC()
    {
        return getC(0);
    }
    ::Test::CPtr getC(const ::Ice::Context& __ctx)
    {
        return getC(&__ctx);
    }
    
private:

    ::Test::CPtr getC(const ::Ice::Context*);
    
public:

    ::Test::DPtr getD()
    {
        return getD(0);
    }
    ::Test::DPtr getD(const ::Ice::Context& __ctx)
    {
        return getD(&__ctx);
    }
    
private:

    ::Test::DPtr getD(const ::Ice::Context*);
    
public:

    ::Test::EPtr getE()
    {
        return getE(0);
    }
    ::Test::EPtr getE(const ::Ice::Context& __ctx)
    {
        return getE(&__ctx);
    }
    
private:

    ::Test::EPtr getE(const ::Ice::Context*);
    
public:

    ::Test::FPtr getF()
    {
        return getF(0);
    }
    ::Test::FPtr getF(const ::Ice::Context& __ctx)
    {
        return getF(&__ctx);
    }
    
private:

    ::Test::FPtr getF(const ::Ice::Context*);
    
public:

    void getAll(::Test::BPtr& b1, ::Test::BPtr& b2, ::Test::CPtr& theC, ::Test::DPtr& theD)
    {
        getAll(b1, b2, theC, theD, 0);
    }
    void getAll(::Test::BPtr& b1, ::Test::BPtr& b2, ::Test::CPtr& theC, ::Test::DPtr& theD, const ::Ice::Context& __ctx)
    {
        getAll(b1, b2, theC, theD, &__ctx);
    }
    
private:

    void getAll(::Test::BPtr&, ::Test::BPtr&, ::Test::CPtr&, ::Test::DPtr&, const ::Ice::Context*);
    
public:

    ::Test::IPtr getI()
    {
        return getI(0);
    }
    ::Test::IPtr getI(const ::Ice::Context& __ctx)
    {
        return getI(&__ctx);
    }
    
private:

    ::Test::IPtr getI(const ::Ice::Context*);
    
public:

    ::Test::IPtr getJ()
    {
        return getJ(0);
    }
    ::Test::IPtr getJ(const ::Ice::Context& __ctx)
    {
        return getJ(&__ctx);
    }
    
private:

    ::Test::IPtr getJ(const ::Ice::Context*);
    
public:

    ::Test::IPtr getH()
    {
        return getH(0);
    }
    ::Test::IPtr getH(const ::Ice::Context& __ctx)
    {
        return getH(&__ctx);
    }
    
private:

    ::Test::IPtr getH(const ::Ice::Context*);
    
public:

    void setI(const ::Test::IPtr& theI)
    {
        setI(theI, 0);
    }
    void setI(const ::Test::IPtr& theI, const ::Ice::Context& __ctx)
    {
        setI(theI, &__ctx);
    }
    
private:

    void setI(const ::Test::IPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Initial> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_secure(bool __secure) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Initial> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Initial> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Initial> ice_twoway() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_oneway() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_batchOneway() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_datagram() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_batchDatagram() const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Initial> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Initial*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Empty : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Empty> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_secure(bool __secure) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Empty> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Empty> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Empty> ice_twoway() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_oneway() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_batchOneway() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_datagram() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_batchDatagram() const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Empty> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Empty*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class AlsoEmpty : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_secure(bool __secure) const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_twoway() const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_oneway() const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_batchOneway() const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_datagram() const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_batchDatagram() const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<AlsoEmpty> ice_timeout(int __timeout) const
    {
        return dynamic_cast<AlsoEmpty*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class UnexpectedObjectExceptionTest : virtual public ::IceProxy::Ice::Object
{
public:

    ::Test::EmptyPtr op()
    {
        return op(0);
    }
    ::Test::EmptyPtr op(const ::Ice::Context& __ctx)
    {
        return op(&__ctx);
    }
    
private:

    ::Test::EmptyPtr op(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_secure(bool __secure) const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_twoway() const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_oneway() const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_batchOneway() const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_datagram() const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_batchDatagram() const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<UnexpectedObjectExceptionTest> ice_timeout(int __timeout) const
    {
        return dynamic_cast<UnexpectedObjectExceptionTest*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class COneMember : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<COneMember> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_secure(bool __secure) const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<COneMember> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<COneMember> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<COneMember> ice_twoway() const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_oneway() const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_batchOneway() const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_datagram() const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_batchDatagram() const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<COneMember> ice_timeout(int __timeout) const
    {
        return dynamic_cast<COneMember*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CTwoMembers : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_secure(bool __secure) const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CTwoMembers> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CTwoMembers> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_twoway() const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_oneway() const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_batchOneway() const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_datagram() const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_batchDatagram() const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CTwoMembers> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CTwoMembers*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
