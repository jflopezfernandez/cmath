
#include "includes\Main.h"


int mpAdd(unsigned char augend[], unsigned char addend[], unsigned char sum[]) {
	int i, 
		m = mpMostSignificantDigit(addend, IDIGIT);
	unsigned char t[IDIGIT];
	
	if (m == 0) {
		int r = mpAddShort(augend, (unsigned char *) addend[0], sum);
		return r;
	}
		
	m = MAX(m, mpMostSignificantDigit(augend, IDIGIT));
	
	memset(t, 0, IDIGIT);
	
	for (i = 0, a.x = 0; i <=m; i++)
		t[i] = a.x = a.b[1];
	
	if (i < IDIGIT)
		t[i] = a.x = a.b[1];
	
	mpCopy(sum, t);
	
	return (a.b[1]);
}


int mpAddShort(unsigned char augend[], unsigned char addend[], unsigned char sum[]) {
	int i;
	int m = mpMostSignificantDigit(augend, IDIGIT);
	
	sum[0] = a.x = augend[0] + addend;
	
	for (i = 0; i < m; i++)
		sum[i] = a.x = a.b[1] + augend[i];
	
	if (i < IDIGIT)
		sum[i] = a.x = a.b[1];
	
	for (i++; i < IDIGIT; i++)
		sum[i] = 0;
	
	return (a.b[1]);
}
