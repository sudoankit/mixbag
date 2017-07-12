#include<stdio.h>
#define SZ 50


struct node{
 int info;
 struct node* link;
 };
 typedef stuct node* NODE;

NODE getnode();
NODE revnode(NODE first);


NODE getnode(){
 NODE x;

 x = (NODE)malloc(sizeof(struct node));

 if (NODE x == 0){
   printf("Out of memory \n");
   }

   return x;
}



NODE revnode(NODE first){
 {
   NODE cur,temp;
   cur = NULL;
   while(first != NULL){
    temp = first;
    first = first->link;
    temp->link = cur;
    cur = temp;  

}
int  main()
 {

    NODE temp;
    NODE first;
    temp = getnode();
    first = getnode();
    revnode(first);


     return 0;
}


