
#include<iostream>
#include<vector>
using namespace std;

void display( vector<int> &v){
    for(int i = 0 ; i < v.size();i++){
	cout << v[i] << '\n';
    }
}


int main(){
    vector<int> v;
    cout <<" size : " << v.size() << '\n';
    int x;
    int n;
    cin >> n;
    cout << "Put " << n <<  " values : " <<'\n';
          
    for(int i = 0 ; i < n ; i++ ){
	cin >> x;
	v.push_back(x);
    }
    
    int 
   
    cout << "now size : " << v.size() << '\n';

    cout << "contents  " << '\n';
    display(v);
}

	
    
