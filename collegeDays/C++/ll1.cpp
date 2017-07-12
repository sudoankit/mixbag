#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
};

void firstN(struct node * head,int n){
    head->data = n;
    head->next = NULL;
}

void addN(struct node * head,int n){
    node *new_node = new node;                //allocating some memory to structure new node.
    new_node->data = n ;
    new_node->next = NULL;

    node *cur = head;
    while(cur){
	if(new_node->next == NULL){
	    cur->next = new_node;
	    return;
	}
	cur = cur->next;
    }
}

void insertFr(struct node **head,int n){
    
    node *newnode = new node;
    newnode->data = n;
    newnode->next = *head;
    *head = newnode;
}

