/* ----------------------------------------------------------------------------- 
 * internal.h
 *
 *     Internal declarations used by the SWIG core
 * 
 * Author(s) : David Beazley (beazley@cs.uchicago.edu)
 *
 * Copyright (C) 1998-2000.  The University of Chicago
 * Copyright (C) 1995-1998.  The University of Utah and The Regents of the
 *                           University of California.
 *
 * See the file LICENSE for information on usage and redistribution.	
 *
 * $Header$
 * ----------------------------------------------------------------------------- */

#include "swig11.h"

extern    Language      *lang;
extern    int           ForceExtern;
extern    int           ImportMode;
extern    void         *CCode;
extern    int           GenerateDefault;

// Structure for holding typemap parameters

struct TMParm {
  Parm     *p;
  ParmList *args;
  TMParm   *next;
  TMParm() {
    next = 0;
  }
};
