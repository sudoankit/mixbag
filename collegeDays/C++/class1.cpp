#include<iostream>
using namespace std;

class pt2d{
private :
    double x;
    double y;

public:

    pt2d(double r,double s){
	x = r; y = s;
    }

    void move(pt2d);
    void move(double,double);
    void draw() const;
};


inline void pt2d::move(double r, double s){
    x = r;
    y = s;
};

inline void pt2d::move(pt2d p){
    x = p.x;
    y = p.y;
};

inline void pt2d::draw() const {
    cout << "(" << x << "," << y << ")"<<'\n';
}


int main(){
    pt2d a(0,0);
    pt2d b(4.3,5);
    pt2d c(561,0);

    a.draw();
    a.move(96,69);
    b.move(c);
    c.draw();
    a.draw();
}




