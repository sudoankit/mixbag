//bubble_sort
//@sudoankit
//07-01-2016 19:46:15
#include<iostream>
using namespace std;


void bubble_sort(int *A,int n){
	for(int k = 0 ; k < n; k++){
		int flag = 0;
		int t;
		for(int j = 0 ; j < n - k -1; j++){
			if(A[j] > A[j+1]){
			 t = A[j];
			 A[j] = A[j + 1];
			 A[j + 1] = t;	
			 flag = 1;
			}
		}
		if(flag == 0){
			break;
		}
	}
	for(int i = 0; i < n; i++)
		cout << A[i] << ' ';
	
}



int main(){
	int n;
	cin >> n;
	int * A = new int[n];
	for(int i = 0 ; i < n ; i++){
		cin >> A[i];
	}
	bubble_sort(A,n);

}