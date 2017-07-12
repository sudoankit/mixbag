#include<iostream>
#include<cmath>
using namespace std;

void merge(int*,int,int,int);
void merge_sort(int*,int,int);


int main()
{
    int n;
    cin >> n;

    int *A = new int[n];

    for(int i = 0; i < n ; i++){
	cin >> A[i];
    }

    merge_sort(A,0,n-1);

    for(int i = 0;i < n ; i++){
	cout << A[i]
	     << '\t';
    }

    cout << '\n';

}

		 
void merge(int *A,int p,int q,int r)
{
    int n1 = q- p + 1;
    int n2 = r - q;

    int L[n1],R[n2];

    for(int i = 0 ; i < n1 ; i++){
	L[i] = A[p + i];
    }

    for(int j = 0; j < n2 ; j++){
	R[j] = A[q+j+1];
    }

    int i = 0;
    int j = 0;

    for(int k = 0 ; k <= r ; k++){
	if(i > n1){
	    A[k] = R[j];
	    j++;
	}

	else if( j > n2){
	    A[k] = L[i];
	    i++;
	}

	else if(L[i] <= R[j]){
	    A[k] = L[i];
	    i++;
	}

	else{
	    A[k] = R[j];
	    j++;
	}

    }
}

    
             
void merge_sort(int* A, int p,int r)
{
    if(p < r){
        int q = floor((p+r)/2);
	merge_sort(A,p,q);
	merge_sort(A,q+1,r);
	merge(A,p,q,r);
    }
}

    
	
	

        
	    

    
