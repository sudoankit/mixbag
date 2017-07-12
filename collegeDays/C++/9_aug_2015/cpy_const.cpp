#include<iostream>
#include<cmath>
using namespace std;

class pt2d{
    double x;
    double y;
public :
    pt2d(double r =0,double s =0){
	x = r; y = s;
    }

    void move(double,double);
    void move(pt2d);
    void draw() const;
    
    friend double x_access(pt2d);
    friend double y_access(pt2d);
	
    friend double norm(pt2d);
};

inline void pt2d::move(double r,double s){
    x= r; y = s;
}

inline void pt2d::move(pt2d p){
    p.x = x; p.y = y;
}

inline void pt2d::draw() const{
    cout << '(' << x << ',' << y << ") \n";
}

double norm(pt2d p){
    return sqrt(p.x * p.x + p.y * p.y);
}

double x_access(pt2d p){
    return p.x;
}

double y_access(pt2d p){
    return p.y;
}

class triangle {
    pt2d* vertices;
public :
    triangle( pt2d, pt2d, pt2d);
    ~triangle() {
	delete[] vertices;
    }

    void drawt() const{
	cout << '(' << x_access(vertices[0])  << ',' << y_access(vertices[0]) << ") \n";
     /*  cout << '(' << this->x << ',' << this->y << ") \n";
	 cout << '(' << this->x << ',' << this->y << ") \n"; */
	
    }
};

triangle::triangle(pt2d v0, pt2d v1, pt2d v2 ){
    vertices = new pt2d[3];
    vertices[0] = v0;
    vertices[1] = v1;
    vertices[2] = v2;
}

int main(){

    pt2d x(1.0,2.0);
    pt2d y(3.0);

    pt2d z;
    pt2d z2(7.0);

    triangle t1(x,z,y);
    triangle t2(x,y,z2);
    
    t1.drawt();
    t2.drawt();
}
