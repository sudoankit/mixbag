#include<bits/stdc++.h>
using namespace std;

bool match(char *,char*);

void test(char* first, char* last){
    
  match(first, last)? puts("Yes"): puts("No");
  
}

int main(){
    int T;
    int i = 0;
    string s1,s2;
    vector<char> writable(str.begin(), str.end());
    writable.push_back('\0');  
  
    while( i < T){
	v1.push_back(s1);
	v2.push_back(s2);
    }
    i = 0;
    while(i < T){
	test(v1[i],v2[i]);
	cout << '\n';
    }
    return 0;
}

bool match(char* first, char* last){
    if(*first == '\0' && *last == '\0')
	return true;
    if (*first == '?' || *first == *last)
        return match(first+1, last+1);
};
