#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int k,w;
    long long int n;
    cin >> k >> n >> w;
    long int total = 0;

    for(size_t i = 1; i <= w ; i++  ){
	total += i*k;
    }

    int x = 0;
    if( total > n){
	x = abs(total - n);
	}


    cout << x << '\n';
}
