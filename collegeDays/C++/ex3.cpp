#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n;
    int avg = 0;
    cin >> n;
    int ar[n];
    for(size_t i = 0 ; i < n ; i++  )
	ar[i] = rand();

    
    for(size_t i = 0 ; i < n ; i++  )
	cout << "ar[" << i << "] = " << ar[i] << '\n'; 

    
    for(size_t i = 0 ; i < n ; i++  ){
	
	avg += ar[i];
    }
    cout << "The sum is :"  << avg << '\n';

        int l = ar[0];
        int s = ar[0];
    for(size_t i = 0 ; i < n ; i++  ){
        
	if( l <= ar[i]){
	    l = ar[i];
	}
	else if( s >= ar[i]){
	    s = ar[i];
	}
    }

    cout << "Largest :"  <<l << '\n' << "Smallest :"  << s  << '\n'<< "Average is :" << (double)avg/n << '\n' ;
    
   
}
	    
