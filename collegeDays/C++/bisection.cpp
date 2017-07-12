#include<iostream>
using namespace std;

double f(double x)
{
    return x*x+2*x-1;
}


int main()
{
    double tol;
    double a,b, c;

    cout<<"enter the value of left interval"<<'\n';
    cin>>a;
    cout<<"enter the value of right interval"<<'\n';
    cin>>b;

    tol = 0.000000001;

if(f(a)*f(b)<0)
    {
	cout<<"Root exist between" <<'\n'<< a << " and" <<'\n'<< b <<'\n';

if(f(a)<tol)
    {
	cout<<a<< "is a root \n";
    }
else if(f(b)<tol)
	{
	    cout<<b<<"is a root \n";
	}
 else
   {
	c = (a+b)/2;
	
       while(f(c)>tol)
	 {
	    if(f(a)*f(c)<0)
		{
		    b = c;
		    c = (a+b)/2;
		}
	    else
		{
		    a = c;
		    c = (a+b)/2;
		}
      }
       cout<<"The root is" <<c<<'\n';
        
 }
    }	

}
	    
	    
	    
