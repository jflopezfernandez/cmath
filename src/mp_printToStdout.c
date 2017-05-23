
#include "includes\Main.h"


char *printASCIINumber(char *str) {
	int offs;
	char *s = str;
	
	if (strchr(str, ',')) {
		printf("%s", str);
	} else {
		/** Compute the first character group */
		offs = strlen(s) % 3;
		
		if (offs == 0)
			offs = 3;
		
		printf("%*.*s", offs, offs, s);
		s += offs;
		
		
		/** Now print the rest of the string with commas */
		while (*s) {
			printf(",%3.3s", s);
			s += 3;
		}
	}
	
	return (str);
}
