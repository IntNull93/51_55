// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Session.ice'

#ifndef __Session_h__
#define __Session_h__

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
#include <IceE/BuiltinSequences.h>
#include <IceE/Identity.h>
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

class Session;

class StringSet;

class IdentitySet;

class SessionControl;

class SessionManager;

}

}

namespace Glacier2
{

class Session;
bool operator==(const Session&, const Session&);
bool operator<(const Session&, const Session&);

class StringSet;
bool operator==(const StringSet&, const StringSet&);
bool operator<(const StringSet&, const StringSet&);

class IdentitySet;
bool operator==(const IdentitySet&, const IdentitySet&);
bool operator<(const IdentitySet&, const IdentitySet&);

class SessionControl;
bool operator==(const SessionControl&, const SessionControl&);
bool operator<(const SessionControl&, const SessionControl&);

class SessionManager;
bool operator==(const SessionManager&, const SessionManager&);
bool operator<(const SessionManager&, const SessionManager&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Glacier2::Session*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::Session*);

::Ice::Object* upCast(::Glacier2::StringSet*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::StringSet*);

::Ice::Object* upCast(::Glacier2::IdentitySet*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::IdentitySet*);

::Ice::Object* upCast(::Glacier2::SessionControl*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::SessionControl*);

::Ice::Object* upCast(::Glacier2::SessionManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::SessionManager*);

}

namespace Glacier2
{

typedef ::IceInternal::Handle< ::Glacier2::Session> SessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Session> SessionPrx;

void __read(::IceInternal::BasicStream*, SessionPrx&);
void __patch__SessionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Glacier2::StringSet> StringSetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::StringSet> StringSetPrx;

void __read(::IceInternal::BasicStream*, StringSetPrx&);
void __patch__StringSetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Glacier2::IdentitySet> IdentitySetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::IdentitySet> IdentitySetPrx;

void __read(::IceInternal::BasicStream*, IdentitySetPrx&);
void __patch__IdentitySetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Glacier2::SessionControl> SessionControlPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::SessionControl> SessionControlPrx;

void __read(::IceInternal::BasicStream*, SessionControlPrx&);
void __patch__SessionControlPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Glacier2::SessionManager> SessionManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::SessionManager> SessionManagerPrx;

void __read(::IceInternal::BasicStream*, SessionManagerPrx&);
void __patch__SessionManagerPtr(void*, ::Ice::ObjectPtr&);

}

namespace Ice
{

typedef ::std::vector< ::Ice::Identity> IdentitySeq;
void __writeIdentitySeq(::IceInternal::BasicStream*, const ::Ice::Identity*, const ::Ice::Identity*);
void __readIdentitySeq(::IceInternal::BasicStream*, IdentitySeq&);

}

namespace Glacier2
{

class CannotCreateSessionException : public ::Ice::UserException
{
public:

    CannotCreateSessionException() {}
    explicit CannotCreateSessionException(const ::std::string&);
    virtual ~CannotCreateSessionException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static CannotCreateSessionException __CannotCreateSessionException_init;

}

namespace Glacier2
{

class Session : virtual public ::Ice::Object
{
public:

