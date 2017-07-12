//array insertion and deletion ,dynamically
#include<vector>
#include<iostream>
using namespace std;


void insert(int,int);



int main()
{
    double *a = new double [5];
    
    for(int i = 0; i < 5; i++){
	a[i] = i+1;

    }

    for(int i = 0; i < 5; i++){
	cout << a[i] <<"\t " ;
    }

    insert(4,12);

    for(int i = 0; i < 5;i++){
	cout<< a[i] << "\t";
    }
    
    cout << '\n';
    
 	
       
	
}

void insert(int pos,int num)
{
    double *a = new double[5];
    
    int i;
    for(i = 4 ; i >=pos ; i--)
	a[i-1] = a[i];
    a[i-1] = num;
}

    
	
   
	

    
