/** Source: Number Theory by Mark Herkommer
 *  McGraw-Hill
 *  1999
 *  ISBN: 0-07-913074-7
 */

#ifndef _MP_MAIN
#define _MP_MAIN


/** __MP_MAIN__ */
#define ADIGIT 1000
#define IDIGIT 415


/** Accumulator */
union {
	unsigned int x;
	unsigned char b[2];
} a;


/** Prototypes */
int mpAdd(unsigned char [], unsigned char [], unsigned char []);
int mpAddShort(unsigned char [], unsigned char [], unsigned char []);

int mpSub(unsigned char [], unsigned char [], unsigned char []);
int mpSubShort(unsigned char [], unsigned char [], unsigned char []);

int mpMul(unsigned char [],  unsigned char [],  unsigned char []);
int mpMulShort(unsigned char [],  unsigned char [], unsigned char []);

int mpDiv(unsigned char [], unsigned char [], unsigned char [], unsigned char []);
int mpDivShort(unsigned char [], unsigned char [], unsigned char [], unsigned char []);

int mpCompare(unsigned char [], unsigned char []);
int mpIsZero(unsigned char []);

int mpAnd(unsigned char [], unsigned char [], unsigned char []);

int mpMostSignificantDigit(unsigned char x[], unsigned int m);

unsigned char *mpLeftByteShift(unsigned char [], unsigned int);
unsigned char *mpLeftBitShift(unsigned char [], unsigned int);
unsigned char *mpRightByteShift(unsigned char [], unsigned int);
unsigned char *mpRightBitShift(unsigned char [], unsigned int);

unsigned char *mpScan(unsigned char *, unsigned char *);
unsigned char *mpCopy(unsigned char *, unsigned char *);
unsigned char *convertASCIIToMP(unsigned char *, unsigned char *);
unsigned char *convertMPtoASCII(unsigned char *, unsigned char *);

char *packASCIINumber(char *);
char *printASCIINumber(char *);

void mpDump(unsigned char []);



#endif /* _MP_MAIN */
