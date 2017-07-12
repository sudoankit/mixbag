//symmetry of a matrix
#include<iostream>


using namespace std;

   
int main(){
    int flag;
    int ar1[2][2];
    int ar2[2][2];

    for(int i = 0 ; i < 2 ; i++ ){
	for(int j = 0; j < 2 ; j++){
	    cin >> ar1[i][j];
	}
    }
    for(int i = 0 ; i < 2 ; i++ ){
	for(int j = 0; j < 2 ; j++){
	    ar2[i][j] = ar1[j][i]; // transpose
	}
    }
    for(int i = 0 ; i < 2 ; i++ ){
	for(int j = 0; j < 2 ; j++){
	    if(ar1[i][j] == ar2[i][j]){
                flag = 1;
	    }
	    else{
		flag = 0;
		break;
	    }
            
         }
    }
     if(flag){
          cout << "Symmetric ! \n";
                }
     else
	 cout << "Not symmetric ! \n";
	
}
