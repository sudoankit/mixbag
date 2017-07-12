#include<iostream>
using namespace std;
class cmplx {
private :
    int real;
    int comp;

public :
    cmplx(int x = 0 , int y = 0){
	real = x;
	comp = y;
    }

    void display() const;

    friend cmplx add_c(cmplx, cmplx);
};

inline void cmplx::display() const {
    cout << real   << " + "<< comp << 'i' <<'\n';
}

cmplx add_c(cmplx z1, cmplx z2){
	cmplx z3;
	z3.real = z1.real + z2.real;
	z3.comp = z1.comp + z2.comp;
    }
	    
int main(){
    cmplx z1(2,3);
    cmplx z2(4,5);
    

    add_c(z1,z2).display();

    //z3.display();
    
    cout <<'\n';
}
     

