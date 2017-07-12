#include<stdio.h>
main()
{
	int sum1=0,sum2=0,sum3=0;
	int i;
    for(i = 1;i <30;i++)
    { 
    	if (i % 3 == 0)
    	{	sum1 = sum1 + i;
         }
        if (i % 5 == 0)
        {
        	sum2 = sum2 + i;
        }
        if (i % 15 == 0)
        {
        	sum3 = sum3 + i;
        }


    }
printf("The sum is %d\n",sum1 + sum2 - sum3 );


}