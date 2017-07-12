#include<iostream>
using namespace std;

class comn {
private:
    int x;
    int y;

public:
    comn(int p = 0 , int q = 0){
	x = p;
	y = q;
    }

    void draw() const;
};

inline void comn::draw() const {
	cout << '(' << x <<',' << y << ") \n";
    }



int main(){

    comn a(1);
    a.draw(); 
    comn b(45,561);
    b.draw();
    comn d = b;
    d.draw();
    a = d;
    a.draw();
  
}
