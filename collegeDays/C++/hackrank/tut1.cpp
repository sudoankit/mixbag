#include<iostream>
using namespace std;

int main()
{
    int n,key,index;
     cin >> key;
     cin >> n;
     int a[n];

     
     
     
     for(int i = 0 ; i < n ;i++){
	 cin >> a[i];
     }
     
     for(int i = 0 ; i < n ; i++){
	 if(key == a[i]){
	     index = i;
	 }
	 
     }
     
     cout << index;
}

     
     
    
