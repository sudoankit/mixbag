//smallest of three using functions
#include<stdio.h>

void func(int,int,int);
main()
{
 int x,y,z;
 scanf("%d %d %d",&x,&y,&z);
  puts("---------------------");
 func(x,y,z);
 printf("\n");
 } 
void func(int x,int y,int z){
     if(x < y && x < z )
       printf("%d \n",x);
     else if(y < x && y < z)
       printf("%d \n",y);
     else { 
       printf("%d",z);}
}
