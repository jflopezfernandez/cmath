
#include "includes\Main.h"


unsigned char *mpCopy(unsigned char to[], unsigned char fr[]) {
	memcpy(to, fr, IDIGIT);
	
	return (to);
}
