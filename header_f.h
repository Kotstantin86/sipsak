/*
 * $Id: header_f.h 397 2006-01-28 21:11:50Z calrissian $
 *
 * Copyright (C) 2002-2004 Fhg Fokus
 * Copyright (C) 2004-2005 Nils Ohlmeier
 *
 * This file belongs to sipsak, a free sip testing tool.
 *
 * sipsak is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * sipsak is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef SIPSAK_HEADER_H
#define SIPSAK_HEADER_H

#include "shoot.h"

struct hline
{
	char *begin;
	int namelen, len;
};

void insert_header(char *mes, char *header, int first);

void add_via(char *mes);

void cpy_vias(char *reply, char *dest);

void cpy_to(char *reply, char *dest);

void set_maxforw(char *mes, int value);

void uri_replace(char *mes, char *uri);

void set_cl(char* mes, int contentlen);

int get_cl(char* mes);

int find_lr_parameter(char *rr_line);

void cpy_rr(char* src, char *dst, int route);

void build_ack(char *invite, char *reply, char *dest, 
			struct sipsak_regexp *reg);

void warning_extract(char *message);

int cseq(char *message);

void increase_cseq(char *message);

void parse_uri(char *uri, char **scheme, char **user, char **host, int *port);

char* uri_from_contact(char *message);

void new_branch(char *message);

void new_transaction(char *message);

void print_message_line(char *message);

inline char* get_body(char *mes);
#endif
