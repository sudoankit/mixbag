
#include<stdio.h>
#define SIZE 50
main()
{
	int i,j,n;
	int *ptr;
	int arr[SIZE];

	printf("Enter number of elements : ");
	scanf("%d",&n);

	for (i = 0; i < n ; ++i )
		{
			scanf("%d",&arr[i]);
		}

		ptr = &arr[0];
	for (i = 0 ; i < n ; ++i)
		{
			printf(" %d \n",*(ptr+i));
		}
}
