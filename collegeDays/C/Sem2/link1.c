#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};
typedef struct node *NODE;



NODE getnode(){
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    if(x == NULL){
	printf("NO memory available! \n");
    }
    return x;
}

void insert_node(NODE start ,int key){
    NODE cur;
    
    cur = getnode();
    cur->data = key;
    cur->link = NULL;
    while(start != NULL){
	start=start->link;
    }
    start->link = cur;
}

void display(NODE start){
    if(start == NULL){
	printf("Linked list is empty \n");
	return;
    }
    printf("list is \n");
    while(start != NULL){
	printf("%d \n",start->data);
	start= start->link;
    }
    printf("\n");
} 

    

int main(){
    NODE cur,start;
    start = NULL;
    int key;
    char ch = '1';
    start = NULL;
    do{
	printf("1.INSERT \n");
	printf("2.DISPLAY \n");
	printf("3.QUIT \n");
	printf("Enter your choice : \n");
	scanf("%c",&ch);
        switch(ch){
	case '1':
	    printf("Enter the element to be inserted : \n");
	    scanf("%d",&key);
	    if(start =NULL){
	        cur = getnode();	
		cur->data = key;
		cur->link = NULL;
		start = cur;
	    }
	    else
		insert_node(start,key);
	
	    break;
	case '2':
	    display(start);
	    break;
	case '3':
	    break;
	case '4' :
	    printf("Wrong choice ! \n");
	}
    }while(ch != '3');
}
	
		
		
