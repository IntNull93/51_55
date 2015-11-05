// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `LocatorF.ice'

#ifndef __IceE_LocatorF_h__
#define __IceE_LocatorF_h__

#include <IceE/ProxyF.h>
#include <IceE/ObjectF.h>
#include <IceE/Exception.h>
#include <IceE/ScopedArray.h>
#include <IceE/Proxy.h>
#include <IceE/Object.h>
#include <IceE/UndefSysMacros.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceProxy
{

namespace Ice
{

class Locator;

class LocatorRegistry;

}

}

namespace Ice
{

class Locator;
ICE_API bool operator==(const Locator&, const Locator&);
ICE_API bool operator<(const Locator&, const Locator&);

class LocatorRegistry;
ICE_API bool operator==(const LocatorRegistry&, const LocatorRegistry&);
ICE_API bool operator<(const LocatorRegistry&, const LocatorRegistry&);

}

namespace IceInternal
{

ICE_API ::Ice::Object* upCast(::Ice::Locator*);
ICE_API ::IceProxy::Ice::Object* upCast(::IceProxy::Ice::Locator*);

ICE_API ::Ice::Object* upCast(::Ice::LocatorRegistry*);
ICE_API ::IceProxy::Ice::Object* upCast(::IceProxy::Ice::LocatorRegistry*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::Locator> LocatorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Ice::Locator> LocatorPrx;

ICE_API void __read(::IceInternal::BasicStream*, LocatorPrx&);
ICE_API void __patch__LocatorPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Ice::LocatorRegistry> LocatorRegistryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Ice::LocatorRegistry> LocatorRegistryPrx;

ICE_API void __read(::IceInternal::BasicStream*, LocatorRegistryPrx&);
ICE_API void __patch__LocatorRegistryPtr(void*, ::Ice::ObjectPtr&);

}

namespace Ice
{

}

#endif
