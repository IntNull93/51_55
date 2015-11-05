// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Value.ice'

#include <Value.h>
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

static const ::std::string __Demo__Printer__printBackwards_name = "printBackwards";

static const ::std::string __Demo__DerivedPrinter__printUppercase_name = "printUppercase";

static const ::std::string __Demo__Initial__getSimple_name = "getSimple";

static const ::std::string __Demo__Initial__getPrinter_name = "getPrinter";

static const ::std::string __Demo__Initial__getDerivedPrinter_name = "getDerivedPrinter";

static const ::std::string __Demo__Initial__throwDerivedPrinter_name = "throwDerivedPrinter";

static const ::std::string __Demo__Initial__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Demo::Simple* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::Simple* p) { return p; }

::Ice::Object* IceInternal::upCast(::Demo::Printer* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::Printer* p) { return p; }

::Ice::Object* IceInternal::upCast(::Demo::DerivedPrinter* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::DerivedPrinter* p) { return p; }

::Ice::Object* IceInternal::upCast(::Demo::Initial* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::Initial* p) { return p; }

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::SimplePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Simple;
        v->__copyFrom(proxy);
    }
}

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::PrinterPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Printer;
        v->__copyFrom(proxy);
    }
}

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::DerivedPrinterPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::DerivedPrinter;
        v->__copyFrom(proxy);
    }
}

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::InitialPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Initial;
        v->__copyFrom(proxy);
    }
}

Demo::DerivedPrinterException::DerivedPrinterException(const ::Demo::DerivedPrinterPtr& __ice_derived) :
    ::Ice::UserException(),
    derived(__ice_derived)
{
}

Demo::DerivedPrinterException::~DerivedPrinterException() throw()
{
}

static const char* __Demo__DerivedPrinterException_name = "Demo::DerivedPrinterException";

::std::string
Demo::DerivedPrinterException::ice_name() const
{
    return __Demo__DerivedPrinterException_name;
}

::Ice::Exception*
Demo::DerivedPrinterException::ice_clone() const
{
    return new DerivedPrinterException(*this);
}

void
Demo::DerivedPrinterException::ice_throw() const
{
    throw *this;
}

void
Demo::DerivedPrinterException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Demo::DerivedPrinterException"), false);
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(derived.get())));
    __os->endWriteSlice();
}

void
Demo::DerivedPrinterException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(::Demo::__patch__DerivedPrinterPtr, &derived);
    __is->endReadSlice();
}

bool
Demo::DerivedPrinterException::__usesClasses() const
{
    return true;
}

struct __F__Demo__DerivedPrinterException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Demo::DerivedPrinterException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Demo__DerivedPrinterException__Ptr = new __F__Demo__DerivedPrinterException;

const ::IceInternal::UserExceptionFactoryPtr&
Demo::DerivedPrinterException::ice_factory()
{
    return __F__Demo__DerivedPrinterException__Ptr;
}

class __F__Demo__DerivedPrinterException__Init
{
public:

    __F__Demo__DerivedPrinterException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Demo::DerivedPrinterException", ::Demo::DerivedPrinterException::ice_factory());
    }

    ~__F__Demo__DerivedPrinterException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Demo::DerivedPrinterException");
    }
};

static __F__Demo__DerivedPrinterException__Init __F__Demo__DerivedPrinterException__i;

#ifdef __APPLE__
extern "C" { void __F__Demo__DerivedPrinterException__initializer() {} }
#endif

Demo::Simple::Simple(const ::std::string& __ice_message) :
    message(__ice_message)
{
}

static const ::std::string __Demo__Simple_ids[2] =
{
    "::Demo::Simple",
    "::Ice::Object"
};

bool
Demo::Simple::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Simple_ids, __Demo__Simple_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Simple::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Simple_ids[0], &__Demo__Simple_ids[2]);
}

const ::std::string&
Demo::Simple::ice_id(const ::Ice::Current&) const
{
    return __Demo__Simple_ids[0];
}

const ::std::string&
Demo::Simple::ice_staticId()
{
    return __Demo__Simple_ids[0];
}

void
Demo::Simple::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(message);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Demo::Simple::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(message);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}

class __F__Demo__Simple : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::Demo::Simple::ice_staticId());
        return new ::Demo::Simple;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__Demo__Simple_Ptr = new __F__Demo__Simple;

