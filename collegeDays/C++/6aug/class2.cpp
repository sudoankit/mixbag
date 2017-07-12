#include<iostream>
using namespace std;

class Tx {
private :
    int data;
public :
    void getdata(int i){
	data = i;
    }
    int printdata(){
	return data;
    }
};

int main(){
    Tx A;
    int n;
    cin >> n;
    
    A.getdata(n);
    cout << A.printdata() <<'\n';
    return 0;
    
}

    
