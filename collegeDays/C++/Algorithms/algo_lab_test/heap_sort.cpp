// sudoankit
// @ heapsort 
#include<iostream>
using namespace std;


template<typename T>
void swapper(T &a,T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

void max_heapify(int a[],int i, int n){
	int left = 2*i;           //left child

	int right = 2*i + 1;      // right child
	int largest;

	if (left <= n && a[left] > a[i])
	{
		largest = left;

	}
	else
		largest = i;

	if (right <= n && a[right] > a[largest])
	{
		largest = right;
	}

	if(largest != i){
		swapper(a[i],a[largest]);
		max_heapify(a,largest,n);
	}

}

void build_max_heap(int a[],int n){
	for (int i = n/2; i >= 1; i--)
	{
		max_heapify(a,i,n);
	}

}

void heap_sort(int A[ ],int n){
	
	int heap_size = n;
	build_max_heap(A,n);
	for (int i = n; i >= 2; i--)
	{
		swapper(A[1],A[i]); // root with other elements;
		heap_size = heap_size -1 ;

		max_heapify(A,1,heap_size);
	}

}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}

	heap_sort(a,n);

	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << '\n';

	}

}


















