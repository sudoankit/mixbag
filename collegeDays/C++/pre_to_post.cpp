//prefix to postfix conversion
//recursive without stack

#include<iostream>
#define OP "+-*/"
using namespace std;


void pretopostfix(char* preIn,char* exprOut);
int findlenght(char* exprIn);

int main()
{
    char prfx[256];
    cin >> prfx;
    char pstfx[256] = "";
    

    pretopostfix(prfx,pstfx);
    cout << '\n';
    
    cout << "Prefix exp "
	 << prfx
	 << "\n"
	 << "Postfix epr "
	 << pstfx
	 <<'\n';
}

void pretopostfix(char* prefx,char *pstfx)
{
    char opr[2];
    char pstfx1[256];
    char pstfx2[256];
    char temp[256];
    int lengprfx;


    
    
    
    
    
