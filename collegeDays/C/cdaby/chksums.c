#include<stdio.h>
#define SZ 100
int main(){
    int a[SZ],n;
    long int result=0;
    size_t i;
    const  int seed = 113,limit = 10000007;
    scanf("%d",&n);
    for(i = 0 ;i < n ;i++){
	scanf("%d",&a[i]);
    }
    //checksums technique
    for(i = 0; i < n; i++){
	result = (result + a[i])*seed;
	if(result > limit)
	    result = result % limit;
    }
    printf("%ld \n",result);
}
