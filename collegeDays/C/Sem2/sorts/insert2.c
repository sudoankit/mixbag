#include<stdio.h>
#define SZ 1000
int main(){
 int i,j,n;
 int key;
 int A[SZ];
 scanf("%d",&n);
printf("*******************unsorted elements******************** \n");
 for(i = 1; i <=n; i++){
  scanf("%d",&A[i]);
}


 for(j =2 ; j <=n;j++){
   key = A[j];
   i = j - 1;
 while(i > 0 && A[i] > key){
   A[i+1] = A[i];
   i--;
  }
 A[i + 1] = key;
}
  printf("*******************sorted elements****************\n");
 for(i = 1; i <= n ; i++){
    printf("%d \n",A[i]);
 }
return 0;
}
