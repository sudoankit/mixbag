#include<stdio.h>
#define SZ 5

void push(int item,int *top,int a[]);
void display();

main(){
	int item = 5;
	int a[SZ];
	int top = -1;
	printf("The push \n");
	push(item,&top,a);


}

void push(int item,int *top,int a[]) {

	if(*top == SZ-1)
	{
	   printf("Stack overflow  \n");

		}

	s[++(*top)] = item;
	return ;
	}

