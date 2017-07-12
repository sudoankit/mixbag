#include<iostream>
using namespace std;

class pt2d {
private :
    double x;
    double y;
public  :
    pt2d(double a = 0, double b = 0){
	x = a;
	y = b;
    }
    void move(pt2d);
    void draw() const;
};

inline void pt2d::move(pt2d p){
    x =  p.x;
   y = p.y;
}
inline void pt2d::draw() const {
    cout << '(' << x << ',' << y << ')' << '\n';
}

int main(){
    pt2d p(1);
    pt2d p2(2.4,45);
    pt2d p3(0);

    p.draw();
    p2.draw();
    p3.draw();
    p3.move(p2);
    p3.draw();
}



    
