/*
 * elemlist.{cc,hh} -- a linked list of Elements
 * Eddie Kohler
 *
 * Copyright (c) 1999-2000 Massachusetts Institute of Technology.
 *
 * This software is being provided by the copyright holders under the GNU
 * General Public License, either version 2 or, at your discretion, any later
 * version. For more information, see the `COPYRIGHT' file in the source
 * distribution.
 */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include "elemlink.hh"

void
ElementLink::set_max_tickets(int n)
{
  if (n > MAX_TICKETS)
    n = MAX_TICKETS;
  _tickets = _max_tickets = n;
  if (n > 0) {
    _stride = STRIDE1 / _tickets;
    assert(_stride < MAX_STRIDE);
  } else
    _stride = 0;
}
