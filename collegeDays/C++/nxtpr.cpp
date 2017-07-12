#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    
    char s[100];
    cin >> s;
    int n = strlen(s);
    
    do{
	cout << s <<'\n';
	
    }while(next_permutation(s,s + n-1));

    return 0;

}

    
