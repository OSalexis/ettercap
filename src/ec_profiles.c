/*
    ettercap -- host profiling module

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

    $Id: ec_profiles.c,v 1.1 2003/04/03 21:17:59 alor Exp $
*/

#include <ec.h>
#include <ec_passive.h>
#include <ec_profiles.h>
#include <ec_packet.h>

/* globals */

/* protos */

int profile_add(struct packet_object *po);

/************************************************/
  
int profile_add(struct packet_object *po)
{
   return 0;   
}


/* EOF */

// vim:ts=3:expandtab

