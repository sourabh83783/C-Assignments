#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int  year,month;
    char ch;
    do{
	
	    printf("Enter the year :");
        scanf("%d",&year);
  
        printf("Enter the month :");
        scanf("%d",&month);
   
        switch(month)
        {
		case 1 /*'January'*/:
		               printf("Their are '31' days in January %d \n", year);
					   break;
	    
	   	case 2 /*'February'*/:
		               if(year % 400 == 0)
					   {
		                  printf("Their are '29' days in February %d \n",year);
					   }	  
					   else if(year % 100 == 0)
					   {
					      printf("Their are '28' days in February %d \n",year);
					   }
					   else if(year % 4 == 0)
					   {
					      printf("Their are '29' days in February %d \n", year);
					   }
					   else
					   {
					      printf("Their are '28' days in February %d \n ",year);
					   }
                       break;

		case 3/*'March'*/:
		              printf("Their are '31' days in March %d ",year);
                      break;

		case 4 /*'April'*/:
		              printf("Their are '30' days in April %d ",year);
                      break;

		case 5 /*'May'*/:
		          printf("Their are '31' days in May %d ",year);
                  break;

	    case 6 /*'June'*/:
		             printf("Their are '30' days in June %d ",year);
                     break;

		case 7 /*'July'*/:
		             printf("Their are '31' days in July %d ",year);
                     break;

		case 8/*'August'*/:
		             printf("Their are '31' days in August  %d ",year);
                     break;

		case 9/*'September'*/:
		             printf("Their are '30' days in September %d ",year);
                     break;

		case 10 /*'October'*/:
		             printf("Their are '31' days in October %d ",year);
                     break;

		case 11/*'November'*/:
		             printf("Their are '30' days in November %d ",year);
                     break;

        case 12/* 'December'*/:
		             printf("Their are '31' days in December %d ",year);
                     break;

		default :
		             printf("Enter Month and Year is Invalid");
					 break;
                     
        };
            printf("Do you want to continue ?(y/n) : \n");
		    scanf("%*c%c",&ch);

	}while(ch != 'n');

	return 0;

}
