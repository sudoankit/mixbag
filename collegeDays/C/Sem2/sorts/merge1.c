#include<stdio.h>
#include<limits.h>
#define SIZE 100

void mergsrt(int A[],int,int);
void merge(int A[],int p,int q,int r);

void merge(int A[],int p,int q,int r)
 { 
  // Full code conversion from pseodo-code of Cormen and Rivest (I did it! Yeah!)
 int i,j,k;
 int n1,n2;
 n1 = q - p +1;
 n2 = r-q;
 int L[n1+1],R[n2+1];
 
 for(i=1 ; i < n1;i++){
  L[i] = A[p+i-1];
  }
 for(j = 1; j < n2; j++ ){
  R[j]  = A[q+j];
  }
 L[n1+1]= INT_MAX;
 R[n2+1]= INT_MAX;
 i=1;
 j=1;
 for(k = p; k < r;k++){
  if(L[i] <= R[j]){
    A[k] = L[i];
    i = i+1;
   }
  else {
   A[k] = R[j];
   j = j+1;
  }
 }
}
 

void mergsrt(int A[],int p,int r){
  int q;
  if(p < r)
   {
     q = ((p+q)/2);
     mergsrt(A,p,q);
     mergsrt(A,q+1,r);
     merge(A,p,q,r);
 }
}

int main()
{
  int A[SIZE];
  int n;
  int i;
 printf("Enter the number of elements in an array : \n");
 scanf("%d",&n);

  printf("Enter the elements to sort: \n");
  for(i=0; i<n; i++)
    {
       scanf("%d",&A[i]);
     }
   mergsrt(A,0,n-1);
   printf("The sorted vector using merge sort algorithm is :\n");
  for(i=0; i<n;i++)
    {
       printf("%d \t",A[i]);
     }
       printf("\n");

 return 0;
 }


