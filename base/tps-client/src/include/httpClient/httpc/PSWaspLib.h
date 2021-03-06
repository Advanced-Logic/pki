/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 */
/** BEGIN COPYRIGHT BLOCK
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation;
 * version 2.1 of the License.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301  USA 
 * 
 * Copyright (C) 2007 Red Hat, Inc.
 * All rights reserved.
 * END COPYRIGHT BLOCK **/

#ifndef _PS_WASP_LIB_H_
#define _PS_WASP_LIB_H_

#ifdef HAVE_CONFIG_H
#ifndef AUTOTOOLS_CONFIG_H
#define AUTOTOOLS_CONFIG_H

/* Eliminate warnings when using Autotools */
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#include <config.h>
#endif /* AUTOTOOLS_CONFIG_H */
#endif /* HAVE_CONFIG_H */

#ifdef _MSC_VER
#undef EXPORT_DECL
#ifdef WASP_LIB_DLL
#define EXPORT_DECL __declspec( dllexport )
#else
#define EXPORT_DECL __declspec (dllimport )
#endif // EXPORT_LIB_DLL
#else
#define EXPORT_DECL
#endif // _MSC_VER

// Key to hostname in WASP CallContext
#define CONTEXT_HOSTNAME_TOKEN "Hostname"

#endif // _PS_WASP_LIB_H_
