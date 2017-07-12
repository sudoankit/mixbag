#include<bits/stdc++.h>
using namespace std;



int main(){

 vector<int> v;
 int n,x;

 cin >> n;
 for(size_t i = 0 ; i < n ;i ++){
 cin >> x;
 v.push_back(x);
 }



 sort(v.begin(),v.begin() + n);


 int t = 0,r = 0;
 for(size_t i = 0 ; i < n ;i ++)
 {
    t = max(v[i],t+1);
    r += t - v[i];
  }



 //for (vector<int>::iterator it= v.begin(); it!= v.end(); ++it)
   // cout << ' ' << *it;
 cout << r << '\n';

return 0;
}











