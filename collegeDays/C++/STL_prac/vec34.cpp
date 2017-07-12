#include<bits/stdc++.h>
#define pb push_back
using namespace std;

typedef vector<int> vi;



int main(){
    vi v;
    cout <<  v.size() << '\n';
    for(int i = 0 ; i < 100 ; i *= 5)
	v.push_back(i);

    cout <<  v.size() << '\n';
    
    for(int i = 0 ;i < 100 ; i*= 5){
        cout << v[i] << '\n';
    }
}

    
