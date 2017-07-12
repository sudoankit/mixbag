#include<iostream>
#include<cmath>
using namespace std;

int main(){

long long int n;
cin >> n;
long long int x;
x = log2(n);


long long int p;
p = pow(2,x);

long long int bac = n-p;
cout << bac + 1;
return 0;
}

