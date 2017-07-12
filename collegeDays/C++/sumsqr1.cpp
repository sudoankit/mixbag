#include<iostream>
#include<math.h>

using namespace std;


int sumsq(int n,int m);

int swapy(int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;
}



int main(){

    int n,m;
    cin >> n >> m;
    

    cout << "Sum is " << sumsq(n,m) << '\n';

}


int sumsq(int n , int m){

    if(n > m)
	swapy(&n,&m);
    double sum = 0;
    for(int i = n ; i <= m ; i++)
	sum += pow(i,2);
    return sum;
}