const ::Ice::ObjectFactoryPtr&
Demo::Simple::ice_factory()
{
    return __F__Demo__Simple_Ptr;
}

class __F__Demo__Simple__Init
{
public:

    __F__Demo__Simple__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Demo::Simple::ice_staticId(), ::Demo::Simple::ice_factory());
    }

    ~__F__Demo__Simple__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Demo::Simple::ice_staticId());
    }
};

static __F__Demo__Simple__Init __F__Demo__Simple__i;

#ifdef __APPLE__
extern "C" { void __F__Demo__Simple__initializer() {} }
#endif


bool
Demo::operator==(const ::Demo::Simple& l, const ::Demo::Simple& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::Simple& l, const ::Demo::Simple& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Demo::__patch__SimplePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::SimplePtr* p = static_cast< ::Demo::SimplePtr*>(__addr);
    assert(p);
    *p = ::Demo::SimplePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::Simple::ice_staticId(), v->ice_id());
    }
}

Demo::Printer::Printer(const ::std::string& __ice_message) :
    message(__ice_message)
{
}

static const ::std::string __Demo__Printer_ids[2] =
{
    "::Demo::Printer",
    "::Ice::Object"
};

bool
Demo::Printer::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Printer_ids, __Demo__Printer_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Printer::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Printer_ids[0], &__Demo__Printer_ids[2]);
}

const ::std::string&
Demo::Printer::ice_id(const ::Ice::Current&) const
{
    return __Demo__Printer_ids[0];
}

const ::std::string&
Demo::Printer::ice_staticId()
{
    return __Demo__Printer_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Printer::___printBackwards(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    printBackwards(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Demo__Printer_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printBackwards"
};

::Ice::DispatchStatus
Demo::Printer::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Demo__Printer_all, __Demo__Printer_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Printer_all)
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
            return ___printBackwards(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Demo::Printer::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(message);
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Demo::Printer::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(message);
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
Demo::operator==(const ::Demo::Printer& l, const ::Demo::Printer& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::Printer& l, const ::Demo::Printer& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Demo::__patch__PrinterPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::PrinterPtr* p = static_cast< ::Demo::PrinterPtr*>(__addr);
    assert(p);
    *p = ::Demo::PrinterPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::Printer::ice_staticId(), v->ice_id());
    }
}

Demo::DerivedPrinter::DerivedPrinter(const ::std::string& __ice_message, const ::std::string& __ice_derivedMessage) :
    ::Demo::Printer(__ice_message)
    ,
    derivedMessage(__ice_derivedMessage)
{
}

static const ::std::string __Demo__DerivedPrinter_ids[3] =
{
    "::Demo::DerivedPrinter",
    "::Demo::Printer",
    "::Ice::Object"
};

bool
Demo::DerivedPrinter::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__DerivedPrinter_ids, __Demo__DerivedPrinter_ids + 3, _s);
}

::std::vector< ::std::string>
Demo::DerivedPrinter::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__DerivedPrinter_ids[0], &__Demo__DerivedPrinter_ids[3]);
}

const ::std::string&
Demo::DerivedPrinter::ice_id(const ::Ice::Current&) const
{
    return __Demo__DerivedPrinter_ids[0];
}

const ::std::string&
Demo::DerivedPrinter::ice_staticId()
{
    return __Demo__DerivedPrinter_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::DerivedPrinter::___printUppercase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    printUppercase(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Demo__DerivedPrinter_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printBackwards",
    "printUppercase"
};

::Ice::DispatchStatus
Demo::DerivedPrinter::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Demo__DerivedPrinter_all, __Demo__DerivedPrinter_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__DerivedPrinter_all)
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
            return ___printBackwards(in, current);
        }
        case 5:
        {
            return ___printUppercase(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Demo::DerivedPrinter::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(derivedMessage);
    __os->endWriteSlice();
    ::Demo::Printer::__write(__os);
}

void
Demo::DerivedPrinter::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(derivedMessage);
    __is->endReadSlice();
    ::Demo::Printer::__read(__is, true);
}


bool
Demo::operator==(const ::Demo::DerivedPrinter& l, const ::Demo::DerivedPrinter& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::DerivedPrinter& l, const ::Demo::DerivedPrinter& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Demo::__patch__DerivedPrinterPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::DerivedPrinterPtr* p = static_cast< ::Demo::DerivedPrinterPtr*>(__addr);
    assert(p);
    *p = ::Demo::DerivedPrinterPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::DerivedPrinter::ice_staticId(), v->ice_id());
    }
}

