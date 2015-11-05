// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Chat.ice'

#ifndef __Chat_h__
#define __Chat_h__

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

namespace Demo
{

class ChatCallback;

class ChatSession;

}

}

namespace Demo
{

class ChatCallback;
bool operator==(const ChatCallback&, const ChatCallback&);
bool operator<(const ChatCallback&, const ChatCallback&);

class ChatSession;
bool operator==(const ChatSession&, const ChatSession&);
bool operator<(const ChatSession&, const ChatSession&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Demo::ChatCallback*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::ChatCallback*);

::Ice::Object* upCast(::Demo::ChatSession*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::ChatSession*);

}

namespace Demo
{

typedef ::IceInternal::Handle< ::Demo::ChatCallback> ChatCallbackPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::ChatCallback> ChatCallbackPrx;

void __read(::IceInternal::BasicStream*, ChatCallbackPrx&);
void __patch__ChatCallbackPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Demo::ChatSession> ChatSessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::ChatSession> ChatSessionPrx;

void __read(::IceInternal::BasicStream*, ChatSessionPrx&);
void __patch__ChatSessionPtr(void*, ::Ice::ObjectPtr&);

}

namespace Demo
{

}

namespace Demo
{

class ChatCallback : virtual public ::Ice::Object
{
public:

    typedef ChatCallbackPrx ProxyType;
    typedef ChatCallbackPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void message(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___message(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

class ChatSession : virtual public ::Glacier2::Session
{
public:

    typedef ChatSessionPrx ProxyType;
    typedef ChatSessionPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___setCallback(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void say(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___say(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace Demo
{

class ChatCallback : virtual public ::IceProxy::Ice::Object
{
public:

    void message(const ::std::string& data)
    {
        message(data, 0);
    }
    void message(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        message(data, &__ctx);
    }
    
private:

    void message(const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_secure(bool __secure) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<ChatCallback> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<ChatCallback> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_twoway() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_oneway() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_batchOneway() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_datagram() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_batchDatagram() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_timeout(int __timeout) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ChatSession : virtual public ::IceProxy::Glacier2::Session
{
public:

    void setCallback(const ::Demo::ChatCallbackPrx& callback)
    {
        setCallback(callback, 0);
    }
    void setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx)
    {
        setCallback(callback, &__ctx);
    }
    
private:

    void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Context*);
    
public:

    void say(const ::std::string& data)
    {
        say(data, 0);
    }
    void say(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        say(data, &__ctx);
    }
    
private:

    void say(const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ChatSession> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_secure(bool __secure) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<ChatSession> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<ChatSession> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<ChatSession> ice_twoway() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_oneway() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_batchOneway() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_datagram() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_batchDatagram() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_timeout(int __timeout) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
