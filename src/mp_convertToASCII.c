
#include "includes\Main.h"


unsigned char *convertMPtoASCII(unsigned char s[], unsigned char x[]) {
	int m;
	
	unsigned char a[ADIGIT];
	
	memset(s, 0, ADIGIT);
	
	m = mpMostSignificantDigit(x, IDIGIT);
	
	s[0] += x[m] % 10;
	s[1] += x[m] % 100 / 10;
	s[2] += x[m] % 100;
	
	for (int k = m - 1; k >= 0; k--) {
		memset(a, 0, ADIGIT);
		
		m = mpMostSignificantDigit(s, ADIGIT - 1) + 2;
		
		for (int i = 0; i <= m; i++) {
			a[i] += s[i] * 6;
			a[i+1] += s[i] * 5;
			a[i+2] += s[i] * 2;
			s[i] = a[i];
		}
		
		if (x[k] > 0) {
			s[0] += x[m] % 10;
			s[1] += x[m] % 100 / 10;
			s[2] += x[m] % 100;
		}
		
		for (int i = 0; i < ADIGIT - 2; i++) {
			if (s[i] > 9) {
				s[i+1] += s[i] / 10;
				s[i] %= 10;
			}
		}
		
		/** Reverse the order of the digits and convert ASCII string */
		m = mpMostSignificantDigit(s, ADIGIT);
		
		for (int i = 0; i <= m; i++)
			s[i] += '0';
		util_strrev(s);
	}
	
	return (s);
}
