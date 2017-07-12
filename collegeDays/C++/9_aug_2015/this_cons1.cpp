#include<iostream>
using namespace std;

class brock {
private:
    int x;
    int y;
public :

    brock(int r = 0 ,int s = 0 ){
	x = r;
	y = s;
    }

    void move(int,int);

    void draw() const;

};

// this pointer for a const member function has of type const X*const.
inline void brock::move(int r,int s){
    this->x = r;    // this pointer is of type X* const
    this->y = s;    
}

inline void brock::draw() const{
    cout <<'(' <<this->x << ',' << this->y <<") \n";
    
}


int main(){
    brock a(1);
    brock b(0,6);
    brock c(34,5);

    a.draw();
    b.draw();
    b.move(4,5);
    b.draw();
    //lol_lol_lol_badass code 

    // hahhahhaa

}

    
