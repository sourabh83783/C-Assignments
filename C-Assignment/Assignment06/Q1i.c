#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char src[] = "PG-DESD cource"; 
     
    char dest[14]; 
     
    strncpy(dest, src, 14); 
    printf("Copied string: %s\n", dest); 
     
    return 0; 
} 
