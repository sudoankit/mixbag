
#include<stdio.h>
#define SZ 20
int collatz_func(int a);

int main(){

    int d,n;
    int a[SZ];
    int c[SZ];
    int x=0,i;
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++ ){
	scanf("%d",&a[i]);
    }
    for(i = 0 ; i < n ; i++){
	
    c[i] = collatz_func(a[i]);
    }
    for(i = 0 ; i < n ; i++){
	
	printf("%d \t",c[i]);
    }

    
}


int collatz_func(int d)
{
    int c=0;
   
    while(d != 1){
    if( d % 2 == 0){
	d = d / 2;
	c++;
    }
    else{
	d = 3*d + 1;
        c++;
	    }
    }
    
    return c;
}
	
    
