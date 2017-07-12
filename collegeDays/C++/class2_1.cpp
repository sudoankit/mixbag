#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string.h>
using namespace std;

class NameDataSet 
	{
	  public:
	    char firstName[128];
	    char lastName[128];
	    int PIN;
 
	   
	    
	};

            bool getData(NameDataSet& nds );
	    void displayData(NameDataSet& nds);


inline bool getData(NameDataSet& nds){
    cout << "Enter your first name :" << endl;
    cin >> nds.firstName;

    if(strcmp(nds.firstName,"exit") == 0 || strcmp(nds.firstName,"quit") == 0)
	{
	    return false;
	}

    cout << "Enter your last name :" << endl;
    cin >> nds.lastName;
 
    cout << "Enter your authentic PIN.(We swear!)"<<endl;
    cin >> nds.PIN;

}

inline void displayData(NameDataSet& nds){
    cout << nds.firstName
	 << " "
	 << nds.lastName
	 << " "
	 << nds.PIN
	 << endl;
}

int main(){
    const int MAX = 25;
    NameDataSet nds[MAX];
    cout<< "\n";
    cout<< "Read Name and Credit Card Information. \n"
	<< "Enter exit to quit.(Not case sensitive)"
	<< endl;

    int index = 0;

    while(getData(nds[index]) && index < MAX )
	{
	    index++;
	}
    
    cout <<'\n';
    cout << "----Entries----"
	 << endl;
    
    for(int i; i < index; i++){
	displayData(nds[i]);
    
    }
    
}
    
    
