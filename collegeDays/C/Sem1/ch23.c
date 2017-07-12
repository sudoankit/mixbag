//Bubble sort
#include<stdio.h>
int main()
{   
	int arr[50];
	int i,j,swp,n;
    printf("Enter number of elements i the array :\n");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
    for(i=0;i<n;++i)
    {
      
      scanf("%d",&arr[i]);


    }

    for(i = 0;i< n-1 ;++i)
    {

       for(j = 0; j < n-1-i;++j)
       {


       if(arr[j+1]<arr[j])
                {
                 swp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = swp;
                }
            }

    }
printf("The sorted array is :\n");
		for(i = 0;i < n ; ++i)
		{
			printf("%d\n",arr[i] );
		}



}