#include<stdio.h>
#include<stdlib.h>

struct node{
 int info;
 struct node* link;
};
 typedef struct node* NODE;


NODE getnode();
void freenode(NODE x);

NODE getnode(){
 
