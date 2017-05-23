
#include "includes\Main.h"


int mpMostSignificantDigit(unsigned char x[], unsigned int m) {
	if (m) {
		m--;
		
		while (m && (x[m] == 0))
			m--;
	}
	
	return (m);
}
