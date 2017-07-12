#include<stdio.h>
main(){
	int i,j;
	int n;
	printf("Enter the number of line you want to print : \n");
	scanf("%d",&n);
	for(i = 0 ; i < n ; ++i )
		{
			for(j =0; j <= i ; ++j)
				{
					printf("*");
					
				}
			printf("\n");
		}
}
