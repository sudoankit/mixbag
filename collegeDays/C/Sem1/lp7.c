#include<stdio.h>
main()
{


	int i,j;
	int n;
	int temp;
	printf("The number of lines you want to print : \n");
	scanf("%d",&n);
	
        temp = n;
	for(i = 1; i <=n ; ++i )
		{
			for (j = 0 ; j <= temp; ++j)
				printf(" ");

		temp--;


			for (j = 0;j<= 2*i -1 ;  ++i)
				printf("*");


		printf("\n");
		}
}
