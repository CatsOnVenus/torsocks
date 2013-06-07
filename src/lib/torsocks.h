/*
 * Copyright (C) 2000-2008 - Shaun Clowes <delius@progsoc.org> 
 * 				 2008-2011 - Robert Hogan <robert@roberthogan.net>
 * 				 	  2013 - David Goulet <dgoulet@ev0ke.net>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License, version 2 only, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef TORSOCKS_H
#define TORSOCKS_H

#include <common/compat.h>

#if (defined(__linux__) || defined(__FreeBSD__) || defined(__darwin__))

#include <sys/types.h>
#include <sys/socket.h>

#ifndef LIBC_CONNECT_SIG
#define LIBC_CONNECT_SIG \
	int _sockfd, const struct sockaddr *_addr, socklen_t _addrlen
#endif /* LIBC_CONNECT_SIG */

#else
#error "OS not supported."
#endif /* __linux__ , __FreeBSD__, __darwin__ */

#endif /* TORSOCKS_H */