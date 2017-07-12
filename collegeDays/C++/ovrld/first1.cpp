#include <iostream>
using namespace std;
class Cmpx{
  private :
  double re;
  double im;
  public :

  Cmpx(double x = 0, double y = 0){
    re = x;
    im = y;

  }
  Cmpx& operator+=(Cmpx);
  Cmpx& operator-=(Cmpx);

  friend Cmpx operator*(Cmpx,Cmpx);
  friend ostream& operator<<(ostream&,Cmpx);
  friend istream& operator>>(istream&,Cmpx);

};

Cmpx operator+(Cmpx);
Cmpx operator-(Cmpx);
Cmpx operator+(Cmpx,Cmpx);
Cmpx operator-(Cmpx,Cmpx);


inline Cmpx operator+(Cmpx z){
  return z;
}

inline Cmpx operator-(Cmpx z){
  return 0-z;
}

inline Cmpx& Cmpx::operator+=(Cmpx z){
  re += z.re; im += z.im;
  return *this;
}

inline Cmpx& Cmpx::operator-=(Cmpx z){
  re -= z.re; im -= z.im;
  return *this;
}

inline Cmpx operator+(Cmpx a, Cmpx b){
  return a += b;
}

inline Cmpx operator-(Cmpx a, Cmpx b){
  return a -= b;
}

inline Cmpx operator*(Cmpx a, Cmpx b){
  return Cmpx(a.re*b.re - a.im*b.im, a.re*b.im + a.im*b.re);
}

ostream& operator<<(ostream& s, Cmpx z){
  s << "(" << z.re << ", " << z.im << ")";
  return s;
}

istream& operator>>(istream& s, Cmpx z){
  s >> z.re >> z.im;
  return s;
}

int main(){
 Cmpx a(1,1);
 Cmpx b = a;
 Cmpx c = a + b;
 c -= b;
 std::cout << c << std::endl;
 c = - b;
 std::cout << -c + a*b << std::endl;
}
