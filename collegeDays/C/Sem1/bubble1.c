#include<stdio.h>
#define SIZE 50
main()
{
	int i,j;
	int a[SIZE];
	int n,t;
	printf("Enter number of elements :\n ");
	scanf("%d",&n);

		printf("Enter the numbers : \n");
		for (i = 0 ; i < n ; ++i)
			{
				scanf("%d",&a[i]);
			}
//bubble sort

		for (i = 0; i < n ;++i )
			{
				for(j =0; j < n-1 ; ++j)
					{
						if (a[j]> a[j+1])
							{
								t = a[j+1];
							        a[j+1] = a[j];
								a[j] = t;
							}
					}
			}
		printf("The sorted array is : \n");
		for (i = 0 ;i < n ;++i)
			{
				printf("%d \n",a[i]);
			}
}





