#include<iostream>
using namespace std;

int f(int x){
    int j;
    long int pr = 1;

    for(j = 1 ;  j <= 5 ; j ++){
    pr = pr * (x + j);
    }
    return  pr ;
}

int main(){
    long int sum = 1.0;
    for(int i = 1 ; i <= 100 ; i++){
	sum = sum + f(i);
    }
    cout << sum << '\n';
}

    
   
