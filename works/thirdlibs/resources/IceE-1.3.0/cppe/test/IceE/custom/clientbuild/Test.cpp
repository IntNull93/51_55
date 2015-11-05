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

static const ::std::string __Test__TestIntf__opBoolArray_name = "opBoolArray";

static const ::std::string __Test__TestIntf__opByteArray_name = "opByteArray";

static const ::std::string __Test__TestIntf__opVariableArray_name = "opVariableArray";

static const ::std::string __Test__TestIntf__opBoolRange_name = "opBoolRange";

static const ::std::string __Test__TestIntf__opByteRange_name = "opByteRange";

static const ::std::string __Test__TestIntf__opVariableRange_name = "opVariableRange";

static const ::std::string __Test__TestIntf__opBoolRangeType_name = "opBoolRangeType";

static const ::std::string __Test__TestIntf__opByteRangeType_name = "opByteRangeType";

static const ::std::string __Test__TestIntf__opVariableRangeType_name = "opVariableRangeType";

static const ::std::string __Test__TestIntf__opBoolSeq_name = "opBoolSeq";

static const ::std::string __Test__TestIntf__opBoolList_name = "opBoolList";

static const ::std::string __Test__TestIntf__opByteSeq_name = "opByteSeq";

static const ::std::string __Test__TestIntf__opByteList_name = "opByteList";

static const ::std::string __Test__TestIntf__opMyByteSeq_name = "opMyByteSeq";

static const ::std::string __Test__TestIntf__opStringSeq_name = "opStringSeq";

static const ::std::string __Test__TestIntf__opStringList_name = "opStringList";

static const ::std::string __Test__TestIntf__opFixedSeq_name = "opFixedSeq";

static const ::std::string __Test__TestIntf__opFixedList_name = "opFixedList";

static const ::std::string __Test__TestIntf__opVariableSeq_name = "opVariableSeq";

static const ::std::string __Test__TestIntf__opVariableList_name = "opVariableList";

static const ::std::string __Test__TestIntf__opStringStringDictSeq_name = "opStringStringDictSeq";

static const ::std::string __Test__TestIntf__opStringStringDictList_name = "opStringStringDictList";

static const ::std::string __Test__TestIntf__opESeq_name = "opESeq";

static const ::std::string __Test__TestIntf__opEList_name = "opEList";

static const ::std::string __Test__TestIntf__opCPrxSeq_name = "opCPrxSeq";

static const ::std::string __Test__TestIntf__opCPrxList_name = "opCPrxList";

static const ::std::string __Test__TestIntf__opCSeq_name = "opCSeq";

static const ::std::string __Test__TestIntf__opCList_name = "opCList";

static const ::std::string __Test__TestIntf__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Test::C* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::C* p) { return p; }

::Ice::Object* IceInternal::upCast(::Test::TestIntf* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Test::TestIntf* p) { return p; }

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::CPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::C;
        v->__copyFrom(proxy);
    }
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::TestIntfPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::TestIntf;
        v->__copyFrom(proxy);
    }
}

void
Test::__writeBoolList(::IceInternal::BasicStream* __os, const ::Test::BoolList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(BoolList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        __os->write((*p));
    }
}

void
Test::__readBoolList(::IceInternal::BasicStream* __is, ::Test::BoolList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    BoolList(sz).swap(v);
    __is->checkFixedSeq(sz, 1);
    for(BoolList::iterator p = v.begin(); p != v.end(); ++p)
    {
        __is->read((*p));
    }
}

void
Test::__writeBoolListList(::IceInternal::BasicStream* __os, const ::Test::BoolListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(BoolListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeBoolList(__os, (*p));
    }
}

