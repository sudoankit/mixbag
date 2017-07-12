//bubble_sort
//@sudoankit
//07-01-2016 19:46:15
#include<iostream>
using namespace std;


void bubble_sort(A,n){
	for(int k = 0 ; k < n - 1 ; k++ ){
		flag = 0;
		int t;
		for(int j = 0 ; j < n - k - 1 ; j++){
			if(A[j] > A[j+1]){
			 t = A[j];
			 A[j] = A[j + 1];
			 A[j + 1] = t;	
			 flag = 1;
			}
		}
		if(flag == 1){
			break;
		}
	}
}
	for(int i = 0; i < n ; i++){
		cout << A[i] << ' ';
	
}



int main(){
	int n;
	cin >> n;
	int * A = new int[n];
	

}