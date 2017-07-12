//shell sort
#include<stdio.h>
#define NI 20 

int main()
  {
    int List[NI];
    int size;
    int i,j,k,p;
    int temp,s,step;
    int dimStep[] = {5,3,1};


    scanf("%d",&size);
    printf("\n");
    for (i = 0 ; i <= size-1 ; i++){
     scanf("%d",&List[i]);
     }
     //shell sort // shell sort // shell sort
    for(step = 0 ; step < 3; step++){
      k  = dimStep[step];
      s = 0;
       for(i = s+k; i < size ; i+=k)
        {
         temp = List[i];
         j = i-k;
          while((temp < List[j]) && (i >= 0))
           {
             List[j+k] = List[j];
             j = j -k;
             }
          List[j+k] = temp;
          s++;
         }
       }

     for(i = 0 ; i <= size-1 ; i++){
       printf("%d \n",List[i]);
    }
   return 0; 
}
