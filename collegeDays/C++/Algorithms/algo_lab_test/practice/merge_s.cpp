void merge(int a[],int start,int mid, int end){

	int p = start;
	int q = mid +1;

	int ar[end-start +1];
	int k = 0;

	for(int i = start; i < end; i++){
		if(p > mid){
			ar[k++] = a[q++];
		}
		else if(q > end){
			ar[k++] = a[p++];

		}
		else if (a[p] < a[q]){
			ar[k++] = a[p++];
		}
		else
			ar[k++] = a[q++]


	}

	for (int p = 0; p < k; ++p)
	{
		a[start++] = ar[p];
	}

}

void merge_sort(int a[], int start, int end){
	if(start > end){
		int mid = start+end/2;
		merge_sort(a,start,mid);
		merge_sort(a,mid+1,end);

		merge(a,start,mid,end);
	}
}