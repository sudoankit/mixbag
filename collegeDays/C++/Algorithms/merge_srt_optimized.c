#include <stdio.h>
#include <stdlib.h>

 
void merge (int *A, int n, int m) {
    int i, j, k;
    int *temp = malloc(n * sizeof (int));
    for (i = 0, j = m, k = 0; k < n; k++) {
        temp[k] = j == n ? A[i++] : i == m ? A[j++] : A[j] < A[i] ? A[j++] : A[i++];
    }
    for (i = 0; i < n; i++) {
        A[i] = temp[i];
    }
    free(temp);
}
 
void merge_sort (int *A, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    merge_sort(A, m);
    merge_sort(A + m, n - m);
    merge(A, n, m);
}
 
int main () {
    int n,itr;
	scanf("%d",&n);
	int *A = malloc(sizeof(int)*n);
	for(itr = 0; itr < n; itr++)
		scanf("%d",(A+itr));
	
		merge_sort(A,n);

	for(itr = 0;itr < n; itr++){
		printf("%d \t",A[itr]);
	}
	printf("\n");
	
	
	
}