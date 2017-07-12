#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n,m,a,req;
    
    cin >> n >> m >> a;
    if( n,m,a >= 1 && n,m,a <= 10e9 ){
    req = ceil((double)n/a) * ceil((double)m/a);

    cout << req << '\n';
    }
}
    
