#include<iostream>
using namespace std;


int printRev(int);

int main(){
    printRev(5);
    
	}
int printRev(int data)
{   
    
    if(gets() == '\n'){
	return 0;
    }

    cin >> data;
    printRev(data);
    
    cout << data;
    return 0;
}


    

