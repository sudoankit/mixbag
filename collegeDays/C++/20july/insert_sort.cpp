#include<iostream>
using namespace std;


void insertion_sort(int *);


int main()
{
    int v[] = {3,2,4,1};
    
    
    insertion_sort(v);

    for(int i = 0 ; i <= 3 ; i++){
	cout << v[i] << '\t';

	
    }
    cout << '\n';
    

}

void insertion_sort(int *A)
{
    for(int j = 1 ; j <= 3 ; j++){
	int key = A[j];
        int i = j - 1;

	while(i > -1 && A[i] > key ){
            A[i+1] = A[i];
	    i--;
	}
	
        A[i+1] = key;
	
    }
    
}

    
	
	      
	    
	
    
   
    
 
    
  
    
    
