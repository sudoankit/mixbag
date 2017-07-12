#include<iostream>
using namespace std;



int main(){
    int n,m;

    cout << "Enter two numbers : \n";
    cin >> n >> m ;

    if(n > m ){
	int t = n;
	n = m;
	m = t;
    }

    double sum = 0.0;
    for(int i = n ; i <= m ; i++ ){
	 sum += i;
    }

    cout << "The sum is " << sum << '\n';
}
