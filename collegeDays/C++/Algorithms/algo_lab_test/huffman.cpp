#include<bits/stdc++.h>
#include<cstring>
#define MAX_TREE_HEIGHT 50
using namespace std;
struct node{
	int freq;
	char ch;
	struct node *left,*right;
};
struct cmp{
	bool operator()(struct node *a,struct node *b){
		return a->freq>b->freq;
	}
};
struct node* newNode(char ch,int freq){
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	temp->freq=freq;
	temp->ch=ch;
	temp->left=temp->right=NULL;
	return temp;
}
void printCodes(struct node *root,int *code,int top){
	if(root->left){
		code[top]=0;
		printCodes(root->left,code,top+1);
	}
	if(root->right){
		code[top]=1;
		printCodes(root->right,code,top+1);
	}
	if(root->left==NULL && root->right==NULL){
		cout<<root->ch<<": ";
		for(int i=0;i<top;i++){
			cout<<code[i];
		}
		cout<<endl;
	}
}
void HuffmanCodes(char arr[],int freq[],int size){
	int i;
	int code[MAX_TREE_HEIGHT];
	struct node *left,*right;
	priority_queue<struct node*,vector<struct node*>,cmp> pq;
	for(i=0;i<size;i++){
		pq.push(newNode(arr[i],freq[i]));
	}
	while(true){
		left=pq.top();
		pq.pop();
		if(pq.empty()){
			break;
		}
		right=pq.top();
		pq.pop();
		struct node *temp=newNode('$',left->freq+right->freq);
		temp->left=left;
		temp->right=right;
		pq.push(temp);
	}
	printCodes(left,code,0);
}
int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    HuffmanCodes(arr, freq, size);
    return 0;
}