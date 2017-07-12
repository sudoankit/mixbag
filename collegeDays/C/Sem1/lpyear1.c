#include<stdio.h>
main()
{

   int y;
   printf("Enter a year : \n" );
   scanf("%d",&y);
   if (y % 4 == 0)
   	printf("The year you entered is a leap year \n");
   else
   	printf("The year you entered is not a leap year\n");

   

}