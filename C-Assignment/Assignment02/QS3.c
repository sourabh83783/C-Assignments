#include<stdio.h>
int main()
{
    
    int Id, Dn;
	char Dc;

	printf("  Employee ID   : ");
	scanf("%d", &Id);

	printf(" \n Dpt No  :");
	scanf("%d", &Dn);
    
	printf(" \n Designation : ");
	getchar();
	Dc = getchar();

	switch(Dn)
	{
	    case 10:
		       printf("Employee with employee id %d is working in 'Marketing' department ",Id);
		break;

		case 20: 
		       printf("Employee with employee id %d is working in 'Management' department ",Id);
	    break;

		case 30: 
		       printf("Employee with employee id %d is working in 'Sales' department ",Id);
	    break;

		case 40:
		        printf("Employee with employee id %d is working in 'Desining' department",Id);
	}
	switch(Dc)
	{      
        case 'M':
        	   printf("as 'Manager'. \n");
		break;

		case 'S': 
        	   printf("as 'Superviser'. \n");
	    break;

		case 's': 
        	    printf("as 'Security Officer.' \n");
		break;

		case 'C': 
        	   printf("as 'Clerk'. \n");
		break;
	}

	return 0;

}
