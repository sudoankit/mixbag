#include<stdio.h>
#include<stdlib.h>

#define SIZE 50

struct node {
 int info;
 struct node* link;
};
typedef struct node* NODE;


NODE getnode();
NODE getnode(){
 NODE x;
 x = (NODE)malloc(sizeof(struct node));
 if(x == 0){
   printf("Out of memory  \n");
   }
 return x;
}





int main(){

