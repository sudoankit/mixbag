//sudo ankit quicksort

#include<iostream>
using namespace std;

template <typename T>
void swapper(T& x,T& y)
{
     T temp;
     temp=x;
     x=y;
     y=temp;
}

int partition(int s[],int l, int h){
	int i;
	int p;
	int firsthigh;

	p = h;
	firsthigh = l;

	for (int i = l; i < h; ++i)
	{
		if (s[i] < s[p])
		{
			swapper(s[i],s[firsthigh]);
			firsthigh++;
		}
		
	}
	swapper(s[p],s[firsthigh]);
	return firsthigh;
}

void quicksort(int s[],int l, int h){
	int p;
	if((h-l) > 0){
		p = partition(s,l,h);
		quicksort(s,l,p-1);
		quicksort(s,p+1,h);
	}
}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	quicksort(a,0,n-1);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << '\n';

	}

}