static const ::std::string __Demo__Initial_ids[2] =
{
    "::Demo::Initial",
    "::Ice::Object"
};

bool
Demo::Initial::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Initial_ids, __Demo__Initial_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Initial::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Initial_ids[0], &__Demo__Initial_ids[2]);
}

const ::std::string&
Demo::Initial::ice_id(const ::Ice::Current&) const
{
    return __Demo__Initial_ids[0];
}

const ::std::string&
Demo::Initial::ice_staticId()
{
    return __Demo__Initial_ids[0];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Initial::___getSimple(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::SimplePtr __ret = getSimple(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Initial::___getPrinter(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::PrinterPtr impl;
    ::Demo::PrinterPrx proxy;
    getPrinter(impl, proxy, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(impl.get())));
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(proxy.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Initial::___getDerivedPrinter(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Demo::PrinterPtr __ret = getDerivedPrinter(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Initial::___throwDerivedPrinter(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        throwDerivedPrinter(__current);
    }
    catch(const ::Demo::DerivedPrinterException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
Demo::Initial::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    shutdown(__current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __Demo__Initial_all[] =
{
    "getDerivedPrinter",
    "getPrinter",
    "getSimple",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown",
    "throwDerivedPrinter"
};

::Ice::DispatchStatus
Demo::Initial::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Demo__Initial_all, __Demo__Initial_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Initial_all)
    {
        case 0:
        {
            return ___getDerivedPrinter(in, current);
        }
        case 1:
        {
            return ___getPrinter(in, current);
        }
        case 2:
        {
            return ___getSimple(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___shutdown(in, current);
        }
        case 8:
        {
            return ___throwDerivedPrinter(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
Demo::Initial::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
Demo::Initial::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Demo::operator==(const ::Demo::Initial& l, const ::Demo::Initial& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::Initial& l, const ::Demo::Initial& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
Demo::__patch__InitialPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::InitialPtr* p = static_cast< ::Demo::InitialPtr*>(__addr);
    assert(p);
    *p = ::Demo::InitialPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::Initial::ice_staticId(), v->ice_id());
    }
}

const ::std::string&
IceProxy::Demo::Simple::ice_staticId()
{
    return __Demo__Simple_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Demo::Simple::__newInstance() const
{
    return new Simple;
}

void
IceProxy::Demo::Printer::printBackwards(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Printer__printBackwards_name, ::Ice::Normal, __ctx);
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
IceProxy::Demo::Printer::ice_staticId()
{
    return __Demo__Printer_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Demo::Printer::__newInstance() const
{
    return new Printer;
}

void
IceProxy::Demo::DerivedPrinter::printUppercase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__DerivedPrinter__printUppercase_name, ::Ice::Normal, __ctx);
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
IceProxy::Demo::DerivedPrinter::ice_staticId()
{
    return __Demo__DerivedPrinter_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Demo::DerivedPrinter::__newInstance() const
{
    return new DerivedPrinter;
}

::Demo::SimplePtr
IceProxy::Demo::Initial::getSimple(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Initial__getSimple_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Initial__getSimple_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Demo::SimplePtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Demo::__patch__SimplePtr, &__ret);
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

void
IceProxy::Demo::Initial::getPrinter(::Demo::PrinterPtr& impl, ::Demo::PrinterPrx& proxy, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Initial__getPrinter_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Initial__getPrinter_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Demo::__patch__PrinterPtr, &impl);
                ::Demo::__read(__is, proxy);
                __is->readPendingObjects();
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

::Demo::PrinterPtr
IceProxy::Demo::Initial::getDerivedPrinter(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Initial__getDerivedPrinter_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Initial__getDerivedPrinter_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::Demo::PrinterPtr __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(::Demo::__patch__PrinterPtr, &__ret);
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

void
IceProxy::Demo::Initial::throwDerivedPrinter(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__Demo__Initial__throwDerivedPrinter_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Initial__throwDerivedPrinter_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::Demo::DerivedPrinterException&)
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

void
IceProxy::Demo::Initial::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __Demo__Initial__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Demo::Initial::ice_staticId()
{
    return __Demo__Initial_ids[0];
}

::IceProxy::Ice::Object*
IceProxy::Demo::Initial::__newInstance() const
{
    return new Initial;
}
