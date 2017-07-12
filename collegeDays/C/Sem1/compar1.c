#include<stdio.h>
  int main()
  {
  	  int x,y,z;
      printf("Enter the values of x y z\n");
      scanf("%d%d%d",&x,&y,&z);  
      if (x<y && x<z)
      {
        printf("The smallest is %d\n",x );
      }
      else if (y<z && y<x)
      {
      	printf("The smallest is  %d\n",y );
      }          	
      else
      	printf("The smallest is %d\n",z);

      



  }
  

