#ifndef _MAIN_H
#define _MAIN_H


/** Macros */
#define ABS(a)   ((a) < 0 ? -(a) : (a))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define OK 0
#define ER 1



/** C Standard Library */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


/** Utilities */
#include "Utils\string.h"


/** Number */
#include "Number/NumType.h"
#include "Number/MultiplePrecision.h"


#endif /* _MAIN_H */
