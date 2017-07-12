#include<stdio.h>
#define SZ 100

int smallest(int,int);

int main(){
    int n,i;
    int x[SZ];
    int y[SZ];
    int z[SZ];
    int c[SZ];
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);

    }
    for(i = 0; i < n; i++){
	c[i]= smallest( smallest(x[i],y[i]),z[i]);
  
    }
    for(i = 0; i < n; i++){
        printf("%d \t",c[i]);
    }
    printf("\n");
    return 0;
}


int smallest(int x,int y){
    return (x < y)? x : y;
}
