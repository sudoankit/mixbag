#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); // neglect this.this is for speed and optimization
    double n;
    cin >> n;
    double dRand = ((double) rand()/RAND_MAX ) * n ;
                                                // for you n = 10 and RAND_MAX is already defined.
                                                // this gives better randomness than modulo %
    double dInput;
    cout << "Enter a random number to prove how lucky you are?" << '\n';
    cin >> dInput;

    if( dInput == dRand )
	cout << "You lucky ass \n";
    else
	cout << "Fuck you! The correct number was " << dRand <<'\n';           //most of the time.lol
}

    
