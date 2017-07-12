#include<stdio.h>
main()
{

	int a,b;
	int *pt1,*pt2,temp;

	printf("Enter the value of a : \n");
	scanf("%d",&a);
	printf("Enter the value of b : \n");
	scanf("%d",&b);

	pt1 = &a;
	pt2 = &b;

	temp = *pt1;
	*pt1 = *pt2;
	*pt2 = temp;


	printf("The value of a is %d and b is %d \n",a,b);
}

