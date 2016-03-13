#include<stdio.h>
#include"set.h"

/*HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
H                                                                          H
H       Program Name:      Set Library Source File for CGL0.               H
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


void set_empty(set_t s)
{
 /*
  * s := [];
  */

 int i;


 for (i = 0; i < set_bytes; i++) s[i] = (byte_t) 0;


}  /* set_empty */


/*-------------------------------------------------------------------------------*/


void set_assign(set_t d, const set_t s)
{
 /*
  * d := s;
  */

 int i;


 for (i = 0; i < set_bytes; i++) d[i] = s[i];


}  /* set_assign */


/*-------------------------------------------------------------------------------*/


byte_t set_add_element(set_t s, int e)
{
 /*
  * s := [e];
  */

 byte_t byte,
        bit,
        mask;


 if ((e < 0) || (e >= set_elements)) return(0);


 mask = 1;
 byte = e / 8;
 bit  = 7 - (e - byte * 8);

 s[byte] |= (mask << bit);


 return(1);


}  /* set_add_element */


/*-------------------------------------------------------------------------------*/


byte_t set_add_range(set_t s, int le, int he)
{
 /*
  * s := [le..he];
  */

 int    e;
 byte_t byte,
        bit,
        mask;


 if ((le < 0) || (he >= set_elements) || (le > he)) return(0);


 mask = 1;

 for (e = le; e <= he; e++)
  {
   byte = e / 8;
   bit  = 7 - (e - byte * 8);

   s[byte] |= (mask << bit);
  }


 return(1);


}  /* set_add_range */


/*-------------------------------------------------------------------------------*/


byte_t set_remove_element(set_t s, int e)
{
 /*
  * s := s - [e];
  */

 byte_t byte,
        bit,
        mask;


 if ((e < 0) || (e >= set_elements)) return(0);


 mask = 1;
 byte = e / 8;
 bit  = 7 - (e - byte * 8);

 s[byte] ^= (mask << bit);


 return(1);


}  /* set_remove_element */


/*-------------------------------------------------------------------------------*/


byte_t set_remove_range(set_t s, int le, int he)
{
 /*
  * s := s - [le..he];
  */

 int    e;
 byte_t byte,
        bit,
        mask;


 if ((le < 0) || (he >= set_elements) || (le > he)) return(0);


 mask = 1;

 for (e = le; e <= he; e++)
  {
   byte = e / 8;
   bit  = 7 - (e - byte * 8);

   s[byte] ^= (mask << bit);
  }


 return(1);


}  /* set_remove_range */


/*-------------------------------------------------------------------------------*/


void set_union(set_t d, const set_t s1, const set_t s2)
{
 /*
  * d := s1 + s2;
  */

 int i;


 for (i = 0; i < set_bytes; i++) d[i] = s1[i] | s2[i];


}  /* set_union */


/*-------------------------------------------------------------------------------*/


void set_intersection(set_t d, const set_t s1, const set_t s2)
{
 /*
  * d := s1 * s2;
  */

 int i;


 for (i = 0; i < set_bytes; i++) d[i] = s1[i] & s2[i];


}  /* set_intersection */


/*-------------------------------------------------------------------------------*/


void set_difference(set_t d, const set_t s1, const set_t s2)
{
 /*
  * d := s1 - s2;
  */

 int i;


 for (i = 0; i < set_bytes; i++) d[i] = s1[i] & (~s2[i]);


}  /* set_difference */


/*-------------------------------------------------------------------------------*/


void set_xor(set_t d, const set_t s1, const set_t s2)
{
 /*
  * d := s1 / s2;
  */

 int i;


 for (i = 0; i < set_bytes; i++) d[i] = s1[i] ^ s2[i];


}  /* set_xor */


/*-------------------------------------------------------------------------------*/


byte_t set_is_empty(const set_t s)
{
 /*
  * (s = [])
  */

 int    i;
 byte_t mask;


 mask = 0;

 for (i = 0; i < set_bytes; i++) mask |= s[i];


 return(mask == 0);


}  /* set_is_empty */


/*-------------------------------------------------------------------------------*/


byte_t set_equality(const set_t s1, const set_t s2)
{
 /*
  * (s1 = s2)
  */

 int    i;
 byte_t equal;


 equal = 1;

 for (i = 0; i < set_bytes; i++)
  if (s1[i] != s2[i])
   {
    equal = 0;
    break;
   }


 return(equal);


}  /* set_equality */


/*-------------------------------------------------------------------------------*/


byte_t set_inequality(const set_t s1, const set_t s2)
{
 /*
  * (s1 <> s2)
  */

 int    i;
 byte_t unequal;


 unequal = 0;

 for (i = 0; i < set_bytes; i++)
  if (s1[i] != s2[i])
   {
    unequal = 1;
    break;
   }


 return (!set_equality(s1,s2));

}  /* set_equality */


/*-------------------------------------------------------------------------------*/


byte_t set_inclusion(int e, const set_t s)
{
 /*
  * (e IN s)
  */

 byte_t byte,
        bit,
        mask;


 if ((e < 0) || (e >= set_elements)) return(0);


 mask = 1;
 byte = e / 8;
 bit  = 7 - (e - byte * 8);


 return((s[byte] & (mask << bit)) > 0);


}  /* set_inclusion */


/*-------------------------------------------------------------------------------*/


byte_t set_is_subset(const set_t s1, const set_t s2)
{
 /*
  * (s1 <= s2)
  */

 int    i;
 byte_t is_subset;


 is_subset = 1;

 for (i = 0; i < set_bytes; i++)
  if (s1[i] > s2[i])
   {
    is_subset = 0;
    break;
   }


 return(is_subset);


}  /* set_is_subset */


/*-------------------------------------------------------------------------------*/


byte_t set_is_superset(const set_t s1, const set_t s2)
{
 /*
  * (s1 => s2)
  */

 int    i;
 byte_t is_superset;


 is_superset = 1;

 for (i = 0; i < set_bytes; i++)
  if (s1[i] < s2[i])
   {
    is_superset = 0;
    break;
   }


 return(is_superset);


}  /* set_is_subset */


/*-------------------------------------------------------------------------------*/


void set_print_elements(const char *t, const set_t s)
{
 int    e;
 byte_t byte,
        bit,
        mask;


 mask = 1;

 printf("%s=[", t);

 for (e = 0; e < set_elements; e++)
  {
   byte = e / 8;
   bit  = 7 - (e - byte * 8);

   if (s[byte] & (mask << bit))
    {
     printf(" %d", e);
    }
  }

 printf("]\n");


}  /* set_print_elements */


/*-------------------------------------------------------------------------------*/


