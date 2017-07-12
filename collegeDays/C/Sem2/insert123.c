#include<stdio.h>
#define SZ 5

int main(){
 int i,j,key;
 int s[SZ];

 printf("Enter the numbers  : \n");

for(i = 0 ; i <= SZ-1 ; i++ ){
 scanf("%d",&s[i]);
}
//insertion sort
 for(j = 1 ; j < SZ ; j++){
  key = s[j];
  i = j - 1;

   while(i > -1 && s[i] > key){
     s[i+1] = s[i];
     i = i -1;
   }
  s[i+1] = key;
   }
   printf("The arranged numbers are : \n");
  for(i = 0 ; i < SZ; i++ ){
     printf("%d \t",s[i]);
 }
 printf("\n");
 return 0;
}



