#ifndef _SET_H_
#define _SET_H_
/*HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
H                                                                          H
H       Program Name:      Set Library Include File for CGL0.              H
H                                                                          H
H       Author:            Peter Comninos.                                 H
H       Revised by:        Eike Falk Anderson.                             H
H                                                                          H
H       Version:           Linux.                                          H
H                                                                          H
H       Last major update: 12-03-2015.                                     H
H                                                                          H
H  (C) Copyright 2000-2015 Prof. Peter Comninos, all rights reserved.      H
H                                                                          H
H  Permission to use, copy, and distribute for non-commercial purposes,    H
H  is hereby granted without fee, providing that the above copyright       H
H  notice appear in all copies and that both the copyright notice and      H
H  this permission notice appear in supporting documentation.              H
H                                                                          H
H  The software may be modified for your own purposes, but modified        H
H  versions may not be distributed.                                        H
H                                                                          H
H  This software is provided "as is" without any expressed or implied      H
H  guarantee or warranty.                                                  H
H                                                                          H
H  This software is NOT in the public domain.                              H
H                                                                          H
H                                                                          H
H  The author may be contacted via:                                        H
H                                                                          H
H     UK Mail:   Prof. Peter Comninos,                                     H
H                The National Centre for Computer Animation,               H
H                Talbot Campus,                                            H
H                Fern Barrow,                                              H
H                Poole,                                                    H
H                Dorset BH12 5BB,                                          H
H                England.                                                  H
H                                                                          H
H     Email:     peterc@bournemouth.ac.uk                                  H
H                                                                          H
HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH*/




/*-------------------------------------------------------------------------------*/


/*
 * A Pascal-like SET OF CHAR is stored as an array of 32 bytes:
 *
 * byte_0, ... , byte_31.
 *
 * The set elements are represented as follows:
 *
 * chr(0), ... , chr(127) that is bit_0, ... , bit_255.
 *
 * The bits in the bytes are set as follows:
 *
 * bit(0)=element(0), bit(1)=element(1), ... , bit(6)=element(6), bit(7)=element(7).
 *
 * This style of storage mimics the HP Pascal compiler's memory allocation.
 */


/*-------------------------------------------------------------------------------*/


#define set_elements 256
#define set_bytes    32


typedef unsigned char byte_t;

typedef byte_t set_t[set_bytes];


/*-------------------------------------------------------------------------------*/


void set_empty(set_t s);
/* s := []; */

void set_assign(set_t d, const set_t s);
/* d := s; */

byte_t set_add_element(set_t s, int e);
/* s := [e]; */

byte_t set_add_range(set_t s, int le, int he);
/* s := [le..he]; */

byte_t set_remove_element(set_t s, int e);
/* s := s - [e]; */

byte_t set_remove_range(set_t s, int le, int he);
/* s := s - [le..he]; */

void set_union(set_t d, const set_t s1, const set_t s2);
/* d := s1 + s2; */

void set_intersection(set_t d, const set_t s1, const set_t s2);
/* d := s1 * s2; */

void set_difference(set_t d, const set_t s1, const set_t s2);
/* d := s1 - s2; */

void set_xor(set_t d, const set_t s1, const set_t s2);
/* d := s1 / s2; */

byte_t set_is_empty(const set_t s);
/* (s = []) */

byte_t set_equality(const set_t s1, const set_t s2);
/* (s1 = s2) */

byte_t set_inequality(const set_t s1, const set_t s2);
/* (s1 <> s2) */

byte_t set_inclusion(int e, const set_t s);
/* (e IN s) */

byte_t set_is_subset(const set_t s1, const set_t s2);
/* (s1 <= s2) */

byte_t set_is_superset(const set_t s1, const set_t s2);
/* (s1 => s2) */

void set_print_elements(const char *t, const set_t s);

/*-------------------------------------------------------------------------------*/

#endif