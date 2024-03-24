#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char src[] = "geeksforgeeks"; 
     
    char dest[14]; 
     
    strncpy(dest, src, 14); 
    printf("Copied string: %s\n", dest); 
     
    return 0; 
} 
