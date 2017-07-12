#include<iostream>
using namespace std;

long sieve(long,long*);


long sieve(long n,long *primes )
{
    if(n < 2) {
	return 0;
    }

    char * theSieve;
    theSieve = new char[n+1];

    const char blank = 0;
    const char marked = 1;

    for(long k = 2; k <= n;k++ ){
	theSieve[k] == blank;
    }

    long idx = 0;

    for(long k =2; k <=n ; k++){
	if(theSieve[k] == blank){
	    theSieve[k] = marked;
	    primes[idx] = k;
	    idx++;
	    for(long d = 2*k;d <=n ; d += k){
		theSieve[d] = marked;
	    }

	}
    }
    delete[] theSieve;
    return idx;
}


    
