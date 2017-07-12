#include<stdio.h>
#include<math.h>
#define SZ 100
int main(){
    int n,i;
    int x[SZ];
    int y[SZ];
    int z[SZ];
    double  div,chk,inter;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d %d",&x[i],&y[i]);

    }
    for(i = 0; i < n; i++){
	
	div = (x[i]/(double)y[i]);
	
	chk = modf(div,&inter);
 
        if(chk >= 0.5){
	    z[i] = ((int)div + 1);}
	else if(chk < (-0.5)){
		z[i] = ((int)div - 1);}
	else{
	    z[i] = (int)div;}
    }	    
    
    
    for(i = 0; i < n; i++){
        printf(" %d \t",z[i]);
    }

    return 0;
    }
