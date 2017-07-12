#include<iostream>

using namespace std;

int main(){
    
    long double a[100];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2 ;i < 100 ; i++){
	a[i] = a[i -1] + a[i -2];
    }
    for(int i = 0 ; i < 100 ; i++ )
    cout << a[i] << '\n';
}
