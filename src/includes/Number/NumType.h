#ifndef _NUMTYPE_H
#define _NUMTYPE_H


/** Typedefs and data structures */
typedef long int INT;
typedef unsigned long int NAT;

typedef struct fraction_ {
	NAT w, 		// Whole
		n, 		// Numerator
		d; 		// Denominator
} FRACTION;


typedef struct zint_ {
	INT re, 	// Real
		im; 	// Imaginary
} ZINT;


typedef struct {
	INT x, 		// Lattice Point: x
		y; 		// 				  y
} LPOINT;


/** Prototypes */
int cfSquareRoot(INT, INT[], INT);
int LegendreSymbol(NAT, NAT);
int SearchArray(NAT, NAT[], NAT);
int SeiveOverFactorBase(INT, INT[], char[], NAT);

#endif /* _NUMTYPE_H */
