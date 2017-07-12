#include<iostream>
using namespace std;

int main(){

    int n;
    int mask = 1 << 31;
    for(; ; ){
	cout << "Enter a integer: \n";
	cin >> n;

	cout << "Bit representation of n is :" << n << '\n';
        for(int i = 1 ;i <= 32; i++){
	    char cc = (n & mask) ? '1' : '0'; //taking bit i from left to right
	   

	    cout << cc;
	    
	    n <<= 1;
	    
	    if(i % 8  == 0 && i !=32)
		cout << ' ';
	    
	}
    }
}
	
