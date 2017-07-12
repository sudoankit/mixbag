#include<stdio.h>
#define SZ 5

 int  main(){
   int i,j,key;
   int a[SZ];

  for(i = 1; i <=SZ ; i++){
    scanf("%d",&a[i]);
     }

  for(j = 1; j <= SZ ;j++){
    key = a[j];
    i = j-1;
    while(i > 0 && a[i] > key){
     a[i+1] = a[i];
     i = i - 1;
     printf(" \n The value of i is %d \n",i);
     }
  a[i+1] = key;
  }

 for(i = 1 ; i <= SZ ; i++){
    printf("%d \n",a[i]);
 }
}
