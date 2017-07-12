#include<iostream>
#define NDEBUG
#include<assert.h>

using namespace std;

int fib(int n);

int main(){

    int x;
    cin >> x;

    cout << fib(x) << '\n';

    
}

int fib(int n){
    assert(1);
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
