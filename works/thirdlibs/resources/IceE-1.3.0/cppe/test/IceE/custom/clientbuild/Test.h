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
#include <IceE/FactoryTable.h>
#include <IceE/UndefSysMacros.h>
#include <deque>
#include <list>
#include <MyByteSeq.h>

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

class C;

class TestIntf;

}

}

namespace Test
{

class C;
bool operator==(const C&, const C&);
bool operator<(const C&, const C&);

class TestIntf;
bool operator==(const TestIntf&, const TestIntf&);
bool operator<(const TestIntf&, const TestIntf&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::C*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::C*);

::Ice::Object* upCast(::Test::TestIntf*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::TestIntf*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::C> CPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::C> CPrx;

void __read(::IceInternal::BasicStream*, CPrx&);
void __patch__CPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::TestIntf> TestIntfPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf> TestIntfPrx;

void __read(::IceInternal::BasicStream*, TestIntfPrx&);
void __patch__TestIntfPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

typedef ::std::vector<bool> BoolSeq;

typedef std::list<bool> BoolList;
void __writeBoolList(::IceInternal::BasicStream*, const BoolList&);
void __readBoolList(::IceInternal::BasicStream*, BoolList&);

typedef std::list< ::Test::BoolList> BoolListList;
void __writeBoolListList(::IceInternal::BasicStream*, const BoolListList&);
void __readBoolListList(::IceInternal::BasicStream*, BoolListList&);

typedef ::std::vector< ::Test::BoolList> BoolListSeq;
void __writeBoolListSeq(::IceInternal::BasicStream*, const ::Test::BoolList*, const ::Test::BoolList*);
void __readBoolListSeq(::IceInternal::BasicStream*, BoolListSeq&);

typedef std::list< ::Test::BoolSeq> BoolSeqList;
void __writeBoolSeqList(::IceInternal::BasicStream*, const BoolSeqList&);
void __readBoolSeqList(::IceInternal::BasicStream*, BoolSeqList&);

typedef ::std::vector< ::Ice::Byte> ByteSeq;

typedef std::list< ::Ice::Byte> ByteList;
void __writeByteList(::IceInternal::BasicStream*, const ByteList&);
void __readByteList(::IceInternal::BasicStream*, ByteList&);

typedef std::list< ::Test::ByteList> ByteListList;
void __writeByteListList(::IceInternal::BasicStream*, const ByteListList&);
void __readByteListList(::IceInternal::BasicStream*, ByteListList&);

typedef ::std::vector< ::Test::ByteList> ByteListSeq;
void __writeByteListSeq(::IceInternal::BasicStream*, const ::Test::ByteList*, const ::Test::ByteList*);
void __readByteListSeq(::IceInternal::BasicStream*, ByteListSeq&);

typedef std::list< ::Test::ByteSeq> ByteSeqList;
void __writeByteSeqList(::IceInternal::BasicStream*, const ByteSeqList&);
void __readByteSeqList(::IceInternal::BasicStream*, ByteSeqList&);

typedef ::std::vector< ::std::string> StringSeq;

typedef std::list<std::string> StringList;
void __writeStringList(::IceInternal::BasicStream*, const StringList&);
void __readStringList(::IceInternal::BasicStream*, StringList&);

typedef std::list< ::Test::StringList> StringListList;
void __writeStringListList(::IceInternal::BasicStream*, const StringListList&);
void __readStringListList(::IceInternal::BasicStream*, StringListList&);

typedef ::std::vector< ::Test::StringList> StringListSeq;
void __writeStringListSeq(::IceInternal::BasicStream*, const ::Test::StringList*, const ::Test::StringList*);
void __readStringListSeq(::IceInternal::BasicStream*, StringListSeq&);

typedef std::list< ::Test::StringSeq> StringSeqList;
void __writeStringSeqList(::IceInternal::BasicStream*, const StringSeqList&);
void __readStringSeqList(::IceInternal::BasicStream*, StringSeqList&);

struct Fixed
{
    ::Ice::Short s;

    bool operator==(const Fixed&) const;
    bool operator<(const Fixed&) const;
    bool operator!=(const Fixed& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Fixed& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Fixed& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Fixed& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::Test::Fixed> FixedSeq;
void __writeFixedSeq(::IceInternal::BasicStream*, const ::Test::Fixed*, const ::Test::Fixed*);
void __readFixedSeq(::IceInternal::BasicStream*, FixedSeq&);

typedef std::list< ::Test::Fixed> FixedList;
void __writeFixedList(::IceInternal::BasicStream*, const FixedList&);
void __readFixedList(::IceInternal::BasicStream*, FixedList&);

typedef std::list< ::Test::FixedList> FixedListList;
void __writeFixedListList(::IceInternal::BasicStream*, const FixedListList&);
void __readFixedListList(::IceInternal::BasicStream*, FixedListList&);

typedef ::std::vector< ::Test::FixedList> FixedListSeq;
void __writeFixedListSeq(::IceInternal::BasicStream*, const ::Test::FixedList*, const ::Test::FixedList*);
void __readFixedListSeq(::IceInternal::BasicStream*, FixedListSeq&);

typedef std::list< ::Test::FixedSeq> FixedSeqList;
void __writeFixedSeqList(::IceInternal::BasicStream*, const FixedSeqList&);
void __readFixedSeqList(::IceInternal::BasicStream*, FixedSeqList&);

struct Variable
{
    ::std::string s;
    ::Test::BoolList bl;
    std::list<std::string> ss;

    bool operator==(const Variable&) const;
    bool operator<(const Variable&) const;
    bool operator!=(const Variable& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Variable& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Variable& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Variable& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::Test::Variable> VariableSeq;
void __writeVariableSeq(::IceInternal::BasicStream*, const ::Test::Variable*, const ::Test::Variable*);
void __readVariableSeq(::IceInternal::BasicStream*, VariableSeq&);

typedef std::list< ::Test::Variable> VariableList;
void __writeVariableList(::IceInternal::BasicStream*, const VariableList&);
void __readVariableList(::IceInternal::BasicStream*, VariableList&);

typedef std::list< ::Test::VariableList> VariableListList;
void __writeVariableListList(::IceInternal::BasicStream*, const VariableListList&);
void __readVariableListList(::IceInternal::BasicStream*, VariableListList&);

typedef ::std::vector< ::Test::VariableList> VariableListSeq;
void __writeVariableListSeq(::IceInternal::BasicStream*, const ::Test::VariableList*, const ::Test::VariableList*);
void __readVariableListSeq(::IceInternal::BasicStream*, VariableListSeq&);

typedef std::list< ::Test::VariableSeq> VariableSeqList;
void __writeVariableSeqList(::IceInternal::BasicStream*, const VariableSeqList&);
void __readVariableSeqList(::IceInternal::BasicStream*, VariableSeqList&);

typedef ::std::map< ::std::string, ::std::string> StringStringDict;
void __writeStringStringDict(::IceInternal::BasicStream*, const StringStringDict&);
void __readStringStringDict(::IceInternal::BasicStream*, StringStringDict&);

typedef ::std::vector< ::Test::StringStringDict> StringStringDictSeq;
void __writeStringStringDictSeq(::IceInternal::BasicStream*, const ::Test::StringStringDict*, const ::Test::StringStringDict*);
void __readStringStringDictSeq(::IceInternal::BasicStream*, StringStringDictSeq&);

typedef std::list< ::Test::StringStringDict> StringStringDictList;
void __writeStringStringDictList(::IceInternal::BasicStream*, const StringStringDictList&);
void __readStringStringDictList(::IceInternal::BasicStream*, StringStringDictList&);

typedef std::list< ::Test::StringStringDictList> StringStringDictListList;
void __writeStringStringDictListList(::IceInternal::BasicStream*, const StringStringDictListList&);
void __readStringStringDictListList(::IceInternal::BasicStream*, StringStringDictListList&);

typedef ::std::vector< ::Test::StringStringDictList> StringStringDictListSeq;
void __writeStringStringDictListSeq(::IceInternal::BasicStream*, const ::Test::StringStringDictList*, const ::Test::StringStringDictList*);
void __readStringStringDictListSeq(::IceInternal::BasicStream*, StringStringDictListSeq&);

typedef std::list< ::Test::StringStringDictSeq> StringStringDictSeqList;
void __writeStringStringDictSeqList(::IceInternal::BasicStream*, const StringStringDictSeqList&);
void __readStringStringDictSeqList(::IceInternal::BasicStream*, StringStringDictSeqList&);

enum E
{
    E1,
    E2,
    E3
};

void __write(::IceInternal::BasicStream*, E);
void __read(::IceInternal::BasicStream*, E&);

typedef ::std::vector< ::Test::E> ESeq;
void __writeESeq(::IceInternal::BasicStream*, const ::Test::E*, const ::Test::E*);
void __readESeq(::IceInternal::BasicStream*, ESeq&);

typedef std::list< ::Test::E> EList;
void __writeEList(::IceInternal::BasicStream*, const EList&);
void __readEList(::IceInternal::BasicStream*, EList&);

typedef std::list< ::Test::EList> EListList;
void __writeEListList(::IceInternal::BasicStream*, const EListList&);
void __readEListList(::IceInternal::BasicStream*, EListList&);

typedef ::std::vector< ::Test::EList> EListSeq;
void __writeEListSeq(::IceInternal::BasicStream*, const ::Test::EList*, const ::Test::EList*);
void __readEListSeq(::IceInternal::BasicStream*, EListSeq&);

typedef std::list< ::Test::ESeq> ESeqList;
void __writeESeqList(::IceInternal::BasicStream*, const ESeqList&);
void __readESeqList(::IceInternal::BasicStream*, ESeqList&);

typedef ::std::vector< ::Test::CPtr> CSeq;
void __writeCSeq(::IceInternal::BasicStream*, const ::Test::CPtr*, const ::Test::CPtr*);
void __readCSeq(::IceInternal::BasicStream*, CSeq&);

typedef std::list< ::Test::CPtr> CList;
void __writeCList(::IceInternal::BasicStream*, const CList&);
void __readCList(::IceInternal::BasicStream*, CList&);

typedef std::list< ::Test::CList> CListList;
void __writeCListList(::IceInternal::BasicStream*, const CListList&);
void __readCListList(::IceInternal::BasicStream*, CListList&);

typedef ::std::vector< ::Test::CList> CListSeq;
void __writeCListSeq(::IceInternal::BasicStream*, const ::Test::CList*, const ::Test::CList*);
void __readCListSeq(::IceInternal::BasicStream*, CListSeq&);

typedef std::list< ::Test::CSeq> CSeqList;
void __writeCSeqList(::IceInternal::BasicStream*, const CSeqList&);
void __readCSeqList(::IceInternal::BasicStream*, CSeqList&);

typedef ::std::vector< ::Test::CPrx> CPrxSeq;
void __writeCPrxSeq(::IceInternal::BasicStream*, const ::Test::CPrx*, const ::Test::CPrx*);
void __readCPrxSeq(::IceInternal::BasicStream*, CPrxSeq&);

typedef std::list< ::Test::CPrx> CPrxList;
void __writeCPrxList(::IceInternal::BasicStream*, const CPrxList&);
void __readCPrxList(::IceInternal::BasicStream*, CPrxList&);

typedef std::list< ::Test::CPrxList> CPrxListList;
void __writeCPrxListList(::IceInternal::BasicStream*, const CPrxListList&);
void __readCPrxListList(::IceInternal::BasicStream*, CPrxListList&);

typedef ::std::vector< ::Test::CPrxList> CPrxListSeq;
void __writeCPrxListSeq(::IceInternal::BasicStream*, const ::Test::CPrxList*, const ::Test::CPrxList*);
void __readCPrxListSeq(::IceInternal::BasicStream*, CPrxListSeq&);

typedef std::list< ::Test::CPrxSeq> CPrxSeqList;
void __writeCPrxSeqList(::IceInternal::BasicStream*, const CPrxSeqList&);
void __readCPrxSeqList(::IceInternal::BasicStream*, CPrxSeqList&);

}

namespace Test
{

class C : virtual public ::Ice::Object
{
public:

    typedef CPrx ProxyType;
    typedef CPtr PointerType;
    
    C() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~C() {}
};

class TestIntf : virtual public ::Ice::Object
{
public:

    typedef TestIntfPrx ProxyType;
    typedef TestIntfPtr PointerType;
    
    TestIntf() {}

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::BoolSeq opBoolArray(const ::std::pair<const bool*, const bool*>&, ::Test::BoolSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolArray(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteList opByteArray(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, ::Test::ByteList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteArray(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::VariableList opVariableArray(const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>&, ::Test::VariableList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opVariableArray(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BoolSeq opBoolRange(const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>&, ::Test::BoolSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolRange(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteList opByteRange(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, ::Test::ByteList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteRange(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::VariableList opVariableRange(const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>&, ::Test::VariableList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opVariableRange(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BoolSeq opBoolRangeType(const ::std::pair<const bool*, const bool*>&, ::Test::BoolSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolRangeType(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteList opByteRangeType(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, ::Test::ByteList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteRangeType(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::VariableList opVariableRangeType(const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>&, ::Test::VariableList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opVariableRangeType(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque<bool> opBoolSeq(const std::deque<bool>&, std::deque<bool>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::BoolList opBoolList(const ::Test::BoolList&, ::Test::BoolList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opBoolList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Ice::Byte> opByteSeq(const std::deque< ::Ice::Byte>&, std::deque< ::Ice::Byte>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::ByteList opByteList(const ::Test::ByteList&, ::Test::ByteList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opByteList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual MyByteSeq opMyByteSeq(const MyByteSeq&, MyByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opMyByteSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque<std::string> opStringSeq(const std::deque<std::string>&, std::deque<std::string>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringList opStringList(const ::Test::StringList&, ::Test::StringList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Test::Fixed> opFixedSeq(const std::deque< ::Test::Fixed>&, std::deque< ::Test::Fixed>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opFixedSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::FixedList opFixedList(const ::Test::FixedList&, ::Test::FixedList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opFixedList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Test::Variable> opVariableSeq(const std::deque< ::Test::Variable>&, std::deque< ::Test::Variable>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opVariableSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::VariableList opVariableList(const ::Test::VariableList&, ::Test::VariableList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opVariableList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Test::StringStringDict> opStringStringDictSeq(const std::deque< ::Test::StringStringDict>&, std::deque< ::Test::StringStringDict>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringStringDictSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::StringStringDictList opStringStringDictList(const ::Test::StringStringDictList&, ::Test::StringStringDictList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opStringStringDictList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Test::E> opESeq(const std::deque< ::Test::E>&, std::deque< ::Test::E>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opESeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::EList opEList(const ::Test::EList&, ::Test::EList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opEList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Test::CPrx> opCPrxSeq(const std::deque< ::Test::CPrx>&, std::deque< ::Test::CPrx>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opCPrxSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::CPrxList opCPrxList(const ::Test::CPrxList&, ::Test::CPrxList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opCPrxList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual std::deque< ::Test::CPtr> opCSeq(const std::deque< ::Test::CPtr>&, std::deque< ::Test::CPtr>&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opCSeq(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Test::CList opCList(const ::Test::CList&, ::Test::CList&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___opCList(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);
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

class AMI_TestIntf_opBoolArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::BoolSeq&, const ::Test::BoolSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair<const bool*, const bool*>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opBoolArray> AMI_TestIntf_opBoolArrayPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opByteArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opByteArray> AMI_TestIntf_opByteArrayPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opVariableArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::VariableList&, const ::Test::VariableList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opVariableArray> AMI_TestIntf_opVariableArrayPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opBoolRange : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::BoolSeq&, const ::Test::BoolSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opBoolRange> AMI_TestIntf_opBoolRangePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opByteRange : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opByteRange> AMI_TestIntf_opByteRangePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opVariableRange : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::VariableList&, const ::Test::VariableList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opVariableRange> AMI_TestIntf_opVariableRangePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opBoolRangeType : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::BoolSeq&, const ::Test::BoolSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair<const bool*, const bool*>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opBoolRangeType> AMI_TestIntf_opBoolRangeTypePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opByteRangeType : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::ByteList&, const ::Test::ByteList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opByteRangeType> AMI_TestIntf_opByteRangeTypePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opVariableRangeType : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::VariableList&, const ::Test::VariableList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opVariableRangeType> AMI_TestIntf_opVariableRangeTypePtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opBoolSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque<bool>&, const std::deque<bool>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque<bool>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opBoolSeq> AMI_TestIntf_opBoolSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opBoolList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::BoolList&, const ::Test::BoolList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::BoolList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opBoolList> AMI_TestIntf_opBoolListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opByteSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Ice::Byte>&, const std::deque< ::Ice::Byte>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Ice::Byte>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opByteSeq> AMI_TestIntf_opByteSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opByteList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::ByteList&, const ::Test::ByteList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::ByteList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opByteList> AMI_TestIntf_opByteListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opMyByteSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const MyByteSeq&, const MyByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const MyByteSeq&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opMyByteSeq> AMI_TestIntf_opMyByteSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opStringSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque<std::string>&, const std::deque<std::string>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque<std::string>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opStringSeq> AMI_TestIntf_opStringSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opStringList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringList&, const ::Test::StringList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::StringList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opStringList> AMI_TestIntf_opStringListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opFixedSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Test::Fixed>&, const std::deque< ::Test::Fixed>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Test::Fixed>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opFixedSeq> AMI_TestIntf_opFixedSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opFixedList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::FixedList&, const ::Test::FixedList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::FixedList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opFixedList> AMI_TestIntf_opFixedListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opVariableSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Test::Variable>&, const std::deque< ::Test::Variable>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Test::Variable>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opVariableSeq> AMI_TestIntf_opVariableSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opVariableList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::VariableList&, const ::Test::VariableList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::VariableList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opVariableList> AMI_TestIntf_opVariableListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opStringStringDictSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Test::StringStringDict>&, const std::deque< ::Test::StringStringDict>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Test::StringStringDict>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opStringStringDictSeq> AMI_TestIntf_opStringStringDictSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opStringStringDictList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::StringStringDictList&, const ::Test::StringStringDictList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::StringStringDictList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opStringStringDictList> AMI_TestIntf_opStringStringDictListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opESeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Test::E>&, const std::deque< ::Test::E>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Test::E>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opESeq> AMI_TestIntf_opESeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opEList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::EList&, const ::Test::EList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::EList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opEList> AMI_TestIntf_opEListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opCPrxSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Test::CPrx>&, const std::deque< ::Test::CPrx>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Test::CPrx>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opCPrxSeq> AMI_TestIntf_opCPrxSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opCPrxList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::CPrxList&, const ::Test::CPrxList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::CPrxList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opCPrxList> AMI_TestIntf_opCPrxListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opCSeq : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const std::deque< ::Test::CPtr>&, const std::deque< ::Test::CPtr>&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const std::deque< ::Test::CPtr>&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opCSeq> AMI_TestIntf_opCSeqPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_opCList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Test::CList&, const ::Test::CList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Test::CList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_opCList> AMI_TestIntf_opCListPtr;
#endif
#ifdef ICEE_HAS_AMI

class AMI_TestIntf_shutdown : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_shutdown> AMI_TestIntf_shutdownPtr;
#endif

}

namespace IceProxy
{

namespace Test
{

class C : virtual public ::IceProxy::Ice::Object
{
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

class TestIntf : virtual public ::IceProxy::Ice::Object
{
public:

    ::Test::BoolSeq opBoolArray(const ::std::pair<const bool*, const bool*>& inSeq, ::Test::BoolSeq& outSeq)
    {
        return opBoolArray(inSeq, outSeq, 0);
    }
    ::Test::BoolSeq opBoolArray(const ::std::pair<const bool*, const bool*>& inSeq, ::Test::BoolSeq& outSeq, const ::Ice::Context& __ctx)
    {
        return opBoolArray(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::BoolSeq opBoolArray(const ::std::pair<const bool*, const bool*>&, ::Test::BoolSeq&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolArray_async(const ::Test::AMI_TestIntf_opBoolArrayPtr&, const ::std::pair<const bool*, const bool*>&);
    bool opBoolArray_async(const ::Test::AMI_TestIntf_opBoolArrayPtr&, const ::std::pair<const bool*, const bool*>&, const ::Ice::Context&);
    #endif

    ::Test::ByteList opByteArray(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& inSeq, ::Test::ByteList& outSeq)
    {
        return opByteArray(inSeq, outSeq, 0);
    }
    ::Test::ByteList opByteArray(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context& __ctx)
    {
        return opByteArray(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::ByteList opByteArray(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, ::Test::ByteList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteArray_async(const ::Test::AMI_TestIntf_opByteArrayPtr&, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&);
    bool opByteArray_async(const ::Test::AMI_TestIntf_opByteArrayPtr&, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>&, const ::Ice::Context&);
    #endif

    ::Test::VariableList opVariableArray(const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>& inSeq, ::Test::VariableList& outSeq)
    {
        return opVariableArray(inSeq, outSeq, 0);
    }
    ::Test::VariableList opVariableArray(const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context& __ctx)
    {
        return opVariableArray(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::VariableList opVariableArray(const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>&, ::Test::VariableList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opVariableArray_async(const ::Test::AMI_TestIntf_opVariableArrayPtr&, const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>&);
    bool opVariableArray_async(const ::Test::AMI_TestIntf_opVariableArrayPtr&, const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>&, const ::Ice::Context&);
    #endif

    ::Test::BoolSeq opBoolRange(const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>& inSeq, ::Test::BoolSeq& outSeq)
    {
        return opBoolRange(inSeq, outSeq, 0);
    }
    ::Test::BoolSeq opBoolRange(const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>& inSeq, ::Test::BoolSeq& outSeq, const ::Ice::Context& __ctx)
    {
        return opBoolRange(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::BoolSeq opBoolRange(const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>&, ::Test::BoolSeq&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolRange_async(const ::Test::AMI_TestIntf_opBoolRangePtr&, const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>&);
    bool opBoolRange_async(const ::Test::AMI_TestIntf_opBoolRangePtr&, const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>&, const ::Ice::Context&);
    #endif

    ::Test::ByteList opByteRange(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, ::Test::ByteList& outSeq)
    {
        return opByteRange(inSeq, outSeq, 0);
    }
    ::Test::ByteList opByteRange(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context& __ctx)
    {
        return opByteRange(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::ByteList opByteRange(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, ::Test::ByteList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteRange_async(const ::Test::AMI_TestIntf_opByteRangePtr&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&);
    bool opByteRange_async(const ::Test::AMI_TestIntf_opByteRangePtr&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, const ::Ice::Context&);
    #endif

    ::Test::VariableList opVariableRange(const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>& inSeq, ::Test::VariableList& outSeq)
    {
        return opVariableRange(inSeq, outSeq, 0);
    }
    ::Test::VariableList opVariableRange(const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context& __ctx)
    {
        return opVariableRange(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::VariableList opVariableRange(const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>&, ::Test::VariableList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opVariableRange_async(const ::Test::AMI_TestIntf_opVariableRangePtr&, const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>&);
    bool opVariableRange_async(const ::Test::AMI_TestIntf_opVariableRangePtr&, const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>&, const ::Ice::Context&);
    #endif

    ::Test::BoolSeq opBoolRangeType(const ::std::pair<const bool*, const bool*>& inSeq, ::Test::BoolSeq& outSeq)
    {
        return opBoolRangeType(inSeq, outSeq, 0);
    }
    ::Test::BoolSeq opBoolRangeType(const ::std::pair<const bool*, const bool*>& inSeq, ::Test::BoolSeq& outSeq, const ::Ice::Context& __ctx)
    {
        return opBoolRangeType(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::BoolSeq opBoolRangeType(const ::std::pair<const bool*, const bool*>&, ::Test::BoolSeq&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolRangeType_async(const ::Test::AMI_TestIntf_opBoolRangeTypePtr&, const ::std::pair<const bool*, const bool*>&);
    bool opBoolRangeType_async(const ::Test::AMI_TestIntf_opBoolRangeTypePtr&, const ::std::pair<const bool*, const bool*>&, const ::Ice::Context&);
    #endif

    ::Test::ByteList opByteRangeType(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, ::Test::ByteList& outSeq)
    {
        return opByteRangeType(inSeq, outSeq, 0);
    }
    ::Test::ByteList opByteRangeType(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context& __ctx)
    {
        return opByteRangeType(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::ByteList opByteRangeType(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, ::Test::ByteList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteRangeType_async(const ::Test::AMI_TestIntf_opByteRangeTypePtr&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&);
    bool opByteRangeType_async(const ::Test::AMI_TestIntf_opByteRangeTypePtr&, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>&, const ::Ice::Context&);
    #endif

    ::Test::VariableList opVariableRangeType(const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>& inSeq, ::Test::VariableList& outSeq)
    {
        return opVariableRangeType(inSeq, outSeq, 0);
    }
    ::Test::VariableList opVariableRangeType(const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context& __ctx)
    {
        return opVariableRangeType(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::VariableList opVariableRangeType(const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>&, ::Test::VariableList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opVariableRangeType_async(const ::Test::AMI_TestIntf_opVariableRangeTypePtr&, const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>&);
    bool opVariableRangeType_async(const ::Test::AMI_TestIntf_opVariableRangeTypePtr&, const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>&, const ::Ice::Context&);
    #endif

    std::deque<bool> opBoolSeq(const std::deque<bool>& inSeq, std::deque<bool>& outSeq)
    {
        return opBoolSeq(inSeq, outSeq, 0);
    }
    std::deque<bool> opBoolSeq(const std::deque<bool>& inSeq, std::deque<bool>& outSeq, const ::Ice::Context& __ctx)
    {
        return opBoolSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque<bool> opBoolSeq(const std::deque<bool>&, std::deque<bool>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolSeq_async(const ::Test::AMI_TestIntf_opBoolSeqPtr&, const std::deque<bool>&);
    bool opBoolSeq_async(const ::Test::AMI_TestIntf_opBoolSeqPtr&, const std::deque<bool>&, const ::Ice::Context&);
    #endif

    ::Test::BoolList opBoolList(const ::Test::BoolList& inSeq, ::Test::BoolList& outSeq)
    {
        return opBoolList(inSeq, outSeq, 0);
    }
    ::Test::BoolList opBoolList(const ::Test::BoolList& inSeq, ::Test::BoolList& outSeq, const ::Ice::Context& __ctx)
    {
        return opBoolList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::BoolList opBoolList(const ::Test::BoolList&, ::Test::BoolList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opBoolList_async(const ::Test::AMI_TestIntf_opBoolListPtr&, const ::Test::BoolList&);
    bool opBoolList_async(const ::Test::AMI_TestIntf_opBoolListPtr&, const ::Test::BoolList&, const ::Ice::Context&);
    #endif

    std::deque< ::Ice::Byte> opByteSeq(const std::deque< ::Ice::Byte>& inSeq, std::deque< ::Ice::Byte>& outSeq)
    {
        return opByteSeq(inSeq, outSeq, 0);
    }
    std::deque< ::Ice::Byte> opByteSeq(const std::deque< ::Ice::Byte>& inSeq, std::deque< ::Ice::Byte>& outSeq, const ::Ice::Context& __ctx)
    {
        return opByteSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Ice::Byte> opByteSeq(const std::deque< ::Ice::Byte>&, std::deque< ::Ice::Byte>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteSeq_async(const ::Test::AMI_TestIntf_opByteSeqPtr&, const std::deque< ::Ice::Byte>&);
    bool opByteSeq_async(const ::Test::AMI_TestIntf_opByteSeqPtr&, const std::deque< ::Ice::Byte>&, const ::Ice::Context&);
    #endif

    ::Test::ByteList opByteList(const ::Test::ByteList& inSeq, ::Test::ByteList& outSeq)
    {
        return opByteList(inSeq, outSeq, 0);
    }
    ::Test::ByteList opByteList(const ::Test::ByteList& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context& __ctx)
    {
        return opByteList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::ByteList opByteList(const ::Test::ByteList&, ::Test::ByteList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opByteList_async(const ::Test::AMI_TestIntf_opByteListPtr&, const ::Test::ByteList&);
    bool opByteList_async(const ::Test::AMI_TestIntf_opByteListPtr&, const ::Test::ByteList&, const ::Ice::Context&);
    #endif

    MyByteSeq opMyByteSeq(const MyByteSeq& inSeq, MyByteSeq& outSeq)
    {
        return opMyByteSeq(inSeq, outSeq, 0);
    }
    MyByteSeq opMyByteSeq(const MyByteSeq& inSeq, MyByteSeq& outSeq, const ::Ice::Context& __ctx)
    {
        return opMyByteSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    MyByteSeq opMyByteSeq(const MyByteSeq&, MyByteSeq&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opMyByteSeq_async(const ::Test::AMI_TestIntf_opMyByteSeqPtr&, const MyByteSeq&);
    bool opMyByteSeq_async(const ::Test::AMI_TestIntf_opMyByteSeqPtr&, const MyByteSeq&, const ::Ice::Context&);
    #endif

    std::deque<std::string> opStringSeq(const std::deque<std::string>& inSeq, std::deque<std::string>& outSeq)
    {
        return opStringSeq(inSeq, outSeq, 0);
    }
    std::deque<std::string> opStringSeq(const std::deque<std::string>& inSeq, std::deque<std::string>& outSeq, const ::Ice::Context& __ctx)
    {
        return opStringSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque<std::string> opStringSeq(const std::deque<std::string>&, std::deque<std::string>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringSeq_async(const ::Test::AMI_TestIntf_opStringSeqPtr&, const std::deque<std::string>&);
    bool opStringSeq_async(const ::Test::AMI_TestIntf_opStringSeqPtr&, const std::deque<std::string>&, const ::Ice::Context&);
    #endif

    ::Test::StringList opStringList(const ::Test::StringList& inSeq, ::Test::StringList& outSeq)
    {
        return opStringList(inSeq, outSeq, 0);
    }
    ::Test::StringList opStringList(const ::Test::StringList& inSeq, ::Test::StringList& outSeq, const ::Ice::Context& __ctx)
    {
        return opStringList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::StringList opStringList(const ::Test::StringList&, ::Test::StringList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringList_async(const ::Test::AMI_TestIntf_opStringListPtr&, const ::Test::StringList&);
    bool opStringList_async(const ::Test::AMI_TestIntf_opStringListPtr&, const ::Test::StringList&, const ::Ice::Context&);
    #endif

    std::deque< ::Test::Fixed> opFixedSeq(const std::deque< ::Test::Fixed>& inSeq, std::deque< ::Test::Fixed>& outSeq)
    {
        return opFixedSeq(inSeq, outSeq, 0);
    }
    std::deque< ::Test::Fixed> opFixedSeq(const std::deque< ::Test::Fixed>& inSeq, std::deque< ::Test::Fixed>& outSeq, const ::Ice::Context& __ctx)
    {
        return opFixedSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Test::Fixed> opFixedSeq(const std::deque< ::Test::Fixed>&, std::deque< ::Test::Fixed>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opFixedSeq_async(const ::Test::AMI_TestIntf_opFixedSeqPtr&, const std::deque< ::Test::Fixed>&);
    bool opFixedSeq_async(const ::Test::AMI_TestIntf_opFixedSeqPtr&, const std::deque< ::Test::Fixed>&, const ::Ice::Context&);
    #endif

    ::Test::FixedList opFixedList(const ::Test::FixedList& inSeq, ::Test::FixedList& outSeq)
    {
        return opFixedList(inSeq, outSeq, 0);
    }
    ::Test::FixedList opFixedList(const ::Test::FixedList& inSeq, ::Test::FixedList& outSeq, const ::Ice::Context& __ctx)
    {
        return opFixedList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::FixedList opFixedList(const ::Test::FixedList&, ::Test::FixedList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opFixedList_async(const ::Test::AMI_TestIntf_opFixedListPtr&, const ::Test::FixedList&);
    bool opFixedList_async(const ::Test::AMI_TestIntf_opFixedListPtr&, const ::Test::FixedList&, const ::Ice::Context&);
    #endif

    std::deque< ::Test::Variable> opVariableSeq(const std::deque< ::Test::Variable>& inSeq, std::deque< ::Test::Variable>& outSeq)
    {
        return opVariableSeq(inSeq, outSeq, 0);
    }
    std::deque< ::Test::Variable> opVariableSeq(const std::deque< ::Test::Variable>& inSeq, std::deque< ::Test::Variable>& outSeq, const ::Ice::Context& __ctx)
    {
        return opVariableSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Test::Variable> opVariableSeq(const std::deque< ::Test::Variable>&, std::deque< ::Test::Variable>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opVariableSeq_async(const ::Test::AMI_TestIntf_opVariableSeqPtr&, const std::deque< ::Test::Variable>&);
    bool opVariableSeq_async(const ::Test::AMI_TestIntf_opVariableSeqPtr&, const std::deque< ::Test::Variable>&, const ::Ice::Context&);
    #endif

    ::Test::VariableList opVariableList(const ::Test::VariableList& inSeq, ::Test::VariableList& outSeq)
    {
        return opVariableList(inSeq, outSeq, 0);
    }
    ::Test::VariableList opVariableList(const ::Test::VariableList& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context& __ctx)
    {
        return opVariableList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::VariableList opVariableList(const ::Test::VariableList&, ::Test::VariableList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opVariableList_async(const ::Test::AMI_TestIntf_opVariableListPtr&, const ::Test::VariableList&);
    bool opVariableList_async(const ::Test::AMI_TestIntf_opVariableListPtr&, const ::Test::VariableList&, const ::Ice::Context&);
    #endif

    std::deque< ::Test::StringStringDict> opStringStringDictSeq(const std::deque< ::Test::StringStringDict>& inSeq, std::deque< ::Test::StringStringDict>& outSeq)
    {
        return opStringStringDictSeq(inSeq, outSeq, 0);
    }
    std::deque< ::Test::StringStringDict> opStringStringDictSeq(const std::deque< ::Test::StringStringDict>& inSeq, std::deque< ::Test::StringStringDict>& outSeq, const ::Ice::Context& __ctx)
    {
        return opStringStringDictSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Test::StringStringDict> opStringStringDictSeq(const std::deque< ::Test::StringStringDict>&, std::deque< ::Test::StringStringDict>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringStringDictSeq_async(const ::Test::AMI_TestIntf_opStringStringDictSeqPtr&, const std::deque< ::Test::StringStringDict>&);
    bool opStringStringDictSeq_async(const ::Test::AMI_TestIntf_opStringStringDictSeqPtr&, const std::deque< ::Test::StringStringDict>&, const ::Ice::Context&);
    #endif

    ::Test::StringStringDictList opStringStringDictList(const ::Test::StringStringDictList& inSeq, ::Test::StringStringDictList& outSeq)
    {
        return opStringStringDictList(inSeq, outSeq, 0);
    }
    ::Test::StringStringDictList opStringStringDictList(const ::Test::StringStringDictList& inSeq, ::Test::StringStringDictList& outSeq, const ::Ice::Context& __ctx)
    {
        return opStringStringDictList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::StringStringDictList opStringStringDictList(const ::Test::StringStringDictList&, ::Test::StringStringDictList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opStringStringDictList_async(const ::Test::AMI_TestIntf_opStringStringDictListPtr&, const ::Test::StringStringDictList&);
    bool opStringStringDictList_async(const ::Test::AMI_TestIntf_opStringStringDictListPtr&, const ::Test::StringStringDictList&, const ::Ice::Context&);
    #endif

    std::deque< ::Test::E> opESeq(const std::deque< ::Test::E>& inSeq, std::deque< ::Test::E>& outSeq)
    {
        return opESeq(inSeq, outSeq, 0);
    }
    std::deque< ::Test::E> opESeq(const std::deque< ::Test::E>& inSeq, std::deque< ::Test::E>& outSeq, const ::Ice::Context& __ctx)
    {
        return opESeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Test::E> opESeq(const std::deque< ::Test::E>&, std::deque< ::Test::E>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opESeq_async(const ::Test::AMI_TestIntf_opESeqPtr&, const std::deque< ::Test::E>&);
    bool opESeq_async(const ::Test::AMI_TestIntf_opESeqPtr&, const std::deque< ::Test::E>&, const ::Ice::Context&);
    #endif

    ::Test::EList opEList(const ::Test::EList& inSeq, ::Test::EList& outSeq)
    {
        return opEList(inSeq, outSeq, 0);
    }
    ::Test::EList opEList(const ::Test::EList& inSeq, ::Test::EList& outSeq, const ::Ice::Context& __ctx)
    {
        return opEList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::EList opEList(const ::Test::EList&, ::Test::EList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opEList_async(const ::Test::AMI_TestIntf_opEListPtr&, const ::Test::EList&);
    bool opEList_async(const ::Test::AMI_TestIntf_opEListPtr&, const ::Test::EList&, const ::Ice::Context&);
    #endif

    std::deque< ::Test::CPrx> opCPrxSeq(const std::deque< ::Test::CPrx>& inSeq, std::deque< ::Test::CPrx>& outSeq)
    {
        return opCPrxSeq(inSeq, outSeq, 0);
    }
    std::deque< ::Test::CPrx> opCPrxSeq(const std::deque< ::Test::CPrx>& inSeq, std::deque< ::Test::CPrx>& outSeq, const ::Ice::Context& __ctx)
    {
        return opCPrxSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Test::CPrx> opCPrxSeq(const std::deque< ::Test::CPrx>&, std::deque< ::Test::CPrx>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opCPrxSeq_async(const ::Test::AMI_TestIntf_opCPrxSeqPtr&, const std::deque< ::Test::CPrx>&);
    bool opCPrxSeq_async(const ::Test::AMI_TestIntf_opCPrxSeqPtr&, const std::deque< ::Test::CPrx>&, const ::Ice::Context&);
    #endif

    ::Test::CPrxList opCPrxList(const ::Test::CPrxList& inSeq, ::Test::CPrxList& outSeq)
    {
        return opCPrxList(inSeq, outSeq, 0);
    }
    ::Test::CPrxList opCPrxList(const ::Test::CPrxList& inSeq, ::Test::CPrxList& outSeq, const ::Ice::Context& __ctx)
    {
        return opCPrxList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::CPrxList opCPrxList(const ::Test::CPrxList&, ::Test::CPrxList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opCPrxList_async(const ::Test::AMI_TestIntf_opCPrxListPtr&, const ::Test::CPrxList&);
    bool opCPrxList_async(const ::Test::AMI_TestIntf_opCPrxListPtr&, const ::Test::CPrxList&, const ::Ice::Context&);
    #endif

    std::deque< ::Test::CPtr> opCSeq(const std::deque< ::Test::CPtr>& inSeq, std::deque< ::Test::CPtr>& outSeq)
    {
        return opCSeq(inSeq, outSeq, 0);
    }
    std::deque< ::Test::CPtr> opCSeq(const std::deque< ::Test::CPtr>& inSeq, std::deque< ::Test::CPtr>& outSeq, const ::Ice::Context& __ctx)
    {
        return opCSeq(inSeq, outSeq, &__ctx);
    }
    
private:

    std::deque< ::Test::CPtr> opCSeq(const std::deque< ::Test::CPtr>&, std::deque< ::Test::CPtr>&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opCSeq_async(const ::Test::AMI_TestIntf_opCSeqPtr&, const std::deque< ::Test::CPtr>&);
    bool opCSeq_async(const ::Test::AMI_TestIntf_opCSeqPtr&, const std::deque< ::Test::CPtr>&, const ::Ice::Context&);
    #endif

    ::Test::CList opCList(const ::Test::CList& inSeq, ::Test::CList& outSeq)
    {
        return opCList(inSeq, outSeq, 0);
    }
    ::Test::CList opCList(const ::Test::CList& inSeq, ::Test::CList& outSeq, const ::Ice::Context& __ctx)
    {
        return opCList(inSeq, outSeq, &__ctx);
    }
    
private:

    ::Test::CList opCList(const ::Test::CList&, ::Test::CList&, const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool opCList_async(const ::Test::AMI_TestIntf_opCListPtr&, const ::Test::CList&);
    bool opCList_async(const ::Test::AMI_TestIntf_opCListPtr&, const ::Test::CList&, const ::Ice::Context&);
    #endif

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
    bool shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr&);
    bool shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr&, const ::Ice::Context&);
    #endif
    
    ::IceInternal::ProxyHandle<TestIntf> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_secure(bool __secure) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<TestIntf> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<TestIntf> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<TestIntf> ice_twoway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_oneway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_batchOneway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_datagram() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_batchDatagram() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_timeout(int __timeout) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
