
#include "includes\Main.h"


int mostSignificantDigit(unsigned char x[], unsigned int m) {
	if (m) {
		m--;
		
		while (m && (x[m] == 0))
			m--;
	}
	
	return (m);
}
