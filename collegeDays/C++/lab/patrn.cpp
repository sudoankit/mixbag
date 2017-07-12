#include<iostream>

using namespace std;

int main(){
    char arr[] = {'c','l','a','s','s'};
    int k = 0;
    for(int i = 1 ; i < 5 ; i++){
	for(int space = 1;space <= 4;space++){
	    cout <<" ";
	}
	while(k != 2*i - 1){
	    cout << arr[k];
	    k++;
	}
	
	cout <<'\n';
    }
}
	
	    
	
    



    

