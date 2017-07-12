#include<stdio.h>
#define SZ 5

void push(int item,int s[],int *top);
void display(int *top,int s[]);
void pop(int s[],int *top);


main()
 {
  int n;
  char u;
  int s[SZ];
  int top = -1;
  int item;
  printf("Enter the item value? \n");
  scanf("%d",&item);
 do{
  printf("Enter the operations you want to perform on the stack: \n 1.Push \t 2.Pop \t 3.Display \n");
  scanf("%d",&n);


  switch(n) {
   case 1 : push(item,s,&top);
            break;
   case 2 : pop(s,&top);
            break;
   case 3 : display(&top,s);
            break;
   default : printf("OPTION INVALID! \n");
  }

 printf("Do you want to continue? \n");
 scanf("%c",&u);

}while(u == 'Y' || 'y');

}
void push(int item,int s[],int *top)
{
 if(*top == SZ-1){
  printf("Stack overflow! \n");
  }
 else{
  s[++(*top)] = item;
  }
}

void display(int *top,int s[])
{
 int i;
 if(*top==-1){
 printf("Underflow! \n");
  }
 else{
  for(i=0; i <= *top;i++){
   printf("%d \n",s[i]);
  }
 }
}

void pop(int s[],int *top){
 if(*top == -1){
  printf("There's nothing to pop! \n");
  }
 else{
 printf("%d",s[*top]);
 *top = *top -1;

}
}


