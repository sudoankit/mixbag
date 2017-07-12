#include<iostream>
#include<cmath>
using namespace std;

class pt2d{
private:
    double x;
    double y;

public:

    pt2d(double r,double s){
	x = r;
	y = s;
    }

    void move(double,double);
    void move(pt2d);
    void draw() const;
    friend double norm(pt2d);
};

inline void pt2d::move(double r,double s){
    x = r;
    y = s;
}

inline void pt2d::move(pt2d p){
    x = p.x;
    y = p.y;
}

inline void pt2d::draw() const{
    cout << '(' << x << ',' << y << ") \n";
}

inline double norm(pt2d p){
    return sqrt(p.x*p.x + p.y*p.y);
}


int main(){
    pt2d a(0,0);
    pt2d b(-34,23);
    pt2d c(-561,-34);

    a.draw();
    a.move(1,2);
    a.draw();
    b.draw();
    b.move(c);
    b.draw();
}

    
   
