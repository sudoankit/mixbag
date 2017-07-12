#include<iostream>

using namespace std;

double f(int){
    int i;
    return (i * i ) + 2 ;
}

int main(){

    double z = 4.5;
    int y = 1;
    int x;
    cin >> x;
    

    z = y + f(x);
    
    cout << "The value of the expression is :" << z << '\n';

}

