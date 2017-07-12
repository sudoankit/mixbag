#include<iostream>
using namespace std;

class A {
public :
A (){
  cout << 'A' <<'\n';

}

};


class B : public A {

public :
B (){
cout << 'B' << '\n';

}
};
class C : B,virtual A {

public:
C() {

cout << 'C' << '\n';
}

};


int main(){

C c;

}



