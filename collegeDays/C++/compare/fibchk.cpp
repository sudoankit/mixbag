#include<iostream>
using namespace std;

long long int fibo (int n);

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n ;i++ )
	cout << fibo(i) << '\n';
    

}

long long int fibo(int n){
    if( n == 0) return 0;
    if( n == 1) return 1;
    return fibo(n-2) + fibo(n-1);

}
