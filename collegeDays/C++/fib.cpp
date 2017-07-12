//to find the golden ratio
#include<iostream>
using namespace std;
 
long int fib(int n){

    if( n == 0  || n == 1 ) return n;
    
    return fib(n-1) + fib(n-2);
}

int main(){

    for(register int i = 1 ; i <= 20 ; i++){
	
	cout << fib(i) << "          ";
	cout <<  (long double)fib(i)/fib(i-1) << '\n';
	cout.precision(30);
    }
}
