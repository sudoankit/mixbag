#include<stdio.h>
main()
{
   int n, first = 0, second = 1, next, c;
   float sum;
 
   printf("Enter the number of terms :\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      if(next%2== 0)
      {
      	sum = sum + next;
      }
  
   }
     printf("%.1f\n",sum);
  
}



 





