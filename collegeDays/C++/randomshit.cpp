#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int x,y,v;
    x = rand();
    y = RAND_MAX;
    for(int i = 0 ; i < 20 ; i++){
	v = ((double)rand()/RAND_MAX) * 20;
	cout << v << '\n'; 
    }
    cout << x << '\n' << y << '\n';
}
   
