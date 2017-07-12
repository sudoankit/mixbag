#include<stdio.h>
#define SZ 10
int main(){
    char s[SZ];
    int itr,i;
    char schk[] = {'a','i','e','o','u','y','\0'};
    
    scanf("%[^\n]s",s);
    
    for(i = 0 ; i < 100 ; i++){
    while(schk[i] != '\0'){
          if(s[i] == schk[i]){
		itr++;
	    }
	}
    }
    printf("%d \n",itr);
}
