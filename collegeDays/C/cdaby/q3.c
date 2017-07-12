#include<stdio.h>
#define SZ 100
int main(){
    int n,i;
    int x[SZ];
    int y[SZ];
    int z[SZ];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
	scanf("%d %d",&x[i],&y[i]);
	
    }
    for(i = 0; i < n; i++){
	z[i] = x[i]  +  y[i];   
    }
    for(i = 0; i < n; i++){
	printf("%d \t",z[i]);
    }

    return 0;
}
      
    
    
