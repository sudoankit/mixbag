#include<stdio.h>
#include<stdlib.h>

#define SZ 5

struct node
{
 int info;
 struct node* link;
};

typedef struct node* NODE;

NODE getnode();
NODE insert(int item,NODE first);

main()
{	char n;
	NODE first;
	NODE temp;
	first = NULL;
        int item =777;
        insert(item,first);
        printf("Do you want to display the linked list ? \n");
	scanf("%c",&n);
	if(n=='Y'){

  if(first==NULL)
   {
    printf("Underflow! \n");
   }
 temp=first;
 while(temp != NULL)
  {
   printf("%d \n",temp->info);
   temp = temp->link;
  }
  printf("\n");

	}


}

NODE getnode()
{
 NODE x;
 x = (NODE)malloc(sizeof(struct node));
 if(x==NULL)
 {
  printf("Out of memory! \n");
  exit(0);
 }

 return x;
}

NODE insert(int item,NODE first)
 {
  NODE temp;
  temp = getnode();
  temp->info = item;
  temp->link = first;
  return temp;
 }


