/** Source: Number Theory by Mark Herkommer
 *  McGraw-Hill
 *  1999
 *  ISBN: 0-07-913074-7
 */

#ifndef _MP_MAIN
#define _MP_MAIN


#define ADIGIT 1000
#define IDIGIT 415

#define MIN(a,b) (a < b ? a : b)
#define MAX(a,b) (a > b ? a : b)


/** Accumulator */
union {
	unsigned int x;
	unsigned char b[2];
} a;


/** Prototypes */
int addMP(unsigned char [], unsigned char [], unsigned char []);
int addMPShort(unsigned char [], unsigned char [], unsigned char []);

int subMP(unsigned char [], unsigned char [], unsigned char []);
int subMPShort(unsigned char [], unsigned char [], unsigned char []);

int mulMP(unsigned char [],  unsigned char [],  unsigned char []);
int mulMPShort(unsigned char [],  unsigned char [], unsigned char []);

int divMP(unsigned char [], unsigned char [], unsigned char [], unsigned char []);
int divMPShort(unsigned char [], unsigned char [], unsigned char [], unsigned char []);

int compareMP(unsigned char [], unsigned char []);
int isZeroMP(unsigned char []);

int andMP(unsigned char [], unsigned char [], unsigned char []);

unsigned char *leftByteShiftMP(unsigned char [], unsigned int);
unsigned char *leftBitShiftMP(unsigned char [], unsigned int);
unsigned char *rightByteShiftMP(unsigned char [], unsigned int);
unsigned char *rightBitShiftMP(unsigned char [], unsigned int);

unsigned char *scanMP(unsigned char *, unsigned char *);
unsigned char *copyMP((unsigned char *, unsigned char *);
unsigned char *convertASCIIToMP(unsigned char *, unsigned char *);
unsigned char *convertMPtoASCII(unsigned char *, unsigned char *);

char *packASCIINumber(char *);
char *printASCIINumber(char *);

void dumpMP(unsigned char []);



#endif /* _MP_MAIN */