void
Test::__readBoolListList(::IceInternal::BasicStream* __is, ::Test::BoolListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    BoolListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(BoolListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readBoolList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeBoolListSeq(::IceInternal::BasicStream* __os, const ::Test::BoolList* begin, const ::Test::BoolList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeBoolList(__os, begin[i]);
    }
}

void
Test::__readBoolListSeq(::IceInternal::BasicStream* __is, ::Test::BoolListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readBoolList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeBoolSeqList(::IceInternal::BasicStream* __os, const ::Test::BoolSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(BoolSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        __os->write((*p));
    }
}

void
Test::__readBoolSeqList(::IceInternal::BasicStream* __is, ::Test::BoolSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    BoolSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(BoolSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        __is->read((*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeByteList(::IceInternal::BasicStream* __os, const ::Test::ByteList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(ByteList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        __os->write((*p));
    }
}

void
Test::__readByteList(::IceInternal::BasicStream* __is, ::Test::ByteList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    ByteList(sz).swap(v);
    __is->checkFixedSeq(sz, 1);
    for(ByteList::iterator p = v.begin(); p != v.end(); ++p)
    {
        __is->read((*p));
    }
}

void
Test::__writeByteListList(::IceInternal::BasicStream* __os, const ::Test::ByteListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(ByteListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeByteList(__os, (*p));
    }
}

void
Test::__readByteListList(::IceInternal::BasicStream* __is, ::Test::ByteListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    ByteListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(ByteListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readByteList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeByteListSeq(::IceInternal::BasicStream* __os, const ::Test::ByteList* begin, const ::Test::ByteList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeByteList(__os, begin[i]);
    }
}

void
Test::__readByteListSeq(::IceInternal::BasicStream* __is, ::Test::ByteListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readByteList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeByteSeqList(::IceInternal::BasicStream* __os, const ::Test::ByteSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(ByteSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readByteSeqList(::IceInternal::BasicStream* __is, ::Test::ByteSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    ByteSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(ByteSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___p;
        __is->read(___p);
        ::std::vector< ::Ice::Byte>(___p.first, ___p.second).swap((*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringList(::IceInternal::BasicStream* __os, const ::Test::StringList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(StringList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        __os->write((*p));
    }
}

void
Test::__readStringList(::IceInternal::BasicStream* __is, ::Test::StringList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    StringList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(StringList::iterator p = v.begin(); p != v.end(); ++p)
    {
        __is->read((*p));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringListList(::IceInternal::BasicStream* __os, const ::Test::StringListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(StringListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeStringList(__os, (*p));
    }
}

void
Test::__readStringListList(::IceInternal::BasicStream* __is, ::Test::StringListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    StringListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(StringListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readStringList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringListSeq(::IceInternal::BasicStream* __os, const ::Test::StringList* begin, const ::Test::StringList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeStringList(__os, begin[i]);
    }
}

void
Test::__readStringListSeq(::IceInternal::BasicStream* __is, ::Test::StringListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readStringList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringSeqList(::IceInternal::BasicStream* __os, const ::Test::StringSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(StringSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readStringSeqList(::IceInternal::BasicStream* __is, ::Test::StringSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    StringSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(StringSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        __is->read((*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
Test::Fixed::operator==(const Fixed& __rhs) const
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
Test::Fixed::operator<(const Fixed& __rhs) const
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
Test::Fixed::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(s);
}

void
Test::Fixed::__read(::IceInternal::BasicStream* __is)
{
    __is->read(s);
}

void
Test::__writeFixedSeq(::IceInternal::BasicStream* __os, const ::Test::Fixed* begin, const ::Test::Fixed* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
Test::__readFixedSeq(::IceInternal::BasicStream* __is, ::Test::FixedSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->checkFixedSeq(sz, 2);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
    }
}

void
Test::__writeFixedList(::IceInternal::BasicStream* __os, const ::Test::FixedList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(FixedList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        (*p).__write(__os);
    }
}

void
Test::__readFixedList(::IceInternal::BasicStream* __is, ::Test::FixedList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    FixedList(sz).swap(v);
    __is->checkFixedSeq(sz, 2);
    for(FixedList::iterator p = v.begin(); p != v.end(); ++p)
    {
        (*p).__read(__is);
    }
}

void
Test::__writeFixedListList(::IceInternal::BasicStream* __os, const ::Test::FixedListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(FixedListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeFixedList(__os, (*p));
    }
}

void
Test::__readFixedListList(::IceInternal::BasicStream* __is, ::Test::FixedListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    FixedListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(FixedListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readFixedList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeFixedListSeq(::IceInternal::BasicStream* __os, const ::Test::FixedList* begin, const ::Test::FixedList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeFixedList(__os, begin[i]);
    }
}

void
Test::__readFixedListSeq(::IceInternal::BasicStream* __is, ::Test::FixedListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readFixedList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeFixedSeqList(::IceInternal::BasicStream* __os, const ::Test::FixedSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(FixedSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeFixedSeq(__os, &(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readFixedSeqList(::IceInternal::BasicStream* __is, ::Test::FixedSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    FixedSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(FixedSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readFixedSeq(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
Test::Variable::operator==(const Variable& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(s != __rhs.s)
    {
        return false;
    }
    if(bl != __rhs.bl)
    {
        return false;
    }
    if(ss != __rhs.ss)
    {
        return false;
    }
    return true;
}

bool
Test::Variable::operator<(const Variable& __rhs) const
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
    if(bl < __rhs.bl)
    {
        return true;
    }
    else if(__rhs.bl < bl)
    {
        return false;
    }
    if(ss < __rhs.ss)
    {
        return true;
    }
    else if(__rhs.ss < ss)
    {
        return false;
    }
    return false;
}

void
Test::Variable::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(s);
    ::Test::__writeBoolList(__os, bl);
    __os->writeSize(static_cast< ::Ice::Int>(ss.size()));
    std::list<std::string>::const_iterator __p_ss;
    for(__p_ss = ss.begin(); __p_ss != ss.end(); ++__p_ss)
    {
        __os->write((*__p_ss));
    }
}

void
Test::Variable::__read(::IceInternal::BasicStream* __is)
{
    __is->read(s);
    ::Test::__readBoolList(__is, bl);
    ::Ice::Int __sz_ss;
    __is->readSize(__sz_ss);
    std::list<std::string>(__sz_ss).swap(ss);
    __is->startSeq(__sz_ss, 1);
    std::list<std::string>::iterator __p_ss;
    for(__p_ss = ss.begin(); __p_ss != ss.end(); ++__p_ss)
    {
        __is->read((*__p_ss));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz_ss);
}

void
Test::__writeVariableSeq(::IceInternal::BasicStream* __os, const ::Test::Variable* begin, const ::Test::Variable* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
Test::__readVariableSeq(::IceInternal::BasicStream* __is, ::Test::VariableSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 3);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeVariableList(::IceInternal::BasicStream* __os, const ::Test::VariableList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(VariableList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        (*p).__write(__os);
    }
}

void
Test::__readVariableList(::IceInternal::BasicStream* __is, ::Test::VariableList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    VariableList(sz).swap(v);
    __is->startSeq(sz, 3);
    for(VariableList::iterator p = v.begin(); p != v.end(); ++p)
    {
        (*p).__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeVariableListList(::IceInternal::BasicStream* __os, const ::Test::VariableListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(VariableListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeVariableList(__os, (*p));
    }
}

void
Test::__readVariableListList(::IceInternal::BasicStream* __is, ::Test::VariableListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    VariableListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(VariableListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readVariableList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeVariableListSeq(::IceInternal::BasicStream* __os, const ::Test::VariableList* begin, const ::Test::VariableList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeVariableList(__os, begin[i]);
    }
}

void
Test::__readVariableListSeq(::IceInternal::BasicStream* __is, ::Test::VariableListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readVariableList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeVariableSeqList(::IceInternal::BasicStream* __os, const ::Test::VariableSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(VariableSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeVariableSeq(__os, &(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readVariableSeqList(::IceInternal::BasicStream* __is, ::Test::VariableSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    VariableSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(VariableSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readVariableSeq(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringStringDict(::IceInternal::BasicStream* __os, const ::Test::StringStringDict& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::Test::StringStringDict::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
Test::__readStringStringDict(::IceInternal::BasicStream* __is, ::Test::StringStringDict& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::Test::StringStringDict::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
Test::__writeStringStringDictSeq(::IceInternal::BasicStream* __os, const ::Test::StringStringDict* begin, const ::Test::StringStringDict* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeStringStringDict(__os, begin[i]);
    }
}

void
Test::__readStringStringDictSeq(::IceInternal::BasicStream* __is, ::Test::StringStringDictSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readStringStringDict(__is, v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringStringDictList(::IceInternal::BasicStream* __os, const ::Test::StringStringDictList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(StringStringDictList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeStringStringDict(__os, (*p));
    }
}

void
Test::__readStringStringDictList(::IceInternal::BasicStream* __is, ::Test::StringStringDictList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    StringStringDictList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(StringStringDictList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readStringStringDict(__is, (*p));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringStringDictListList(::IceInternal::BasicStream* __os, const ::Test::StringStringDictListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(StringStringDictListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeStringStringDictList(__os, (*p));
    }
}

void
Test::__readStringStringDictListList(::IceInternal::BasicStream* __is, ::Test::StringStringDictListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    StringStringDictListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(StringStringDictListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readStringStringDictList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringStringDictListSeq(::IceInternal::BasicStream* __os, const ::Test::StringStringDictList* begin, const ::Test::StringStringDictList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeStringStringDictList(__os, begin[i]);
    }
}

void
Test::__readStringStringDictListSeq(::IceInternal::BasicStream* __is, ::Test::StringStringDictListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readStringStringDictList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeStringStringDictSeqList(::IceInternal::BasicStream* __os, const ::Test::StringStringDictSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(StringStringDictSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeStringStringDictSeq(__os, &(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readStringStringDictSeqList(::IceInternal::BasicStream* __is, ::Test::StringStringDictSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    StringStringDictSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(StringStringDictSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readStringStringDictSeq(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__write(::IceInternal::BasicStream* __os, ::Test::E v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 3);
}

void
Test::__read(::IceInternal::BasicStream* __is, ::Test::E& v)
{
    ::Ice::Byte val;
    __is->read(val, 3);
    v = static_cast< ::Test::E>(val);
}

void
Test::__writeESeq(::IceInternal::BasicStream* __os, const ::Test::E* begin, const ::Test::E* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__write(__os, begin[i]);
    }
}

void
Test::__readESeq(::IceInternal::BasicStream* __is, ::Test::ESeq& v)
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
Test::__writeEList(::IceInternal::BasicStream* __os, const ::Test::EList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(EList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__write(__os, (*p));
    }
}

void
Test::__readEList(::IceInternal::BasicStream* __is, ::Test::EList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    EList(sz).swap(v);
    __is->checkFixedSeq(sz, 1);
    for(EList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__read(__is, (*p));
    }
}

void
Test::__writeEListList(::IceInternal::BasicStream* __os, const ::Test::EListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(EListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeEList(__os, (*p));
    }
}

void
Test::__readEListList(::IceInternal::BasicStream* __is, ::Test::EListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    EListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(EListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readEList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeEListSeq(::IceInternal::BasicStream* __os, const ::Test::EList* begin, const ::Test::EList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeEList(__os, begin[i]);
    }
}

void
Test::__readEListSeq(::IceInternal::BasicStream* __is, ::Test::EListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readEList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeESeqList(::IceInternal::BasicStream* __os, const ::Test::ESeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(ESeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeESeq(__os, &(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readESeqList(::IceInternal::BasicStream* __is, ::Test::ESeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    ESeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(ESeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readESeq(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCSeq(::IceInternal::BasicStream* __os, const ::Test::CPtr* begin, const ::Test::CPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
Test::__readCSeq(::IceInternal::BasicStream* __is, ::Test::CSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::Test::__patch__CPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCList(::IceInternal::BasicStream* __os, const ::Test::CList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(CList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast((*p).get())));
    }
}

void
Test::__readCList(::IceInternal::BasicStream* __is, ::Test::CList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    CList(sz).swap(v);
    __is->startSeq(sz, 4);
    for(CList::iterator p = v.begin(); p != v.end(); ++p)
    {
        __is->read(::Test::__patch__CPtr, &(*p));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCListList(::IceInternal::BasicStream* __os, const ::Test::CListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(CListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeCList(__os, (*p));
    }
}

void
Test::__readCListList(::IceInternal::BasicStream* __is, ::Test::CListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    CListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(CListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readCList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCListSeq(::IceInternal::BasicStream* __os, const ::Test::CList* begin, const ::Test::CList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeCList(__os, begin[i]);
    }
}

void
Test::__readCListSeq(::IceInternal::BasicStream* __is, ::Test::CListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readCList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCSeqList(::IceInternal::BasicStream* __os, const ::Test::CSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(CSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeCSeq(__os, &(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readCSeqList(::IceInternal::BasicStream* __is, ::Test::CSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    CSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(CSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readCSeq(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCPrxSeq(::IceInternal::BasicStream* __os, const ::Test::CPrx* begin, const ::Test::CPrx* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(begin[i].get())));
    }
}

void
Test::__readCPrxSeq(::IceInternal::BasicStream* __is, ::Test::CPrxSeq& v)
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
Test::__writeCPrxList(::IceInternal::BasicStream* __os, const ::Test::CPrxList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(CPrxList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast((*p).get())));
    }
}

void
Test::__readCPrxList(::IceInternal::BasicStream* __is, ::Test::CPrxList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    CPrxList(sz).swap(v);
    __is->startSeq(sz, 2);
    for(CPrxList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__read(__is, (*p));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCPrxListList(::IceInternal::BasicStream* __os, const ::Test::CPrxListList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(CPrxListList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__writeCPrxList(__os, (*p));
    }
}

void
Test::__readCPrxListList(::IceInternal::BasicStream* __is, ::Test::CPrxListList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    CPrxListList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(CPrxListList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readCPrxList(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCPrxListSeq(::IceInternal::BasicStream* __os, const ::Test::CPrxList* begin, const ::Test::CPrxList* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::Test::__writeCPrxList(__os, begin[i]);
    }
}

void
Test::__readCPrxListSeq(::IceInternal::BasicStream* __is, ::Test::CPrxListSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Test::__readCPrxList(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
Test::__writeCPrxSeqList(::IceInternal::BasicStream* __os, const ::Test::CPrxSeqList& v)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(v.size());
    __os->writeSize(size);
    for(CPrxSeqList::const_iterator p = v.begin(); p != v.end(); ++p)
    {
        if((*p).size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::Test::__writeCPrxSeq(__os, &(*p)[0], &(*p)[0] + (*p).size());
        }
    }
}

void
Test::__readCPrxSeqList(::IceInternal::BasicStream* __is, ::Test::CPrxSeqList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    CPrxSeqList(sz).swap(v);
    __is->startSeq(sz, 1);
    for(CPrxSeqList::iterator p = v.begin(); p != v.end(); ++p)
    {
        ::Test::__readCPrxSeq(__is, (*p));
        __is->endElement();
    }
    __is->endSeq(sz);
}

static const ::std::string __Test__C_ids[2] =
{
    "::Ice::Object",
    "::Test::C"
};

bool
Test::C::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__C_ids, __Test__C_ids + 2, _s);
}

::std::vector< ::std::string>
Test::C::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__C_ids[0], &__Test__C_ids[2]);
}

const ::std::string&
Test::C::ice_id(const ::Ice::Current&) const
{
    return __Test__C_ids[1];
}

const ::std::string&
Test::C::ice_staticId()
{
    return __Test__C_ids[1];
}

void
Test::C::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::C::__read(::IceInternal::BasicStream* __is, bool __rid)
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

class __F__Test__C : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Test::C::ice_staticId());
        return new ::Test::C;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Test__C_Ptr = new __F__Test__C;

const ::Ice::ObjectFactoryPtr&
Test::C::ice_factory()
{
    return __F__Test__C_Ptr;
}

class __F__Test__C__Init
{
public:

    __F__Test__C__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::C::ice_staticId(), ::Test::C::ice_factory());
    }

    ~__F__Test__C__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::C::ice_staticId());
    }
};

static __F__Test__C__Init __F__Test__C__i;

#ifdef __APPLE__
extern "C" { void __F__Test__C__initializer() {} }
#endif


bool
Test::operator==(const ::Test::C& l, const ::Test::C& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::C& l, const ::Test::C& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__CPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::CPtr* p = static_cast< ::Test::CPtr*>(__addr);
    assert(p);
    *p = ::Test::CPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::C::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Test__TestIntf_ids[2] =
{
    "::Ice::Object",
    "::Test::TestIntf"
};

bool
Test::TestIntf::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__TestIntf_ids, __Test__TestIntf_ids + 2, _s);
}

::std::vector< ::std::string>
Test::TestIntf::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__TestIntf_ids[0], &__Test__TestIntf_ids[2]);
}

const ::std::string&
Test::TestIntf::ice_id(const ::Ice::Current&) const
{
    return __Test__TestIntf_ids[1];
}

const ::std::string&
Test::TestIntf::ice_staticId()
{
    return __Test__TestIntf_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opBoolArray(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair<const bool*, const bool*> inSeq;
    ::IceUtilInternal::ScopedArray<bool> ___inSeq(__is->read(inSeq));
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BoolSeq outSeq;
    ::Test::BoolSeq __ret = opBoolArray(inSeq, outSeq, __current);
    __os->write(outSeq);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opByteArray(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> inSeq;
    __is->read(inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteList outSeq;
    ::Test::ByteList __ret = opByteArray(inSeq, outSeq, __current);
    ::Test::__writeByteList(__os, outSeq);
    ::Test::__writeByteList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opVariableArray(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair<const ::Test::Variable*, const ::Test::Variable*> inSeq;
    ::std::vector< ::Test::Variable> ___inSeq;
    ::Ice::Int __sz____inSeq;
    __is->readSize(__sz____inSeq);
    ::std::vector< ::Test::Variable>(__sz____inSeq).swap(___inSeq);
    __is->startSeq(__sz____inSeq, 3);
    ::std::vector< ::Test::Variable>::iterator __p____inSeq;
    for(__p____inSeq = ___inSeq.begin(); __p____inSeq != ___inSeq.end(); ++__p____inSeq)
    {
        (*__p____inSeq).__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz____inSeq);
    inSeq.first = &___inSeq[0];
    inSeq.second = inSeq.first + ___inSeq.size();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret = opVariableArray(inSeq, outSeq, __current);
    ::Test::__writeVariableList(__os, outSeq);
    ::Test::__writeVariableList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opBoolRange(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator> inSeq;
    ::Test::BoolSeq ___inSeq;
    __is->read(___inSeq);
    inSeq.first = ___inSeq.begin();
    inSeq.second = ___inSeq.end();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BoolSeq outSeq;
    ::Test::BoolSeq __ret = opBoolRange(inSeq, outSeq, __current);
    __os->write(outSeq);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opByteRange(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator> inSeq;
    ::Test::ByteList ___inSeq;
    ::Test::__readByteList(__is, ___inSeq);
    inSeq.first = ___inSeq.begin();
    inSeq.second = ___inSeq.end();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteList outSeq;
    ::Test::ByteList __ret = opByteRange(inSeq, outSeq, __current);
    ::Test::__writeByteList(__os, outSeq);
    ::Test::__writeByteList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opVariableRange(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator> inSeq;
    ::Test::VariableList ___inSeq;
    ::Test::__readVariableList(__is, ___inSeq);
    inSeq.first = ___inSeq.begin();
    inSeq.second = ___inSeq.end();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret = opVariableRange(inSeq, outSeq, __current);
    ::Test::__writeVariableList(__os, outSeq);
    ::Test::__writeVariableList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opBoolRangeType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair<const bool*, const bool*> inSeq;
    ::IceUtilInternal::ScopedArray<bool> ___inSeq(__is->read(inSeq));
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BoolSeq outSeq;
    ::Test::BoolSeq __ret = opBoolRangeType(inSeq, outSeq, __current);
    __os->write(outSeq);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opByteRangeType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator> inSeq;
    ::Test::ByteList ___inSeq;
    ::Ice::Int __sz____inSeq;
    __is->readSize(__sz____inSeq);
    ::Test::ByteList(__sz____inSeq).swap(___inSeq);
    __is->checkFixedSeq(__sz____inSeq, 1);
    ::Test::ByteList::iterator __p____inSeq;
    for(__p____inSeq = ___inSeq.begin(); __p____inSeq != ___inSeq.end(); ++__p____inSeq)
    {
        __is->read((*__p____inSeq));
    }
    inSeq.first = ___inSeq.begin();
    inSeq.second = ___inSeq.end();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteList outSeq;
    ::Test::ByteList __ret = opByteRangeType(inSeq, outSeq, __current);
    ::Test::__writeByteList(__os, outSeq);
    ::Test::__writeByteList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opVariableRangeType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator> inSeq;
    std::deque< ::Test::Variable> ___inSeq;
    ::Ice::Int __sz____inSeq;
    __is->readSize(__sz____inSeq);
    std::deque< ::Test::Variable>(__sz____inSeq).swap(___inSeq);
    __is->startSeq(__sz____inSeq, 3);
    std::deque< ::Test::Variable>::iterator __p____inSeq;
    for(__p____inSeq = ___inSeq.begin(); __p____inSeq != ___inSeq.end(); ++__p____inSeq)
    {
        (*__p____inSeq).__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz____inSeq);
    inSeq.first = ___inSeq.begin();
    inSeq.second = ___inSeq.end();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret = opVariableRangeType(inSeq, outSeq, __current);
    ::Test::__writeVariableList(__os, outSeq);
    ::Test::__writeVariableList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opBoolSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque<bool> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque<bool>(__sz_inSeq).swap(inSeq);
    __is->checkFixedSeq(__sz_inSeq, 1);
    std::deque<bool>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        __is->read((*__p_inSeq));
    }
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque<bool> outSeq;
    std::deque<bool> __ret = opBoolSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque<bool>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        __os->write((*__p_outSeq));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque<bool>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        __os->write((*__p___ret));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opBoolList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::BoolList inSeq;
    ::Test::__readBoolList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::BoolList outSeq;
    ::Test::BoolList __ret = opBoolList(inSeq, outSeq, __current);
    ::Test::__writeBoolList(__os, outSeq);
    ::Test::__writeBoolList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opByteSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Ice::Byte> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Ice::Byte>(__sz_inSeq).swap(inSeq);
    __is->checkFixedSeq(__sz_inSeq, 1);
    std::deque< ::Ice::Byte>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        __is->read((*__p_inSeq));
    }
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Ice::Byte> outSeq;
    std::deque< ::Ice::Byte> __ret = opByteSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Ice::Byte>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        __os->write((*__p_outSeq));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Ice::Byte>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        __os->write((*__p___ret));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opByteList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::ByteList inSeq;
    ::Test::__readByteList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::ByteList outSeq;
    ::Test::ByteList __ret = opByteList(inSeq, outSeq, __current);
    ::Test::__writeByteList(__os, outSeq);
    ::Test::__writeByteList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opMyByteSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    MyByteSeq inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    MyByteSeq(__sz_inSeq).swap(inSeq);
    __is->checkFixedSeq(__sz_inSeq, 1);
    MyByteSeq::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        __is->read((*__p_inSeq));
    }
    ::IceInternal::BasicStream* __os = __inS.os();
    MyByteSeq outSeq;
    MyByteSeq __ret = opMyByteSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    MyByteSeq::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        __os->write((*__p_outSeq));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    MyByteSeq::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        __os->write((*__p___ret));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opStringSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque<std::string> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque<std::string>(__sz_inSeq).swap(inSeq);
    __is->startSeq(__sz_inSeq, 1);
    std::deque<std::string>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        __is->read((*__p_inSeq));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz_inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque<std::string> outSeq;
    std::deque<std::string> __ret = opStringSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque<std::string>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        __os->write((*__p_outSeq));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque<std::string>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        __os->write((*__p___ret));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opStringList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringList inSeq;
    ::Test::__readStringList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringList outSeq;
    ::Test::StringList __ret = opStringList(inSeq, outSeq, __current);
    ::Test::__writeStringList(__os, outSeq);
    ::Test::__writeStringList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opFixedSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Test::Fixed> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Test::Fixed>(__sz_inSeq).swap(inSeq);
    __is->checkFixedSeq(__sz_inSeq, 2);
    std::deque< ::Test::Fixed>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        (*__p_inSeq).__read(__is);
    }
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Test::Fixed> outSeq;
    std::deque< ::Test::Fixed> __ret = opFixedSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Test::Fixed>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        (*__p_outSeq).__write(__os);
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Test::Fixed>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        (*__p___ret).__write(__os);
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opFixedList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::FixedList inSeq;
    ::Test::__readFixedList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::FixedList outSeq;
    ::Test::FixedList __ret = opFixedList(inSeq, outSeq, __current);
    ::Test::__writeFixedList(__os, outSeq);
    ::Test::__writeFixedList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opVariableSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Test::Variable> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Test::Variable>(__sz_inSeq).swap(inSeq);
    __is->startSeq(__sz_inSeq, 3);
    std::deque< ::Test::Variable>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        (*__p_inSeq).__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz_inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Test::Variable> outSeq;
    std::deque< ::Test::Variable> __ret = opVariableSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Test::Variable>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        (*__p_outSeq).__write(__os);
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Test::Variable>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        (*__p___ret).__write(__os);
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opVariableList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::VariableList inSeq;
    ::Test::__readVariableList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret = opVariableList(inSeq, outSeq, __current);
    ::Test::__writeVariableList(__os, outSeq);
    ::Test::__writeVariableList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opStringStringDictSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Test::StringStringDict> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Test::StringStringDict>(__sz_inSeq).swap(inSeq);
    __is->startSeq(__sz_inSeq, 1);
    std::deque< ::Test::StringStringDict>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        ::Test::__readStringStringDict(__is, (*__p_inSeq));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz_inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Test::StringStringDict> outSeq;
    std::deque< ::Test::StringStringDict> __ret = opStringStringDictSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Test::StringStringDict>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        ::Test::__writeStringStringDict(__os, (*__p_outSeq));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Test::StringStringDict>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        ::Test::__writeStringStringDict(__os, (*__p___ret));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opStringStringDictList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::StringStringDictList inSeq;
    ::Test::__readStringStringDictList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::StringStringDictList outSeq;
    ::Test::StringStringDictList __ret = opStringStringDictList(inSeq, outSeq, __current);
    ::Test::__writeStringStringDictList(__os, outSeq);
    ::Test::__writeStringStringDictList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opESeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Test::E> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Test::E>(__sz_inSeq).swap(inSeq);
    __is->checkFixedSeq(__sz_inSeq, 1);
    std::deque< ::Test::E>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        ::Test::__read(__is, (*__p_inSeq));
    }
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Test::E> outSeq;
    std::deque< ::Test::E> __ret = opESeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Test::E>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        ::Test::__write(__os, (*__p_outSeq));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Test::E>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        ::Test::__write(__os, (*__p___ret));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opEList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::EList inSeq;
    ::Test::__readEList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::EList outSeq;
    ::Test::EList __ret = opEList(inSeq, outSeq, __current);
    ::Test::__writeEList(__os, outSeq);
    ::Test::__writeEList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opCPrxSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Test::CPrx> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Test::CPrx>(__sz_inSeq).swap(inSeq);
    __is->startSeq(__sz_inSeq, 2);
    std::deque< ::Test::CPrx>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        ::Test::__read(__is, (*__p_inSeq));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz_inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Test::CPrx> outSeq;
    std::deque< ::Test::CPrx> __ret = opCPrxSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Test::CPrx>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast((*__p_outSeq).get())));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Test::CPrx>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast((*__p___ret).get())));
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opCPrxList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::CPrxList inSeq;
    ::Test::__readCPrxList(__is, inSeq);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::CPrxList outSeq;
    ::Test::CPrxList __ret = opCPrxList(inSeq, outSeq, __current);
    ::Test::__writeCPrxList(__os, outSeq);
    ::Test::__writeCPrxList(__os, __ret);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opCSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    std::deque< ::Test::CPtr> inSeq;
    ::Ice::Int __sz_inSeq;
    __is->readSize(__sz_inSeq);
    std::deque< ::Test::CPtr>(__sz_inSeq).swap(inSeq);
    __is->startSeq(__sz_inSeq, 4);
    std::deque< ::Test::CPtr>::iterator __p_inSeq;
    for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
    {
        __is->read(::Test::__patch__CPtr, &(*__p_inSeq));
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(__sz_inSeq);
    __is->readPendingObjects();
    ::IceInternal::BasicStream* __os = __inS.os();
    std::deque< ::Test::CPtr> outSeq;
    std::deque< ::Test::CPtr> __ret = opCSeq(inSeq, outSeq, __current);
    __os->writeSize(static_cast< ::Ice::Int>(outSeq.size()));
    std::deque< ::Test::CPtr>::const_iterator __p_outSeq;
    for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast((*__p_outSeq).get())));
    }
    __os->writeSize(static_cast< ::Ice::Int>(__ret.size()));
    std::deque< ::Test::CPtr>::const_iterator __p___ret;
    for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast((*__p___ret).get())));
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___opCList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Test::CList inSeq;
    ::Test::__readCList(__is, inSeq);
    __is->readPendingObjects();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Test::CList outSeq;
    ::Test::CList __ret = opCList(inSeq, outSeq, __current);
    ::Test::__writeCList(__os, outSeq);
    ::Test::__writeCList(__os, __ret);
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Test::TestIntf::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Test__TestIntf_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "opBoolArray",
    "opBoolList",
    "opBoolRange",
    "opBoolRangeType",
    "opBoolSeq",
    "opByteArray",
    "opByteList",
    "opByteRange",
    "opByteRangeType",
    "opByteSeq",
    "opCList",
    "opCPrxList",
    "opCPrxSeq",
    "opCSeq",
    "opEList",
    "opESeq",
    "opFixedList",
    "opFixedSeq",
    "opMyByteSeq",
    "opStringList",
    "opStringSeq",
    "opStringStringDictList",
    "opStringStringDictSeq",
    "opVariableArray",
    "opVariableList",
    "opVariableRange",
    "opVariableRangeType",
    "opVariableSeq",
    "shutdown"
};

::Ice::DispatchStatus
Test::TestIntf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Test__TestIntf_all, __Test__TestIntf_all + 33, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestIntf_all)
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
            return ___opBoolArray(in, current);
        }
        case 5:
        {
            return ___opBoolList(in, current);
        }
        case 6:
        {
            return ___opBoolRange(in, current);
        }
        case 7:
        {
            return ___opBoolRangeType(in, current);
        }
        case 8:
        {
            return ___opBoolSeq(in, current);
        }
        case 9:
        {
            return ___opByteArray(in, current);
        }
        case 10:
        {
            return ___opByteList(in, current);
        }
        case 11:
        {
            return ___opByteRange(in, current);
        }
        case 12:
        {
            return ___opByteRangeType(in, current);
        }
        case 13:
        {
            return ___opByteSeq(in, current);
        }
        case 14:
        {
            return ___opCList(in, current);
        }
        case 15:
        {
            return ___opCPrxList(in, current);
        }
        case 16:
        {
            return ___opCPrxSeq(in, current);
        }
        case 17:
        {
            return ___opCSeq(in, current);
        }
        case 18:
        {
            return ___opEList(in, current);
        }
        case 19:
        {
            return ___opESeq(in, current);
        }
        case 20:
        {
            return ___opFixedList(in, current);
        }
        case 21:
        {
            return ___opFixedSeq(in, current);
        }
        case 22:
        {
            return ___opMyByteSeq(in, current);
        }
        case 23:
        {
            return ___opStringList(in, current);
        }
        case 24:
        {
            return ___opStringSeq(in, current);
        }
        case 25:
        {
            return ___opStringStringDictList(in, current);
        }
        case 26:
        {
            return ___opStringStringDictSeq(in, current);
        }
        case 27:
        {
            return ___opVariableArray(in, current);
        }
        case 28:
        {
            return ___opVariableList(in, current);
        }
        case 29:
        {
            return ___opVariableRange(in, current);
        }
        case 30:
        {
            return ___opVariableRangeType(in, current);
        }
        case 31:
        {
            return ___opVariableSeq(in, current);
        }
        case 32:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Test::TestIntf::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Test::TestIntf::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Test::operator==(const ::Test::TestIntf& l, const ::Test::TestIntf& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Test::operator<(const ::Test::TestIntf& l, const ::Test::TestIntf& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Test::__patch__TestIntfPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Test::TestIntfPtr* p = static_cast< ::Test::TestIntfPtr*>(__addr);
    assert(p);
    *p = ::Test::TestIntfPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Test::TestIntf::ice_staticId(), v->ice_id());
    }
}
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opBoolArray::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair<const bool*, const bool*>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opBoolArray_name);
        __prepare(__prx, __Test__TestIntf__opBoolArray_name, ::Ice::Normal, __ctx);
        __os->write(inSeq.first, inSeq.second);
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
Test::AMI_TestIntf_opBoolArray::__response(bool __ok)
{
    ::Test::BoolSeq outSeq;
    ::Test::BoolSeq __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(outSeq);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opByteArray::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opByteArray_name);
        __prepare(__prx, __Test__TestIntf__opByteArray_name, ::Ice::Normal, __ctx);
        __os->write(inSeq.first, inSeq.second);
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
Test::AMI_TestIntf_opByteArray::__response(bool __ok)
{
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> outSeq;
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(outSeq);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opVariableArray::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opVariableArray_name);
        __prepare(__prx, __Test__TestIntf__opVariableArray_name, ::Ice::Normal, __ctx);
        ::Ice::Int __sz_inSeq = static_cast< ::Ice::Int>(inSeq.second - inSeq.first);
        __os->writeSize(__sz_inSeq);
        for(int __i_inSeq = 0; __i_inSeq < __sz_inSeq; ++__i_inSeq)
        {
            inSeq.first[__i_inSeq].__write(__os);
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
Test::AMI_TestIntf_opVariableArray::__response(bool __ok)
{
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readVariableList(__is, outSeq);
        ::Test::__readVariableList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opBoolRange::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opBoolRange_name);
        __prepare(__prx, __Test__TestIntf__opBoolRange_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
        for(::Test::BoolSeq::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
        {
            __os->write((*___inSeq));
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
Test::AMI_TestIntf_opBoolRange::__response(bool __ok)
{
    ::Test::BoolSeq outSeq;
    ::Test::BoolSeq __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(outSeq);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opByteRange::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opByteRange_name);
        __prepare(__prx, __Test__TestIntf__opByteRange_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
        for(::Test::ByteList::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
        {
            __os->write((*___inSeq));
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
Test::AMI_TestIntf_opByteRange::__response(bool __ok)
{
    ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator> outSeq;
    ::Test::ByteList ___outSeq;
    ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator> __ret;
    ::Test::ByteList _____ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readByteList(__is, ___outSeq);
        outSeq.first = ___outSeq.begin();
        outSeq.second = ___outSeq.end();
        ::Test::__readByteList(__is, _____ret);
        __ret.first = _____ret.begin();
        __ret.second = _____ret.end();
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opVariableRange::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opVariableRange_name);
        __prepare(__prx, __Test__TestIntf__opVariableRange_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
        for(::Test::VariableList::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
        {
            (*___inSeq).__write(__os);
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
Test::AMI_TestIntf_opVariableRange::__response(bool __ok)
{
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readVariableList(__is, outSeq);
        ::Test::__readVariableList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opBoolRangeType::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair<const bool*, const bool*>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opBoolRangeType_name);
        __prepare(__prx, __Test__TestIntf__opBoolRangeType_name, ::Ice::Normal, __ctx);
        __os->write(inSeq.first, inSeq.second);
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
Test::AMI_TestIntf_opBoolRangeType::__response(bool __ok)
{
    ::Test::BoolSeq outSeq;
    ::Test::BoolSeq __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        __is->read(outSeq);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opByteRangeType::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opByteRangeType_name);
        __prepare(__prx, __Test__TestIntf__opByteRangeType_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
        for(::Test::ByteList::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
        {
            __os->write((*___inSeq));
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
Test::AMI_TestIntf_opByteRangeType::__response(bool __ok)
{
    ::Test::ByteList outSeq;
    ::Test::ByteList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readByteList(__is, outSeq);
        ::Test::__readByteList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opVariableRangeType::__invoke(const ::Test::TestIntfPrx& __prx, const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opVariableRangeType_name);
        __prepare(__prx, __Test__TestIntf__opVariableRangeType_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
        for(std::deque< ::Test::Variable>::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
        {
            (*___inSeq).__write(__os);
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
Test::AMI_TestIntf_opVariableRangeType::__response(bool __ok)
{
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readVariableList(__is, outSeq);
        ::Test::__readVariableList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opBoolSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque<bool>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opBoolSeq_name);
        __prepare(__prx, __Test__TestIntf__opBoolSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque<bool>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            __os->write((*__p_inSeq));
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
Test::AMI_TestIntf_opBoolSeq::__response(bool __ok)
{
    std::deque<bool> outSeq;
    std::deque<bool> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque<bool>(__sz_outSeq).swap(outSeq);
        __is->checkFixedSeq(__sz_outSeq, 1);
        std::deque<bool>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            __is->read((*__p_outSeq));
        }
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque<bool>(__sz___ret).swap(__ret);
        __is->checkFixedSeq(__sz___ret, 1);
        std::deque<bool>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            __is->read((*__p___ret));
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opBoolList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::BoolList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opBoolList_name);
        __prepare(__prx, __Test__TestIntf__opBoolList_name, ::Ice::Normal, __ctx);
        ::Test::__writeBoolList(__os, inSeq);
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
Test::AMI_TestIntf_opBoolList::__response(bool __ok)
{
    ::Test::BoolList outSeq;
    ::Test::BoolList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readBoolList(__is, outSeq);
        ::Test::__readBoolList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opByteSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Ice::Byte>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opByteSeq_name);
        __prepare(__prx, __Test__TestIntf__opByteSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Ice::Byte>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            __os->write((*__p_inSeq));
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
Test::AMI_TestIntf_opByteSeq::__response(bool __ok)
{
    std::deque< ::Ice::Byte> outSeq;
    std::deque< ::Ice::Byte> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Ice::Byte>(__sz_outSeq).swap(outSeq);
        __is->checkFixedSeq(__sz_outSeq, 1);
        std::deque< ::Ice::Byte>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            __is->read((*__p_outSeq));
        }
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Ice::Byte>(__sz___ret).swap(__ret);
        __is->checkFixedSeq(__sz___ret, 1);
        std::deque< ::Ice::Byte>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            __is->read((*__p___ret));
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opByteList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::ByteList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opByteList_name);
        __prepare(__prx, __Test__TestIntf__opByteList_name, ::Ice::Normal, __ctx);
        ::Test::__writeByteList(__os, inSeq);
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
Test::AMI_TestIntf_opByteList::__response(bool __ok)
{
    ::Test::ByteList outSeq;
    ::Test::ByteList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readByteList(__is, outSeq);
        ::Test::__readByteList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opMyByteSeq::__invoke(const ::Test::TestIntfPrx& __prx, const MyByteSeq& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opMyByteSeq_name);
        __prepare(__prx, __Test__TestIntf__opMyByteSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        MyByteSeq::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            __os->write((*__p_inSeq));
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
Test::AMI_TestIntf_opMyByteSeq::__response(bool __ok)
{
    MyByteSeq outSeq;
    MyByteSeq __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        MyByteSeq(__sz_outSeq).swap(outSeq);
        __is->checkFixedSeq(__sz_outSeq, 1);
        MyByteSeq::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            __is->read((*__p_outSeq));
        }
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        MyByteSeq(__sz___ret).swap(__ret);
        __is->checkFixedSeq(__sz___ret, 1);
        MyByteSeq::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            __is->read((*__p___ret));
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opStringSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque<std::string>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opStringSeq_name);
        __prepare(__prx, __Test__TestIntf__opStringSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque<std::string>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            __os->write((*__p_inSeq));
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
Test::AMI_TestIntf_opStringSeq::__response(bool __ok)
{
    std::deque<std::string> outSeq;
    std::deque<std::string> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque<std::string>(__sz_outSeq).swap(outSeq);
        __is->startSeq(__sz_outSeq, 1);
        std::deque<std::string>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            __is->read((*__p_outSeq));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz_outSeq);
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque<std::string>(__sz___ret).swap(__ret);
        __is->startSeq(__sz___ret, 1);
        std::deque<std::string>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            __is->read((*__p___ret));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz___ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opStringList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::StringList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opStringList_name);
        __prepare(__prx, __Test__TestIntf__opStringList_name, ::Ice::Normal, __ctx);
        ::Test::__writeStringList(__os, inSeq);
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
Test::AMI_TestIntf_opStringList::__response(bool __ok)
{
    ::Test::StringList outSeq;
    ::Test::StringList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringList(__is, outSeq);
        ::Test::__readStringList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opFixedSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Test::Fixed>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opFixedSeq_name);
        __prepare(__prx, __Test__TestIntf__opFixedSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Test::Fixed>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            (*__p_inSeq).__write(__os);
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
Test::AMI_TestIntf_opFixedSeq::__response(bool __ok)
{
    std::deque< ::Test::Fixed> outSeq;
    std::deque< ::Test::Fixed> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Test::Fixed>(__sz_outSeq).swap(outSeq);
        __is->checkFixedSeq(__sz_outSeq, 2);
        std::deque< ::Test::Fixed>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            (*__p_outSeq).__read(__is);
        }
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Test::Fixed>(__sz___ret).swap(__ret);
        __is->checkFixedSeq(__sz___ret, 2);
        std::deque< ::Test::Fixed>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            (*__p___ret).__read(__is);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opFixedList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::FixedList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opFixedList_name);
        __prepare(__prx, __Test__TestIntf__opFixedList_name, ::Ice::Normal, __ctx);
        ::Test::__writeFixedList(__os, inSeq);
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
Test::AMI_TestIntf_opFixedList::__response(bool __ok)
{
    ::Test::FixedList outSeq;
    ::Test::FixedList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readFixedList(__is, outSeq);
        ::Test::__readFixedList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opVariableSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Test::Variable>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opVariableSeq_name);
        __prepare(__prx, __Test__TestIntf__opVariableSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Test::Variable>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            (*__p_inSeq).__write(__os);
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
Test::AMI_TestIntf_opVariableSeq::__response(bool __ok)
{
    std::deque< ::Test::Variable> outSeq;
    std::deque< ::Test::Variable> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Test::Variable>(__sz_outSeq).swap(outSeq);
        __is->startSeq(__sz_outSeq, 3);
        std::deque< ::Test::Variable>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            (*__p_outSeq).__read(__is);
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz_outSeq);
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Test::Variable>(__sz___ret).swap(__ret);
        __is->startSeq(__sz___ret, 3);
        std::deque< ::Test::Variable>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            (*__p___ret).__read(__is);
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz___ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opVariableList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::VariableList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opVariableList_name);
        __prepare(__prx, __Test__TestIntf__opVariableList_name, ::Ice::Normal, __ctx);
        ::Test::__writeVariableList(__os, inSeq);
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
Test::AMI_TestIntf_opVariableList::__response(bool __ok)
{
    ::Test::VariableList outSeq;
    ::Test::VariableList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readVariableList(__is, outSeq);
        ::Test::__readVariableList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opStringStringDictSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Test::StringStringDict>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opStringStringDictSeq_name);
        __prepare(__prx, __Test__TestIntf__opStringStringDictSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Test::StringStringDict>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            ::Test::__writeStringStringDict(__os, (*__p_inSeq));
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
Test::AMI_TestIntf_opStringStringDictSeq::__response(bool __ok)
{
    std::deque< ::Test::StringStringDict> outSeq;
    std::deque< ::Test::StringStringDict> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Test::StringStringDict>(__sz_outSeq).swap(outSeq);
        __is->startSeq(__sz_outSeq, 1);
        std::deque< ::Test::StringStringDict>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            ::Test::__readStringStringDict(__is, (*__p_outSeq));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz_outSeq);
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Test::StringStringDict>(__sz___ret).swap(__ret);
        __is->startSeq(__sz___ret, 1);
        std::deque< ::Test::StringStringDict>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            ::Test::__readStringStringDict(__is, (*__p___ret));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz___ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opStringStringDictList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::StringStringDictList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opStringStringDictList_name);
        __prepare(__prx, __Test__TestIntf__opStringStringDictList_name, ::Ice::Normal, __ctx);
        ::Test::__writeStringStringDictList(__os, inSeq);
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
Test::AMI_TestIntf_opStringStringDictList::__response(bool __ok)
{
    ::Test::StringStringDictList outSeq;
    ::Test::StringStringDictList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readStringStringDictList(__is, outSeq);
        ::Test::__readStringStringDictList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opESeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Test::E>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opESeq_name);
        __prepare(__prx, __Test__TestIntf__opESeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Test::E>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            ::Test::__write(__os, (*__p_inSeq));
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
Test::AMI_TestIntf_opESeq::__response(bool __ok)
{
    std::deque< ::Test::E> outSeq;
    std::deque< ::Test::E> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Test::E>(__sz_outSeq).swap(outSeq);
        __is->checkFixedSeq(__sz_outSeq, 1);
        std::deque< ::Test::E>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            ::Test::__read(__is, (*__p_outSeq));
        }
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Test::E>(__sz___ret).swap(__ret);
        __is->checkFixedSeq(__sz___ret, 1);
        std::deque< ::Test::E>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            ::Test::__read(__is, (*__p___ret));
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opEList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::EList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opEList_name);
        __prepare(__prx, __Test__TestIntf__opEList_name, ::Ice::Normal, __ctx);
        ::Test::__writeEList(__os, inSeq);
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
Test::AMI_TestIntf_opEList::__response(bool __ok)
{
    ::Test::EList outSeq;
    ::Test::EList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readEList(__is, outSeq);
        ::Test::__readEList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opCPrxSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Test::CPrx>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opCPrxSeq_name);
        __prepare(__prx, __Test__TestIntf__opCPrxSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Test::CPrx>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            __os->write(::Ice::ObjectPrx(::IceInternal::upCast((*__p_inSeq).get())));
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
Test::AMI_TestIntf_opCPrxSeq::__response(bool __ok)
{
    std::deque< ::Test::CPrx> outSeq;
    std::deque< ::Test::CPrx> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Test::CPrx>(__sz_outSeq).swap(outSeq);
        __is->startSeq(__sz_outSeq, 2);
        std::deque< ::Test::CPrx>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            ::Test::__read(__is, (*__p_outSeq));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz_outSeq);
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Test::CPrx>(__sz___ret).swap(__ret);
        __is->startSeq(__sz___ret, 2);
        std::deque< ::Test::CPrx>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            ::Test::__read(__is, (*__p___ret));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz___ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opCPrxList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::CPrxList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opCPrxList_name);
        __prepare(__prx, __Test__TestIntf__opCPrxList_name, ::Ice::Normal, __ctx);
        ::Test::__writeCPrxList(__os, inSeq);
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
Test::AMI_TestIntf_opCPrxList::__response(bool __ok)
{
    ::Test::CPrxList outSeq;
    ::Test::CPrxList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readCPrxList(__is, outSeq);
        ::Test::__readCPrxList(__is, __ret);
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opCSeq::__invoke(const ::Test::TestIntfPrx& __prx, const std::deque< ::Test::CPtr>& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opCSeq_name);
        __prepare(__prx, __Test__TestIntf__opCSeq_name, ::Ice::Normal, __ctx);
        __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
        std::deque< ::Test::CPtr>::const_iterator __p_inSeq;
        for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
        {
            __os->write(::Ice::ObjectPtr(::IceInternal::upCast((*__p_inSeq).get())));
        }
        __os->writePendingObjects();
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
Test::AMI_TestIntf_opCSeq::__response(bool __ok)
{
    std::deque< ::Test::CPtr> outSeq;
    std::deque< ::Test::CPtr> __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Ice::Int __sz_outSeq;
        __is->readSize(__sz_outSeq);
        std::deque< ::Test::CPtr>(__sz_outSeq).swap(outSeq);
        __is->startSeq(__sz_outSeq, 4);
        std::deque< ::Test::CPtr>::iterator __p_outSeq;
        for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
        {
            __is->read(::Test::__patch__CPtr, &(*__p_outSeq));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz_outSeq);
        ::Ice::Int __sz___ret;
        __is->readSize(__sz___ret);
        std::deque< ::Test::CPtr>(__sz___ret).swap(__ret);
        __is->startSeq(__sz___ret, 4);
        std::deque< ::Test::CPtr>::iterator __p___ret;
        for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
        {
            __is->read(::Test::__patch__CPtr, &(*__p___ret));
            __is->checkSeq();
            __is->endElement();
        }
        __is->endSeq(__sz___ret);
        __is->readPendingObjects();
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_opCList::__invoke(const ::Test::TestIntfPrx& __prx, const ::Test::CList& inSeq, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__Test__TestIntf__opCList_name);
        __prepare(__prx, __Test__TestIntf__opCList_name, ::Ice::Normal, __ctx);
        ::Test::__writeCList(__os, inSeq);
        __os->writePendingObjects();
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
Test::AMI_TestIntf_opCList::__response(bool __ok)
{
    ::Test::CList outSeq;
    ::Test::CList __ret;
    try
    {
        if(!__ok)
        {
            __is->throwUnknownUserException();
        }
        ::Test::__readCList(__is, outSeq);
        ::Test::__readCList(__is, __ret);
        __is->readPendingObjects();
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
    ice_response(__ret, outSeq);
    __releaseCallback();
}
#endif
#ifdef ICEE_HAS_AMI

bool
Test::AMI_TestIntf_shutdown::__invoke(const ::Test::TestIntfPrx& __prx, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prepare(__prx, __Test__TestIntf__shutdown_name, ::Ice::Normal, __ctx);
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
Test::AMI_TestIntf_shutdown::__response(bool __ok)
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

const ::std::string&
IceProxy::Test::C::ice_staticId()
{
    return __Test__C_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::C::__newInstance() const
{
    return new C;
}

::Test::BoolSeq
IceProxy::Test::TestIntf::opBoolArray(const ::std::pair<const bool*, const bool*>& inSeq, ::Test::BoolSeq& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opBoolArray_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opBoolArray_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(inSeq.first, inSeq.second);
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
                ::Test::BoolSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(outSeq);
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
IceProxy::Test::TestIntf::opBoolArray_async(const ::Test::AMI_TestIntf_opBoolArrayPtr& __cb, const ::std::pair<const bool*, const bool*>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opBoolArray_async(const ::Test::AMI_TestIntf_opBoolArrayPtr& __cb, const ::std::pair<const bool*, const bool*>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::ByteList
IceProxy::Test::TestIntf::opByteArray(const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opByteArray_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opByteArray_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(inSeq.first, inSeq.second);
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
                ::Test::ByteList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readByteList(__is, outSeq);
                ::Test::__readByteList(__is, __ret);
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
IceProxy::Test::TestIntf::opByteArray_async(const ::Test::AMI_TestIntf_opByteArrayPtr& __cb, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opByteArray_async(const ::Test::AMI_TestIntf_opByteArrayPtr& __cb, const ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::VariableList
IceProxy::Test::TestIntf::opVariableArray(const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opVariableArray_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opVariableArray_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Ice::Int __sz_inSeq = static_cast< ::Ice::Int>(inSeq.second - inSeq.first);
                __os->writeSize(__sz_inSeq);
                for(int __i_inSeq = 0; __i_inSeq < __sz_inSeq; ++__i_inSeq)
                {
                    inSeq.first[__i_inSeq].__write(__os);
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
                ::Test::VariableList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readVariableList(__is, outSeq);
                ::Test::__readVariableList(__is, __ret);
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
IceProxy::Test::TestIntf::opVariableArray_async(const ::Test::AMI_TestIntf_opVariableArrayPtr& __cb, const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opVariableArray_async(const ::Test::AMI_TestIntf_opVariableArrayPtr& __cb, const ::std::pair<const ::Test::Variable*, const ::Test::Variable*>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::BoolSeq
IceProxy::Test::TestIntf::opBoolRange(const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>& inSeq, ::Test::BoolSeq& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opBoolRange_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opBoolRange_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
                for(::Test::BoolSeq::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
                {
                    __os->write((*___inSeq));
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
                ::Test::BoolSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(outSeq);
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
IceProxy::Test::TestIntf::opBoolRange_async(const ::Test::AMI_TestIntf_opBoolRangePtr& __cb, const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opBoolRange_async(const ::Test::AMI_TestIntf_opBoolRangePtr& __cb, const ::std::pair< ::Test::BoolSeq::const_iterator,  ::Test::BoolSeq::const_iterator>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::ByteList
IceProxy::Test::TestIntf::opByteRange(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opByteRange_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opByteRange_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
                for(::Test::ByteList::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
                {
                    __os->write((*___inSeq));
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
                ::Test::ByteList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readByteList(__is, outSeq);
                ::Test::__readByteList(__is, __ret);
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
IceProxy::Test::TestIntf::opByteRange_async(const ::Test::AMI_TestIntf_opByteRangePtr& __cb, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opByteRange_async(const ::Test::AMI_TestIntf_opByteRangePtr& __cb, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::VariableList
IceProxy::Test::TestIntf::opVariableRange(const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opVariableRange_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opVariableRange_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
                for(::Test::VariableList::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
                {
                    (*___inSeq).__write(__os);
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
                ::Test::VariableList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readVariableList(__is, outSeq);
                ::Test::__readVariableList(__is, __ret);
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
IceProxy::Test::TestIntf::opVariableRange_async(const ::Test::AMI_TestIntf_opVariableRangePtr& __cb, const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opVariableRange_async(const ::Test::AMI_TestIntf_opVariableRangePtr& __cb, const ::std::pair< ::Test::VariableList::const_iterator,  ::Test::VariableList::const_iterator>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::BoolSeq
IceProxy::Test::TestIntf::opBoolRangeType(const ::std::pair<const bool*, const bool*>& inSeq, ::Test::BoolSeq& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opBoolRangeType_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opBoolRangeType_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(inSeq.first, inSeq.second);
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
                ::Test::BoolSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(outSeq);
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
IceProxy::Test::TestIntf::opBoolRangeType_async(const ::Test::AMI_TestIntf_opBoolRangeTypePtr& __cb, const ::std::pair<const bool*, const bool*>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opBoolRangeType_async(const ::Test::AMI_TestIntf_opBoolRangeTypePtr& __cb, const ::std::pair<const bool*, const bool*>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::ByteList
IceProxy::Test::TestIntf::opByteRangeType(const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opByteRangeType_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opByteRangeType_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
                for(::Test::ByteList::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
                {
                    __os->write((*___inSeq));
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
                ::Test::ByteList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readByteList(__is, outSeq);
                ::Test::__readByteList(__is, __ret);
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
IceProxy::Test::TestIntf::opByteRangeType_async(const ::Test::AMI_TestIntf_opByteRangeTypePtr& __cb, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opByteRangeType_async(const ::Test::AMI_TestIntf_opByteRangeTypePtr& __cb, const ::std::pair< ::Test::ByteList::const_iterator,  ::Test::ByteList::const_iterator>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::VariableList
IceProxy::Test::TestIntf::opVariableRangeType(const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opVariableRangeType_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opVariableRangeType_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(IceUtilInternal::distance(inSeq.first, inSeq.second)));
                for(std::deque< ::Test::Variable>::const_iterator ___inSeq = inSeq.first; ___inSeq != inSeq.second; ++___inSeq)
                {
                    (*___inSeq).__write(__os);
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
                ::Test::VariableList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readVariableList(__is, outSeq);
                ::Test::__readVariableList(__is, __ret);
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
IceProxy::Test::TestIntf::opVariableRangeType_async(const ::Test::AMI_TestIntf_opVariableRangeTypePtr& __cb, const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opVariableRangeType_async(const ::Test::AMI_TestIntf_opVariableRangeTypePtr& __cb, const ::std::pair<std::deque< ::Test::Variable>::const_iterator, std::deque< ::Test::Variable>::const_iterator>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque<bool>
IceProxy::Test::TestIntf::opBoolSeq(const std::deque<bool>& inSeq, std::deque<bool>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opBoolSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opBoolSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque<bool>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    __os->write((*__p_inSeq));
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
                std::deque<bool> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque<bool>(__sz_outSeq).swap(outSeq);
                __is->checkFixedSeq(__sz_outSeq, 1);
                std::deque<bool>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    __is->read((*__p_outSeq));
                }
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque<bool>(__sz___ret).swap(__ret);
                __is->checkFixedSeq(__sz___ret, 1);
                std::deque<bool>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    __is->read((*__p___ret));
                }
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
IceProxy::Test::TestIntf::opBoolSeq_async(const ::Test::AMI_TestIntf_opBoolSeqPtr& __cb, const std::deque<bool>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opBoolSeq_async(const ::Test::AMI_TestIntf_opBoolSeqPtr& __cb, const std::deque<bool>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::BoolList
IceProxy::Test::TestIntf::opBoolList(const ::Test::BoolList& inSeq, ::Test::BoolList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opBoolList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opBoolList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeBoolList(__os, inSeq);
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
                ::Test::BoolList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readBoolList(__is, outSeq);
                ::Test::__readBoolList(__is, __ret);
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
IceProxy::Test::TestIntf::opBoolList_async(const ::Test::AMI_TestIntf_opBoolListPtr& __cb, const ::Test::BoolList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opBoolList_async(const ::Test::AMI_TestIntf_opBoolListPtr& __cb, const ::Test::BoolList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Ice::Byte>
IceProxy::Test::TestIntf::opByteSeq(const std::deque< ::Ice::Byte>& inSeq, std::deque< ::Ice::Byte>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opByteSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opByteSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Ice::Byte>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    __os->write((*__p_inSeq));
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
                std::deque< ::Ice::Byte> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Ice::Byte>(__sz_outSeq).swap(outSeq);
                __is->checkFixedSeq(__sz_outSeq, 1);
                std::deque< ::Ice::Byte>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    __is->read((*__p_outSeq));
                }
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Ice::Byte>(__sz___ret).swap(__ret);
                __is->checkFixedSeq(__sz___ret, 1);
                std::deque< ::Ice::Byte>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    __is->read((*__p___ret));
                }
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
IceProxy::Test::TestIntf::opByteSeq_async(const ::Test::AMI_TestIntf_opByteSeqPtr& __cb, const std::deque< ::Ice::Byte>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opByteSeq_async(const ::Test::AMI_TestIntf_opByteSeqPtr& __cb, const std::deque< ::Ice::Byte>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::ByteList
IceProxy::Test::TestIntf::opByteList(const ::Test::ByteList& inSeq, ::Test::ByteList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opByteList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opByteList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeByteList(__os, inSeq);
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
                ::Test::ByteList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readByteList(__is, outSeq);
                ::Test::__readByteList(__is, __ret);
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
IceProxy::Test::TestIntf::opByteList_async(const ::Test::AMI_TestIntf_opByteListPtr& __cb, const ::Test::ByteList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opByteList_async(const ::Test::AMI_TestIntf_opByteListPtr& __cb, const ::Test::ByteList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

MyByteSeq
IceProxy::Test::TestIntf::opMyByteSeq(const MyByteSeq& inSeq, MyByteSeq& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opMyByteSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opMyByteSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                MyByteSeq::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    __os->write((*__p_inSeq));
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
                MyByteSeq __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                MyByteSeq(__sz_outSeq).swap(outSeq);
                __is->checkFixedSeq(__sz_outSeq, 1);
                MyByteSeq::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    __is->read((*__p_outSeq));
                }
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                MyByteSeq(__sz___ret).swap(__ret);
                __is->checkFixedSeq(__sz___ret, 1);
                MyByteSeq::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    __is->read((*__p___ret));
                }
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
IceProxy::Test::TestIntf::opMyByteSeq_async(const ::Test::AMI_TestIntf_opMyByteSeqPtr& __cb, const MyByteSeq& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opMyByteSeq_async(const ::Test::AMI_TestIntf_opMyByteSeqPtr& __cb, const MyByteSeq& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque<std::string>
IceProxy::Test::TestIntf::opStringSeq(const std::deque<std::string>& inSeq, std::deque<std::string>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opStringSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opStringSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque<std::string>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    __os->write((*__p_inSeq));
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
                std::deque<std::string> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque<std::string>(__sz_outSeq).swap(outSeq);
                __is->startSeq(__sz_outSeq, 1);
                std::deque<std::string>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    __is->read((*__p_outSeq));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz_outSeq);
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque<std::string>(__sz___ret).swap(__ret);
                __is->startSeq(__sz___ret, 1);
                std::deque<std::string>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    __is->read((*__p___ret));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz___ret);
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
IceProxy::Test::TestIntf::opStringSeq_async(const ::Test::AMI_TestIntf_opStringSeqPtr& __cb, const std::deque<std::string>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opStringSeq_async(const ::Test::AMI_TestIntf_opStringSeqPtr& __cb, const std::deque<std::string>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::StringList
IceProxy::Test::TestIntf::opStringList(const ::Test::StringList& inSeq, ::Test::StringList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opStringList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opStringList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeStringList(__os, inSeq);
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
                ::Test::StringList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringList(__is, outSeq);
                ::Test::__readStringList(__is, __ret);
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
IceProxy::Test::TestIntf::opStringList_async(const ::Test::AMI_TestIntf_opStringListPtr& __cb, const ::Test::StringList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opStringList_async(const ::Test::AMI_TestIntf_opStringListPtr& __cb, const ::Test::StringList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Test::Fixed>
IceProxy::Test::TestIntf::opFixedSeq(const std::deque< ::Test::Fixed>& inSeq, std::deque< ::Test::Fixed>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opFixedSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opFixedSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Test::Fixed>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    (*__p_inSeq).__write(__os);
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
                std::deque< ::Test::Fixed> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Test::Fixed>(__sz_outSeq).swap(outSeq);
                __is->checkFixedSeq(__sz_outSeq, 2);
                std::deque< ::Test::Fixed>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    (*__p_outSeq).__read(__is);
                }
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Test::Fixed>(__sz___ret).swap(__ret);
                __is->checkFixedSeq(__sz___ret, 2);
                std::deque< ::Test::Fixed>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    (*__p___ret).__read(__is);
                }
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
IceProxy::Test::TestIntf::opFixedSeq_async(const ::Test::AMI_TestIntf_opFixedSeqPtr& __cb, const std::deque< ::Test::Fixed>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opFixedSeq_async(const ::Test::AMI_TestIntf_opFixedSeqPtr& __cb, const std::deque< ::Test::Fixed>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::FixedList
IceProxy::Test::TestIntf::opFixedList(const ::Test::FixedList& inSeq, ::Test::FixedList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opFixedList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opFixedList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeFixedList(__os, inSeq);
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
                ::Test::FixedList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readFixedList(__is, outSeq);
                ::Test::__readFixedList(__is, __ret);
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
IceProxy::Test::TestIntf::opFixedList_async(const ::Test::AMI_TestIntf_opFixedListPtr& __cb, const ::Test::FixedList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opFixedList_async(const ::Test::AMI_TestIntf_opFixedListPtr& __cb, const ::Test::FixedList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Test::Variable>
IceProxy::Test::TestIntf::opVariableSeq(const std::deque< ::Test::Variable>& inSeq, std::deque< ::Test::Variable>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opVariableSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opVariableSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Test::Variable>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    (*__p_inSeq).__write(__os);
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
                std::deque< ::Test::Variable> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Test::Variable>(__sz_outSeq).swap(outSeq);
                __is->startSeq(__sz_outSeq, 3);
                std::deque< ::Test::Variable>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    (*__p_outSeq).__read(__is);
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz_outSeq);
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Test::Variable>(__sz___ret).swap(__ret);
                __is->startSeq(__sz___ret, 3);
                std::deque< ::Test::Variable>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    (*__p___ret).__read(__is);
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz___ret);
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
IceProxy::Test::TestIntf::opVariableSeq_async(const ::Test::AMI_TestIntf_opVariableSeqPtr& __cb, const std::deque< ::Test::Variable>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opVariableSeq_async(const ::Test::AMI_TestIntf_opVariableSeqPtr& __cb, const std::deque< ::Test::Variable>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::VariableList
IceProxy::Test::TestIntf::opVariableList(const ::Test::VariableList& inSeq, ::Test::VariableList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opVariableList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opVariableList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeVariableList(__os, inSeq);
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
                ::Test::VariableList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readVariableList(__is, outSeq);
                ::Test::__readVariableList(__is, __ret);
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
IceProxy::Test::TestIntf::opVariableList_async(const ::Test::AMI_TestIntf_opVariableListPtr& __cb, const ::Test::VariableList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opVariableList_async(const ::Test::AMI_TestIntf_opVariableListPtr& __cb, const ::Test::VariableList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Test::StringStringDict>
IceProxy::Test::TestIntf::opStringStringDictSeq(const std::deque< ::Test::StringStringDict>& inSeq, std::deque< ::Test::StringStringDict>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opStringStringDictSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opStringStringDictSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Test::StringStringDict>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    ::Test::__writeStringStringDict(__os, (*__p_inSeq));
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
                std::deque< ::Test::StringStringDict> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Test::StringStringDict>(__sz_outSeq).swap(outSeq);
                __is->startSeq(__sz_outSeq, 1);
                std::deque< ::Test::StringStringDict>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    ::Test::__readStringStringDict(__is, (*__p_outSeq));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz_outSeq);
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Test::StringStringDict>(__sz___ret).swap(__ret);
                __is->startSeq(__sz___ret, 1);
                std::deque< ::Test::StringStringDict>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    ::Test::__readStringStringDict(__is, (*__p___ret));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz___ret);
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
IceProxy::Test::TestIntf::opStringStringDictSeq_async(const ::Test::AMI_TestIntf_opStringStringDictSeqPtr& __cb, const std::deque< ::Test::StringStringDict>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opStringStringDictSeq_async(const ::Test::AMI_TestIntf_opStringStringDictSeqPtr& __cb, const std::deque< ::Test::StringStringDict>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::StringStringDictList
IceProxy::Test::TestIntf::opStringStringDictList(const ::Test::StringStringDictList& inSeq, ::Test::StringStringDictList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opStringStringDictList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opStringStringDictList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeStringStringDictList(__os, inSeq);
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
                ::Test::StringStringDictList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readStringStringDictList(__is, outSeq);
                ::Test::__readStringStringDictList(__is, __ret);
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
IceProxy::Test::TestIntf::opStringStringDictList_async(const ::Test::AMI_TestIntf_opStringStringDictListPtr& __cb, const ::Test::StringStringDictList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opStringStringDictList_async(const ::Test::AMI_TestIntf_opStringStringDictListPtr& __cb, const ::Test::StringStringDictList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Test::E>
IceProxy::Test::TestIntf::opESeq(const std::deque< ::Test::E>& inSeq, std::deque< ::Test::E>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opESeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opESeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Test::E>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    ::Test::__write(__os, (*__p_inSeq));
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
                std::deque< ::Test::E> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Test::E>(__sz_outSeq).swap(outSeq);
                __is->checkFixedSeq(__sz_outSeq, 1);
                std::deque< ::Test::E>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    ::Test::__read(__is, (*__p_outSeq));
                }
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Test::E>(__sz___ret).swap(__ret);
                __is->checkFixedSeq(__sz___ret, 1);
                std::deque< ::Test::E>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    ::Test::__read(__is, (*__p___ret));
                }
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
IceProxy::Test::TestIntf::opESeq_async(const ::Test::AMI_TestIntf_opESeqPtr& __cb, const std::deque< ::Test::E>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opESeq_async(const ::Test::AMI_TestIntf_opESeqPtr& __cb, const std::deque< ::Test::E>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::EList
IceProxy::Test::TestIntf::opEList(const ::Test::EList& inSeq, ::Test::EList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opEList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opEList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeEList(__os, inSeq);
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
                ::Test::EList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readEList(__is, outSeq);
                ::Test::__readEList(__is, __ret);
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
IceProxy::Test::TestIntf::opEList_async(const ::Test::AMI_TestIntf_opEListPtr& __cb, const ::Test::EList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opEList_async(const ::Test::AMI_TestIntf_opEListPtr& __cb, const ::Test::EList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Test::CPrx>
IceProxy::Test::TestIntf::opCPrxSeq(const std::deque< ::Test::CPrx>& inSeq, std::deque< ::Test::CPrx>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opCPrxSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opCPrxSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Test::CPrx>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    __os->write(::Ice::ObjectPrx(::IceInternal::upCast((*__p_inSeq).get())));
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
                std::deque< ::Test::CPrx> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Test::CPrx>(__sz_outSeq).swap(outSeq);
                __is->startSeq(__sz_outSeq, 2);
                std::deque< ::Test::CPrx>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    ::Test::__read(__is, (*__p_outSeq));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz_outSeq);
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Test::CPrx>(__sz___ret).swap(__ret);
                __is->startSeq(__sz___ret, 2);
                std::deque< ::Test::CPrx>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    ::Test::__read(__is, (*__p___ret));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz___ret);
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
IceProxy::Test::TestIntf::opCPrxSeq_async(const ::Test::AMI_TestIntf_opCPrxSeqPtr& __cb, const std::deque< ::Test::CPrx>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opCPrxSeq_async(const ::Test::AMI_TestIntf_opCPrxSeqPtr& __cb, const std::deque< ::Test::CPrx>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::CPrxList
IceProxy::Test::TestIntf::opCPrxList(const ::Test::CPrxList& inSeq, ::Test::CPrxList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opCPrxList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opCPrxList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeCPrxList(__os, inSeq);
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
                ::Test::CPrxList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readCPrxList(__is, outSeq);
                ::Test::__readCPrxList(__is, __ret);
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
IceProxy::Test::TestIntf::opCPrxList_async(const ::Test::AMI_TestIntf_opCPrxListPtr& __cb, const ::Test::CPrxList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opCPrxList_async(const ::Test::AMI_TestIntf_opCPrxListPtr& __cb, const ::Test::CPrxList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

std::deque< ::Test::CPtr>
IceProxy::Test::TestIntf::opCSeq(const std::deque< ::Test::CPtr>& inSeq, std::deque< ::Test::CPtr>& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opCSeq_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opCSeq_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->writeSize(static_cast< ::Ice::Int>(inSeq.size()));
                std::deque< ::Test::CPtr>::const_iterator __p_inSeq;
                for(__p_inSeq = inSeq.begin(); __p_inSeq != inSeq.end(); ++__p_inSeq)
                {
                    __os->write(::Ice::ObjectPtr(::IceInternal::upCast((*__p_inSeq).get())));
                }
                __os->writePendingObjects();
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
                std::deque< ::Test::CPtr> __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Ice::Int __sz_outSeq;
                __is->readSize(__sz_outSeq);
                std::deque< ::Test::CPtr>(__sz_outSeq).swap(outSeq);
                __is->startSeq(__sz_outSeq, 4);
                std::deque< ::Test::CPtr>::iterator __p_outSeq;
                for(__p_outSeq = outSeq.begin(); __p_outSeq != outSeq.end(); ++__p_outSeq)
                {
                    __is->read(::Test::__patch__CPtr, &(*__p_outSeq));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz_outSeq);
                ::Ice::Int __sz___ret;
                __is->readSize(__sz___ret);
                std::deque< ::Test::CPtr>(__sz___ret).swap(__ret);
                __is->startSeq(__sz___ret, 4);
                std::deque< ::Test::CPtr>::iterator __p___ret;
                for(__p___ret = __ret.begin(); __p___ret != __ret.end(); ++__p___ret)
                {
                    __is->read(::Test::__patch__CPtr, &(*__p___ret));
                    __is->checkSeq();
                    __is->endElement();
                }
                __is->endSeq(__sz___ret);
                __is->readPendingObjects();
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
IceProxy::Test::TestIntf::opCSeq_async(const ::Test::AMI_TestIntf_opCSeqPtr& __cb, const std::deque< ::Test::CPtr>& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opCSeq_async(const ::Test::AMI_TestIntf_opCSeqPtr& __cb, const std::deque< ::Test::CPtr>& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

::Test::CList
IceProxy::Test::TestIntf::opCList(const ::Test::CList& inSeq, ::Test::CList& outSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opCList_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__opCList_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                ::Test::__writeCList(__os, inSeq);
                __os->writePendingObjects();
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
                ::Test::CList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::Test::__readCList(__is, outSeq);
                ::Test::__readCList(__is, __ret);
                __is->readPendingObjects();
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
IceProxy::Test::TestIntf::opCList_async(const ::Test::AMI_TestIntf_opCListPtr& __cb, const ::Test::CList& inSeq)
{
    return __cb->__invoke(this, inSeq, 0);
}

bool
IceProxy::Test::TestIntf::opCList_async(const ::Test::AMI_TestIntf_opCListPtr& __cb, const ::Test::CList& inSeq, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, inSeq, &__ctx);
}
#endif

void
IceProxy::Test::TestIntf::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Test__TestIntf__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestIntf::shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr& __cb)
{
    return __cb->__invoke(this, 0);
}

bool
IceProxy::Test::TestIntf::shutdown_async(const ::Test::AMI_TestIntf_shutdownPtr& __cb, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, &__ctx);
}
#endif

const ::std::string&
IceProxy::Test::TestIntf::ice_staticId()
{
    return __Test__TestIntf_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::Test::TestIntf::__newInstance() const
{
    return new TestIntf;
}
