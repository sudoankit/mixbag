#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
int t;
cin >> t;
while(t > 0){

string s1;

cin >> s1;
std::reverse(s1.begin(), s1.end());

cout << s1 << '\n';
t--;
}




}
