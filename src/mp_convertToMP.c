
#include "includes\Main.h"


unsigned char *convertASCIIToMP(unsigned char x[], unsigned char s[]) {
memset(x, 0, IDIGIT);
a.x = 0;

x[0] = s[0] - '0';

for (unsigned int k = 1; k < strlen(s); k++) {
	for (int i = 0; i < IDIGIT; i++) {
		x[i] = a.x = a.b[1] + x[i] * 10;
	}
	
	x[0] = a.x = x[0] + (s[k] - '0');
	
	for (int i = 1; a.b[1] > 0; i++) {
		x[i] = a.x = a.b[1] + x[i];
	}
}

return (x);
}

