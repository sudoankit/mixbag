#include<iostream>
using namespace std;

class C {
    int x;
    int y;
public :
    C(double a = 0 ,double b = 0){
	x = a;
	y = b;
    }

    void display() const;

    friend C add_c(C z1,C z2);
};

inline void C::display() const {
    cout << this->x << " + " << this->y << 'i' <<'\n';
}

C add_c(C z1,C z2){
	C z3;
	z3.x = z1.x + z2.x;
	z3.y = z1.y + z2.y;
	return z3;
    }

int main(){
    C z1(2,3),z2(4,5);
    add_c(z1,z2).display();
}
