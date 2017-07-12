#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;

    int x;
    for(int i = 0; i < v1.size();i++ ){
	cin >> x;
	v1.push_back(x);
    }

    cout << v1.size() << '\n';
}
