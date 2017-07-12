
//permuataion stuff
//backtracking
#include<iostream>
#include<cstring>
using namespace std;

void swap(char* x,char* y){
    char t = *x;
    *x = *y;
    *y = t;
}

void permute(char *s,int f,int l){
    int i;
    if(f==l){
	cout << s <<'\n';
    }
    else
	{
	    for(i = f ; i <= l ;i++){
		
		    swap((s+f),(s+i));
		    permute(s,f+1,l);
		    swap((s+f),(s+i));          //backtracking
		}
	}
}


int main(){
    
    char s[100] ;
    cin >> s;
    
    int n = strlen(s);
    permute(s,0,n-1);

    
}
		    




    
