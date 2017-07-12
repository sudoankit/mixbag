#include<stdio.h>
#include<limits.h>
#include<string.h>
#define MAX 5
 
int lookup[MAX][MAX];
 
int MatrixChainOrder(int p[], int i, int j)
{
    if(j<=i+1)
        return 0;
    int min = INT_MAX;
    int k, count;
 
 	if(lookup[i][j]==0){
	    // recursively calculate count of multiplcations and return the minimum count
	    for (k = i+1; k<=j-1; k++) {
	    	if(lookup[i][k]==0)
	    		lookup[i][k]=MatrixChainOrder(p, i, k);
 
	    	if(lookup[k][j]==0)
	    		lookup[k][j]=MatrixChainOrder(p, k, j);
 
	        count = lookup[i][k] + lookup[k][j] + p[i]*p[k]*p[j];
	        if (count < min)
	            min = count;
	    }
	    lookup[i][j] = min;
 	}
 
    return lookup[i][j];
}
 
// Driver program to test above function
int main()
{
    int arr[] = {1, 2, 3, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
 
 	memset(lookup, 0, sizeof(lookup));
 
    printf("Minimum number of multiplications is %d ", MatrixChainOrder(arr, 0, n-1));
    return 0;
}