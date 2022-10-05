/*
 * SPDX-FileCopyrightText: 2022 Kyunghwan Kwon <k@mononn.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef FPL_TRANSPORT_INTERFACE_H
#define FPL_TRANSPORT_INTERFACE_H

#if defined(__cplusplus)
extern "C" {
#endif

#include <stddef.h>

/* TODO: implement connect, disconnect and make it event-driven */
struct transport_interface {
	int (*write)(struct transport_interface *self,
			const void *data, size_t data_len);
	int (*read)(struct transport_interface *self,
			void *buf, size_t bufsize);
};

static inline int transport_write(struct transport_interface *self,
				  const void *data, size_t data_len)
{
	return self->write(self, data, data_len);
}

static inline int transport_read(struct transport_interface *self,
				 void *buf, size_t bufsize)
{
	return self->read(self, buf, bufsize);
}

#if defined(__cplusplus)
}
#endif

#endif /* FPL_TRANSPORT_INTERFACE_H */
