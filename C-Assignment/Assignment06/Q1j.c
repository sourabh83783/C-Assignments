#include <stdio.h>
#include <string.h>

int main()
{

char src[50] = "PG-DESD";
char dest2[50] = "Cource";


printf("Before strncat() function execution, ");
printf("destination string : %s\n", dest2);
	
strncat(dest2, src, 3);
	
printf("destination string : %s\n", dest2);
	
return 0;
}

