#include<iostream>
#include<cmath>
using namespace std;

class pt3d {
private:
    int x;
    int y;
    int z;
public:
    pt3d(int s,int r,int q){
	x = s;
	y = r;
	z = q;
    }
    void move(int,int,int);
    void move(pt3d);
    void draw() const;

    friend double norm(pt3d);
};

inline void pt3d::move(int s,int r,int q){
    x = s;
    y = r;
    z = q;
}

inline void pt3d::move(pt3d p){
    p.x = x;
    p.y = y;
    p.z = z;
}

inline void pt3d::draw() const{
    cout << '(' << x << ',' << y <<',' << z <<") \n";
}

double norm(pt3d p){
    return sqrt(p.x*p.x + p.y*p.y + p.z*p.z);
}

int main(){
    pt3d a(1,2,3);
    pt3d b(4,5,6);
    pt3d c(8,9,0);
    

    double d =  norm(a);
    cout << d << '\n';
}
