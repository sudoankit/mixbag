#include<iostream>
using namespace std;


class B1 {

int b1;
public :
void display()  {

cout << "b1" << '\n';
}
};
class B2 {

int b2;
public :
void display()  {

cout << "b2" << '\n';
}
};
class D : public B1, public B2 {

};

int main(){

D d;
d.display(); /* ambiguity error */
d.B1::display();
d.B2::display();

}
