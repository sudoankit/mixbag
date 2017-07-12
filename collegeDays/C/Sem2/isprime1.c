#include<stdio.h>

int isprime(int);
main()
{
 int n,e;
 printf("Enter a number ? \n");
 scanf("%d",&n);
 e =  isprime(n);
 if(e == 1){
 printf("Number entered is prime! \n");
 }
 else
 printf("Number is not prime \n");
}


int isprime(int n)
{
 int i;
 for(i=2;i<n;i++){
  if(n%i==0){
   return 0;
   }
  else
   return 1;
 }
}
