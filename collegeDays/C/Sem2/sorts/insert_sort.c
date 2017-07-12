#include<stdio.h>
#define SIZE 50

void insert_sort(int n,int a[]);

  void main() {
	int i,j,item,n;
	int a[SIZE];

	printf("Enter the size of the array : \n");
	scanf("%d",&n);

	printf("Enter the elements of the array : \n ");

	for(i = 0 ; i < n ; ++i){

	 scanf("%d",&a[i]);
	}

	insert_sort(a,n);


	printf("The sorted array elements are : \n ");
	for(i = 0 ; i < n; ++i){

	 printf("%d \n",a[i]);
	}
}

 void insert_sort(int n , int a[]){
	int i,j,item;

	for(i = 1;i <=n-1;i++){

	 item = a[i];
	 j = i-1;


	 while(a[j]>item && j >= 0){
	 	a[j+1] = a[j];
	 	j--;
	 }

	a[j+1] = item;
 }
}
