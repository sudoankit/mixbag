#include<stdio.h>



int collatz(int n);


int main(){





}


int collatz(int n){
    if( n % 2 == 0) 
    	n = n/2;
    else
	n = n*3 + 1;
    return n;
 }
