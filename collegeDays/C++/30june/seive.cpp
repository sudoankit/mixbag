#include<iostream>
#include<cmath>
#include"seive.h"

const long N = 2000000;
const long TABLE_SZ = (N/log(N)) * 2;


using namespace std; 

int main()
{


long *primes;
primes = new long[TABLE_SZ];
long np = sieve(N,primes);

cout << "The number of primes found were \t" << np << '\n';

cout << "The largest prime found is \t " << primes[np-1] << '\n';

cout << "\n"<< "HAVE A NICE DAY!" << '\n';

}



    
