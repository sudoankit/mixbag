#include<stdio.h>
int main(){
    int a[300];
    int i;
    for(i = 0 ; i < 300 ; i++){
	scanf("%d",&a[i]);
    }
    int i_min = a[0];
    int i_max = a[299];
    for(i = 0 ; i < 300 ; i++){
	if(a[i] < i_min){
	    i_min = a[i];
	}
	if(a[i] > i_max){
	    i_max = a[i];
	}
    }
    printf("%d \t %d \n",i_max,i_min);
    return 0;
}
    
