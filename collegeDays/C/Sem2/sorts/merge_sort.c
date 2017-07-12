// Merge_Sort@dad

#include<stdio.h>
const int Max =100;

void simple_merge(int a[], int low, int mid, int high)
{
  int i = low;
  int j = mid+1;
  int k = low;
  int c[Max];
  while(i<=mid && j<=high)
    {
      if(a[i]<a[j])
	{
	  c[k]=a[i];
	  i=i+1;
	  k=k+1;
	}
      else
	{
	  c[k]=a[j];
	  j=j+1;
	  k=k+1;
	}
    }
  while(i<=mid)
    {
      c[k++]=a[i++];
    }
  while(j<=high)
    {
      c[k++]=a[j++];
    }
  for(i=low; i<=high; i++)
    {
      a[i]=c[i];
    }
}

void merge_sort(int a[], int low, int high)
{
  int mid;
  if(low<high)
    {
      mid=(low+high)/2;
      merge_sort(a, low, mid);
      merge_sort(a, mid+1, high);
      simple_merge(a, low, mid, high);
    }
}

main()
{
  int a[Max];
  int n;
  int i; 
  printf("Enter the No. of elements to sort:");
  scanf("%d", &n);

  printf("Enter the elements to sort:\n");
  for(i=0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
  merge_sort(a, 0, n-1);
  printf("The sorted vector using merge sort algorithm is :\n");
  for(i=0; i<n;i++)
    {
      printf("%d \t", a[i]);
    }
  printf("\n");
}