    typedef SessionPrx ProxyType;
    typedef SessionPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void destroy(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___destroy(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class StringSet : virtual public ::Ice::Object
{
public:

    typedef StringSetPrx ProxyType;
    typedef StringSetPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void add(const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___add(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void remove(const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___remove(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::StringSeq get(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class IdentitySet : virtual public ::Ice::Object
{
public:

    typedef IdentitySetPrx ProxyType;
    typedef IdentitySetPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void add(const ::Ice::IdentitySeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___add(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void remove(const ::Ice::IdentitySeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___remove(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Ice::IdentitySeq get(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class SessionControl : virtual public ::Ice::Object
{
public:

    typedef SessionControlPrx ProxyType;
    typedef SessionControlPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Glacier2::StringSetPrx categories(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___categories(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Glacier2::StringSetPrx adapterIds(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___adapterIds(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::Glacier2::IdentitySetPrx identities(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___identities(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void destroy(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___destroy(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class SessionManager : virtual public ::Ice::Object
{
public:

    typedef SessionManagerPrx ProxyType;
    typedef SessionManagerPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Glacier2::SessionPrx create(const ::std::string&, const ::Glacier2::SessionControlPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___create(::IceInternal::Incoming&, const ::Ice::Current&);
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

class Session : virtual public ::IceProxy::Ice::Object
{
public:

    void destroy()
    {
        destroy(0);
    }
    void destroy(const ::Ice::Context& __ctx)
    {
        destroy(&__ctx);
    }
    
private:

    void destroy(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Session> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_secure(bool __secure) const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Session> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Session> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Session> ice_twoway() const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_oneway() const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_batchOneway() const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_datagram() const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_batchDatagram() const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Session> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class StringSet : virtual public ::IceProxy::Ice::Object
{
public:

    void add(const ::Ice::StringSeq& additions)
    {
        add(additions, 0);
    }
    void add(const ::Ice::StringSeq& additions, const ::Ice::Context& __ctx)
    {
        add(additions, &__ctx);
    }
    
private:

    void add(const ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    void remove(const ::Ice::StringSeq& deletions)
    {
        remove(deletions, 0);
    }
    void remove(const ::Ice::StringSeq& deletions, const ::Ice::Context& __ctx)
    {
        remove(deletions, &__ctx);
    }
    
private:

    void remove(const ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::StringSeq get()
    {
        return get(0);
    }
    ::Ice::StringSeq get(const ::Ice::Context& __ctx)
    {
        return get(&__ctx);
    }
    
private:

    ::Ice::StringSeq get(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<StringSet> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_secure(bool __secure) const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<StringSet> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<StringSet> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<StringSet> ice_twoway() const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_oneway() const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_batchOneway() const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_datagram() const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_batchDatagram() const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<StringSet> ice_timeout(int __timeout) const
    {
        return dynamic_cast<StringSet*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class IdentitySet : virtual public ::IceProxy::Ice::Object
{
public:

    void add(const ::Ice::IdentitySeq& additions)
    {
        add(additions, 0);
    }
    void add(const ::Ice::IdentitySeq& additions, const ::Ice::Context& __ctx)
    {
        add(additions, &__ctx);
    }
    
private:

    void add(const ::Ice::IdentitySeq&, const ::Ice::Context*);
    
public:

    void remove(const ::Ice::IdentitySeq& deletions)
    {
        remove(deletions, 0);
    }
    void remove(const ::Ice::IdentitySeq& deletions, const ::Ice::Context& __ctx)
    {
        remove(deletions, &__ctx);
    }
    
private:

    void remove(const ::Ice::IdentitySeq&, const ::Ice::Context*);
    
public:

    ::Ice::IdentitySeq get()
    {
        return get(0);
    }
    ::Ice::IdentitySeq get(const ::Ice::Context& __ctx)
    {
        return get(&__ctx);
    }
    
private:

    ::Ice::IdentitySeq get(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_secure(bool __secure) const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<IdentitySet> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<IdentitySet> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_twoway() const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_oneway() const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_batchOneway() const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_datagram() const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_batchDatagram() const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<IdentitySet> ice_timeout(int __timeout) const
    {
        return dynamic_cast<IdentitySet*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SessionControl : virtual public ::IceProxy::Ice::Object
{
public:

    ::Glacier2::StringSetPrx categories()
    {
        return categories(0);
    }
    ::Glacier2::StringSetPrx categories(const ::Ice::Context& __ctx)
    {
        return categories(&__ctx);
    }
    
private:

    ::Glacier2::StringSetPrx categories(const ::Ice::Context*);
    
public:

    ::Glacier2::StringSetPrx adapterIds()
    {
        return adapterIds(0);
    }
    ::Glacier2::StringSetPrx adapterIds(const ::Ice::Context& __ctx)
    {
        return adapterIds(&__ctx);
    }
    
private:

    ::Glacier2::StringSetPrx adapterIds(const ::Ice::Context*);
    
public:

    ::Glacier2::IdentitySetPrx identities()
    {
        return identities(0);
    }
    ::Glacier2::IdentitySetPrx identities(const ::Ice::Context& __ctx)
    {
        return identities(&__ctx);
    }
    
private:

    ::Glacier2::IdentitySetPrx identities(const ::Ice::Context*);
    
public:

    void destroy()
    {
        destroy(0);
    }
    void destroy(const ::Ice::Context& __ctx)
    {
        destroy(&__ctx);
    }
    
private:

    void destroy(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<SessionControl> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_secure(bool __secure) const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SessionControl> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SessionControl> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SessionControl> ice_twoway() const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_oneway() const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_batchOneway() const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_datagram() const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_batchDatagram() const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SessionControl> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SessionControl*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SessionManager : virtual public ::IceProxy::Ice::Object
{
public:

    ::Glacier2::SessionPrx create(const ::std::string& userId, const ::Glacier2::SessionControlPrx& control)
    {
        return create(userId, control, 0);
    }
    ::Glacier2::SessionPrx create(const ::std::string& userId, const ::Glacier2::SessionControlPrx& control, const ::Ice::Context& __ctx)
    {
        return create(userId, control, &__ctx);
    }
    
private:

    ::Glacier2::SessionPrx create(const ::std::string&, const ::Glacier2::SessionControlPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<SessionManager> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_secure(bool __secure) const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<SessionManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<SessionManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<SessionManager> ice_twoway() const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_oneway() const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_batchOneway() const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_datagram() const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_batchDatagram() const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SessionManager> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SessionManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
