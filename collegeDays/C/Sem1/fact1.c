#include<stdio.h>
main()
{
	int n;
	int z = 1;
	int i;
	printf("Enter a number you want to find the factorial : \n");
	scanf("%d",&n);

	for (i = 1;i<=n;i++)
		
	{
	z = z * i;
	
	}
	printf("The value of factorial : %d\n",z );
}