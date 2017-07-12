#include<iostream>
using namespace std;
int main(){
    

    long double T,s,q;
    cin >> T >> s >> q;
   
    int c = 0;
    while(s < T){
	s = s * q;
	c++;
    }
        
    cout << c << '\n';
}
    
    
