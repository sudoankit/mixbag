#include<stdio.h>
main()
{
	int i,j;
	int n,t;
	printf("Enter number of lines you want to print :");
	scanf("%d",&n);

	t = n;

	for(i = 1; i <= n ; i++);
		{
			for( j = 1 ; j < t ; j++){

			printf(" ");}

		t--;
			
			for (j = 1 ;  j <= 2*i-1 ; j++){
			printf("*");}
		
		printf("\n");
		}

}						

