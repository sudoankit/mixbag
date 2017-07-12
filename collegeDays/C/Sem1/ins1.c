#include<stdio.h>
#define SIZE 30

main()
{

	size_t i,j;
	int n;
	int a[SIZE];
	int d,t;
  	printf("Enter number of elements\n");
	scanf("%d", &n);
 
  	printf("Enter %d integers\n", n);
 
  	for (i = 0; i < n; i++)
	 {
    		scanf("%d", &a[i]);
  	 }
//insertion sort
	for (i = 1 ; i < n ;++i){

	d = i;

		while ( a[d] < a[d-1] )
			{
				t = a[d];
				a[d] = a[d-1];
				a[d-1] = t;

				d--;
			}

	}

	printf("Sorted array is : \n");

		for (i = 0 ; i < n ; ++i){
			printf("%d \n",a[i]);
		}
}


