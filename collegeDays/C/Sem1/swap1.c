#include<stdio.h>

int swapper(int *,int *);
main()
{
  int x,y;
  printf("Enter a number : \n");
  scanf("%d",&x);
  printf("Enter another number : \n");
  scanf("%d",&y);
  printf("\nBefore swaping x = %d and y = %d\n", x, y);
  swapper(&x,&y);
  printf("\nAfter swaping x = %d and y = %d\n", x, y);


}


int swapper(int *x1,int *y1)
{
  int aux;
  aux = *x1;
  *x1 = *y1;
  *y1 = aux;




}




