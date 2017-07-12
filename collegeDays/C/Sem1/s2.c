#include<stdio.h>
main()
{
   int a,b,c,d,n;
   int e,f,g,h,i,j,z;
   printf("Enter a five digit number : \n");
   scanf("%d",&n);
   a = n % 10;
   b = n /10;
   c = b % 10;
   d = n /10;
   e = d % 10;
   f = n /10;
   g = f % 10;
   if(f == 10)
   	j = 1;
   else
   	j = i % 10;
 
   z = a + c + e + g + j;
   printf("The sum of the digit's is : %d\n",z );

}