#include<stdio.h>
#define SZ 100
int main(){
    int i,n;
    int a[SZ];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
	scanf("%d",&a[i]);
    }
    int sum=0;
    for(i = 0; i < n; i++){
	sum = sum + a[i];
    }
    printf("%d \n",sum);
    return 0;
}
     
 
