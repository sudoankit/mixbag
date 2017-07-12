#include<stdio.h>
#define SZ 100
int main(){
    int n,i;
    int x[SZ];
    int y[SZ];
    int z[SZ];
    int ON[SZ];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);

    }
    for(i = 0; i < n; i++){
       
	if((x[i] +y[i] >= z[i]) && (x[i] + z[i] >= y[i]) && (z[i] + y[i] >= x[i]))
	    ON[i] = 1;
	else
	    ON[i] = 0;
    }
    for(i =0; i < n;i++)
	printf("%d\t",ON[i]);
    printf("\n");
	
    return 0;
}              
