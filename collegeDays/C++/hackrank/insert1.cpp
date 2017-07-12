#include<iostream>
using namespace std;

void insert_srt(int,int*);


int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i = 0 ; i < N ; i++)
	cin >> A[i];
    
    insert_srt(N,A);
    cout << '\n';
    
    return 0 ;
    
}

void insert_srt(int N,int * A)
{   
    
    int key;
    
    
    for(int j = 1; j < N ; j++ ){
	key = A[j];
	int i = j-1;
	while(i > -1 && A[i] > key ){
	    A[i + 1] = A[i];    //right shift
	    i--;
            for(int l = 0 ; l < N ; l ++){
	          cout << A[l]
	               << "\t";
		}
	    cout << '\n';
	    
	}
	
	A[i+1] = key;
    }
    
    for(int i = 0 ; i < N ; i++ ){
	cout << A[i]
	     << "\t";
	
	    }

}

	
