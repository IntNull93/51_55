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

#ifndef __Router_h__
#define __Router_h__

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
#include <IceE/UserExceptionFactory.h>
#include <IceE/FactoryTable.h>
#include <IceE/Router.h>
#include <Session.h>
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

namespace Glacier2
{

class Router;

class Admin;

}

}

namespace Glacier2
{

class Router;
bool operator==(const Router&, const Router&);
bool operator<(const Router&, const Router&);

class Admin;
bool operator==(const Admin&, const Admin&);
bool operator<(const Admin&, const Admin&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Glacier2::Router*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::Router*);

::Ice::Object* upCast(::Glacier2::Admin*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::Admin*);

}

namespace Glacier2
{

typedef ::IceInternal::Handle< ::Glacier2::Router> RouterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Router> RouterPrx;

void __read(::IceInternal::BasicStream*, RouterPrx&);
void __patch__RouterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Glacier2::Admin> AdminPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Admin> AdminPrx;

void __read(::IceInternal::BasicStream*, AdminPrx&);
void __patch__AdminPtr(void*, ::Ice::ObjectPtr&);

}

namespace Glacier2
{

class PermissionDeniedException : public ::Ice::UserException
{
public:

    PermissionDeniedException() {}
    explicit PermissionDeniedException(const ::std::string&);
    virtual ~PermissionDeniedException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static PermissionDeniedException __PermissionDeniedException_init;

class SessionNotExistException : public ::Ice::UserException
{
public:

    SessionNotExistException() {}
    virtual ~SessionNotExistException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace Glacier2
{

class Router : virtual public ::Ice::Router
{
public:

    typedef RouterPrx ProxyType;
    typedef RouterPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string getCategoryForClient(const ::Ice::Current& = ::Ice::Current()) const = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getCategoryForClient(::IceInternal::Incoming&, const ::Ice::Current&) const;
#endif // ICEE_PURE_CLIENT

    virtual ::Glacier2::SessionPrx createSession(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___createSession(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void destroySession(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___destroySession(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::Long getSessionTimeout(const ::Ice::Current& = ::Ice::Current()) const = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getSessionTimeout(::IceInternal::Incoming&, const ::Ice::Current&) const;
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class Admin : virtual public ::Ice::Object
{
public:

    typedef AdminPrx ProxyType;
    typedef AdminPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

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

namespace IceProxy
{

namespace Glacier2
{

class Router : virtual public ::IceProxy::Ice::Router
{
public:

    ::std::string getCategoryForClient()
    {
        return getCategoryForClient(0);
    }
    ::std::string getCategoryForClient(const ::Ice::Context& __ctx)
    {
        return getCategoryForClient(&__ctx);
    }
    
private:

    ::std::string getCategoryForClient(const ::Ice::Context*);
    
public:

    ::Glacier2::SessionPrx createSession(const ::std::string& userId, const ::std::string& password)
    {
        return createSession(userId, password, 0);
    }
    ::Glacier2::SessionPrx createSession(const ::std::string& userId, const ::std::string& password, const ::Ice::Context& __ctx)
    {
        return createSession(userId, password, &__ctx);
    }
    
private:

    ::Glacier2::SessionPrx createSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    void destroySession()
    {
        destroySession(0);
    }
    void destroySession(const ::Ice::Context& __ctx)
    {
        destroySession(&__ctx);
    }
    
private:

    void destroySession(const ::Ice::Context*);
    
public:

    ::Ice::Long getSessionTimeout()
    {
        return getSessionTimeout(0);
    }
    ::Ice::Long getSessionTimeout(const ::Ice::Context& __ctx)
    {
        return getSessionTimeout(&__ctx);
    }
    
private:

    ::Ice::Long getSessionTimeout(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Router> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_secure(bool __secure) const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Router> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Router> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Router> ice_twoway() const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_oneway() const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_batchOneway() const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_datagram() const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_batchDatagram() const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Router> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Router*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Admin : virtual public ::IceProxy::Ice::Object
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
    
    ::IceInternal::ProxyHandle<Admin> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_secure(bool __secure) const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Admin> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Admin> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Admin> ice_twoway() const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_oneway() const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_batchOneway() const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_datagram() const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_batchDatagram() const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Admin> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Admin*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
