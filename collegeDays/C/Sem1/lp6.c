#include<stdio.h>

main()
{
	int i,j;
	int n;
	printf("Enter number of lines to print : ");
        scanf("%d",&n);
	
	for(i = n ; i <= 0 ;--i)
		{
			for(j = 1 ; j <= i; j++)
				{
					printf("* ");
				}
			printf("\n");
		}
}



