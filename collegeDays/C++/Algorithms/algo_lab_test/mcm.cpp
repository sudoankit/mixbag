#include<iostream>
#include<limits.h>
#define INF INT_MAX
#define MAX 20

using namespace std;

int m[MAX][MAX];
int s[MAX][MAX];


int lookup_chain(int *p,int i,int j){
	int q= 0;
	if(m[i][j] < INF)
		return m[i][j];
	if(i == j)
		m[i][j] = 0;
	else{
		for (int k = i; k < j; k++)
		{
			q = lookup_chain(p,i,k)+ lookup_chain(p,k+1,j) + p[i-1]*p[k]*p[j]; // very important--> memoization step
			if(q < m[i][j]){
				m[i][j] = q;
				s[i][j] = k;
			}
		}
	}
	return m[i][j];
}

void print_matrix(int i,int j){
	
	if(i == j)
		cout << "A" << i;
	else{
		cout << '(';
		print_matrix(i,s[i][j]);
		print_matrix(s[i][j]+1,j);
		cout << ')';
	}
}

int main(){
	int p[] = {30,35,15,5,10,20,25};
	int n = sizeof(p)/sizeof(p[0]);
	for (int i = 0; i < n; ++i)
	{
		for(int j = i; j< n; j++){
			m[i][j] = INF;
		}
	}
	cout << "Scalar Multiplication : " << lookup_chain(p,1,n-1) << '\n';
	cout << "Order :";
	print_matrix(1,n-1); 
}