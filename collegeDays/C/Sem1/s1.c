#include<stdio.h>
main()
{
   int n,s,z;
   printf("Enter a number\n");
   scanf("%d",&n);
     do
     {z = n % 10; 
     s = n / 10;
     z = z + (s % 10);
     } while (s ! = 0);{
     
     }
                



printf("The sum is %d\n",z );

}