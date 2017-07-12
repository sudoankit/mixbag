#include<iostream>
using namespace std;

template<class T>
inline void swap_(T&a, T&b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

void max_heapify(int *A, int i, int N){
	int largest  = i;
	int left = 2*i;
	int right = 2*i + 1;
	
	if(left <= N && A[left] > A[i] ){
		largest = left;
	}
	else
		largest = i;
	
	if(right <= N && A[right] > A[largest]){
		largest = right;
	}
	
	if(largest != i){
		swap(A[i],A[largest]);
		max_heapify(A,largest,N);
	}
	
}

void build_heap(int * A, int N){
	
	for(int k = N/2;k >= 1; k--){
		max_heapify(A,k,N);
	}
}

void heap_sort(int *A ,int N){
	
	build_heap(A,N);
	int heap_size = N;
	for(int j = N; j>= 2; j--){
		swap_(A[1],A[j]);
		heap_size--;
		max_heapify(A,1,heap_size);
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
	
	
	
