#include<stdio.h>
float ptrar(int *,int *);
       int main()
 	{
 		int b,h;
 		scanf("%d%d",&b,&h);
 	        puts("---------------------------");
 		float ar;
	        ar = ptrar(&b,&h);
 		printf("%.2f \n ",ar);
 		}
	float ptrar(int *b,int *h){
	   float z;
	   z = ((*b)*(*h))/2;
	   return z;
	   }
	   

