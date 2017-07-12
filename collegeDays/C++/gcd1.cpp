#include<iostream>
using namespace std;


int gcd(int,int);

int main(){

    int a,b;
    cin >> a >> b;

    int d = gcd(a,b);

    cout << d <<'\n';
    
}

int gcd(int a,int b)
{
    if(a == 0)
	return b;
    if(b == 0 )
	return a;
    else
	return gcd( b , a % b);
}

    
    
