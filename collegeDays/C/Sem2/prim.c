#include<stdio.h>
main()
{
  //prime chk
  int   i,flag;
  int  num;
  scanf("%d",&num);
   for(i = 2;i < num ;i++){
        if(num%i == 0){
              flag = 1;
         }
   }
   if(flag == 1){
             puts("composite");
         }
   else{
             puts("prime");
}
}
