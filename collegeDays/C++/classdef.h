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
