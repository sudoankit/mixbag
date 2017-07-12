#include<iostream>
using namespace std;

class bull 
{
private :
    int price;
    int date;
public:
    void display();
    
    bull(int x,int y)
	{
	    date = y;
	    price = x;
	    
	};
};

    

void bull::display()
{
    cout << "The price is " << price <<' ' << "and the date is " << date << '\n';
}


int main()
{

    bull b1(3,4);
    bull b2(5,6);
    
    b1.display();
    b2.display();
    
    
    return 0;
    
}



    
    
    
    
