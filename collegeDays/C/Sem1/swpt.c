#include<stdio.h>
main()
{
	int t; 
	int *ptr1;
	int *ptr2;
	int x,y;

	printf("Enter x : \n");
	scanf("%d",&x);
	printf("Enter y : \n");
	scanf("%d",&y);

	ptr1 = &x;
	ptr2 = &y;

	t = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = t;

	printf(" \n The value of x is %d and y is %d \n",x,y);
}

