//bubble
#include<stdio.h>
#define loop for(i = 0 ; i < 5 ; i++)
int main(){
    int a[5];
    int i,j,t=0;

	
    loop {
	scanf("%d",&a[i]);
    }
    loop {
	for(j = 0 ; j < 5 - i - 1 ; j++){
	if( a[j] > a[j +1]){
	    t = a[j];
	    a[j] = a[j +1];
	    a[j + 1] = t;
	}
	}
    }
    loop{
	printf("%d \t",a[i]);
    }
}
