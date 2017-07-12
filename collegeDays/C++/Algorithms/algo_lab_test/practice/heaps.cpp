

void max_heapify(int a[],int i, int n){
	int left = 2*i;
	int right = 2*i +1;

	int largest;

	if(left <= n && a[left] > a[i])
		largest = left;
	else
		largest = i;

	if(right <= n && a[right] > a[largest])
		largest = right;
	

	if(largest != i){
		swapper(a[i],a[largest]);
		max_heapify(a,largest,n);
	}

}

void build_heap(int a, int n){
	for(int i = n/2; i > 1; i--){
		max_heapify(a,i,n);
	}
}


void heapsort(int a[], int n){
	int heap_size = n;
	build_heap(a,n);

	for(int i = n; i >= 2; i--){
		swapper(a[1],a[i]);
		heap_size--;

		max_heapify(a,i,heap_size);
	}
}
















