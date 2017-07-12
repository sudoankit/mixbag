//m.a.w_ds_c++_recur

#include<iostream>
using namespace std;

void printOut(int);
void printDigit(int);

int main(){
    int n;
    cin >> n;
    printOut(n);
    cout << '\n';
	
}


void printDigit(int n){
    cout << n << '\t';
}

void printOut(int n){
    
	if(n >= 10)
	    printOut(n/10);
	printDigit(n % 10);
    }

    
