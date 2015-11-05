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

class TestIntf;

class RemoteObjectAdapter;

class RemoteCommunicator;

}

}

namespace Test
{

class TestIntf;
bool operator==(const TestIntf&, const TestIntf&);
bool operator<(const TestIntf&, const TestIntf&);

class RemoteObjectAdapter;
bool operator==(const RemoteObjectAdapter&, const RemoteObjectAdapter&);
bool operator<(const RemoteObjectAdapter&, const RemoteObjectAdapter&);

class RemoteCommunicator;
bool operator==(const RemoteCommunicator&, const RemoteCommunicator&);
bool operator<(const RemoteCommunicator&, const RemoteCommunicator&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Test::TestIntf*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::TestIntf*);

::Ice::Object* upCast(::Test::RemoteObjectAdapter*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::RemoteObjectAdapter*);

::Ice::Object* upCast(::Test::RemoteCommunicator*);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::RemoteCommunicator*);

}

namespace Test
{

typedef ::IceInternal::Handle< ::Test::TestIntf> TestIntfPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf> TestIntfPrx;

void __read(::IceInternal::BasicStream*, TestIntfPrx&);
void __patch__TestIntfPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::RemoteObjectAdapter> RemoteObjectAdapterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::RemoteObjectAdapter> RemoteObjectAdapterPrx;

void __read(::IceInternal::BasicStream*, RemoteObjectAdapterPrx&);
void __patch__RemoteObjectAdapterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Test::RemoteCommunicator> RemoteCommunicatorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::RemoteCommunicator> RemoteCommunicatorPrx;

void __read(::IceInternal::BasicStream*, RemoteCommunicatorPrx&);
void __patch__RemoteCommunicatorPtr(void*, ::Ice::ObjectPtr&);

}

namespace Test
{

}

namespace Test
{

class TestIntf : virtual public ::Ice::Object
{
public:

    typedef TestIntfPrx ProxyType;
    typedef TestIntfPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string getAdapterName(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getAdapterName(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class RemoteObjectAdapter : virtual public ::Ice::Object
{
public:

    typedef RemoteObjectAdapterPrx ProxyType;
    typedef RemoteObjectAdapterPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::TestIntfPrx getTestIntf(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getTestIntf(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void deactivate(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___deactivate(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class RemoteCommunicator : virtual public ::Ice::Object
{
public:

    typedef RemoteCommunicatorPrx ProxyType;
    typedef RemoteCommunicatorPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Test::RemoteObjectAdapterPrx createObjectAdapter(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___createObjectAdapter(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void deactivateObjectAdapter(const ::Test::RemoteObjectAdapterPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___deactivateObjectAdapter(::IceInternal::Incoming&, const ::Ice::Current&);
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

class AMI_TestIntf_getAdapterName : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::Test::TestIntfPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::Test::AMI_TestIntf_getAdapterName> AMI_TestIntf_getAdapterNamePtr;
#endif

}

namespace IceProxy
{

namespace Test
{

class TestIntf : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string getAdapterName()
    {
        return getAdapterName(0);
    }
    ::std::string getAdapterName(const ::Ice::Context& __ctx)
    {
        return getAdapterName(&__ctx);
    }
    
private:

    ::std::string getAdapterName(const ::Ice::Context*);
    
public:
    #ifdef ICEE_HAS_AMI
    bool getAdapterName_async(const ::Test::AMI_TestIntf_getAdapterNamePtr&);
    bool getAdapterName_async(const ::Test::AMI_TestIntf_getAdapterNamePtr&, const ::Ice::Context&);
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

class RemoteObjectAdapter : virtual public ::IceProxy::Ice::Object
{
public:

    ::Test::TestIntfPrx getTestIntf()
    {
        return getTestIntf(0);
    }
    ::Test::TestIntfPrx getTestIntf(const ::Ice::Context& __ctx)
    {
        return getTestIntf(&__ctx);
    }
    
private:

    ::Test::TestIntfPrx getTestIntf(const ::Ice::Context*);
    
public:

    void deactivate()
    {
        deactivate(0);
    }
    void deactivate(const ::Ice::Context& __ctx)
    {
        deactivate(&__ctx);
    }
    
private:

    void deactivate(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_secure(bool __secure) const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_twoway() const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_oneway() const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_batchOneway() const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_datagram() const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_batchDatagram() const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteObjectAdapter> ice_timeout(int __timeout) const
    {
        return dynamic_cast<RemoteObjectAdapter*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RemoteCommunicator : virtual public ::IceProxy::Ice::Object
{
public:

    ::Test::RemoteObjectAdapterPrx createObjectAdapter(const ::std::string& name, const ::std::string& endpoints)
    {
        return createObjectAdapter(name, endpoints, 0);
    }
    ::Test::RemoteObjectAdapterPrx createObjectAdapter(const ::std::string& name, const ::std::string& endpoints, const ::Ice::Context& __ctx)
    {
        return createObjectAdapter(name, endpoints, &__ctx);
    }
    
private:

    ::Test::RemoteObjectAdapterPrx createObjectAdapter(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    void deactivateObjectAdapter(const ::Test::RemoteObjectAdapterPrx& adapter)
    {
        deactivateObjectAdapter(adapter, 0);
    }
    void deactivateObjectAdapter(const ::Test::RemoteObjectAdapterPrx& adapter, const ::Ice::Context& __ctx)
    {
        deactivateObjectAdapter(adapter, &__ctx);
    }
    
private:

    void deactivateObjectAdapter(const ::Test::RemoteObjectAdapterPrx&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_secure(bool __secure) const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_twoway() const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_oneway() const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_batchOneway() const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_datagram() const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_batchDatagram() const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<RemoteCommunicator> ice_timeout(int __timeout) const
    {
        return dynamic_cast<RemoteCommunicator*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
