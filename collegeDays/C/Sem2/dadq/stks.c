#include<stdio.h>
#define SZ 10
struct node {
 int info;
 struct node* link;
};

typedef struct node *NODE;

NODE getnode(){
 NODE x;
 x = (struct node*)malloc(sizeof(struct node));
if (x != NULL){
 return x;
}
}

void insertN(NODE first,int a[],int item){
    NODE newnode;
    newnode = getnode();

    newnode.info = item;
    if(first.link == NULL){
      newnode.link = NULL;
      }
    else{
      newnode.link = first;}

      start = newnode;
}

void display(){
	NODE cur;
	if(start = NULL){
		printf("The linked list is NULL\n");
	    return;
	}   
	cur = first;
	printf(" \n\nThe list is : \n");
    while(cur != NULL){
    	 printf("\n");
    	 cur = cur.link;
    	 
    }
} 

void deleteN(){

}




