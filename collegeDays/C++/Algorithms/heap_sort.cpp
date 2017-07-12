#include<iostream>
using namespace std;

template<class T>
inline void swap_(T&a, T&b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}


void max_heapify(int Arr[],int i, int N){
	int largest = i;
	int left = 2*i;
	int right = 2*i + 1;
	if(left <= N && Arr[left] > Arr[i]){
		largest = left;
	}
	else
		largest = i;   //root itself
	
	if(right <= N && Arr[right] > Arr[largest])
		largest = right; 
	
	if(largest != i){
		swap_(Arr[i],Arr[largest]);
		max_heapify(Arr,largest,N);
	}
}

void build_heap(int * A,int N){
	for(int i = N/2; i >= 1;i--){
		max_heapify(A,i,N);
	}
}


void heap_sort(int* A, int n){
	
	    build_heap(A,n);
		int heap_size = n;
	    for (int i = n; i >= 2; i--)
	    {
	        swap_(A[1],A[i]);
			heap_size--;
	        max_heapify(A, 1, heap_size);
	    }
	
}


int main(){

	int n;
	cin >> n;
	
	
	int * A= new int[n];
	for(int i = 1; i <= n ; i++){
		cin >> A[i];
	}
	
	heap_sort(A,n);
	
	for(int i = 1; i <= n ; i++){
		cout << A[i] << ' ';
	}
	
	cout << '\n';

	






}