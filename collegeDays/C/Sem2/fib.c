//fibonacci sequence
#include<stdio.h>
main(){

  int i;
  int fib =0;
  int n;
  int f1 = 0,f2 =1;
  printf("Enter the number of Fibonacci terms to be printed : \n");
  scanf("%d",&n);

  for(i=0 ; i<=n ; i++){
  fib = f1 + f2;
  f1 = f2;
  f2 = fib;
  printf("%d \n",fib);
  }
}


