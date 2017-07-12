#include <iostream>
using namespace std;
class complex {
public:
double re, im;
};
int main()
{
complex x, y;
x.re = 4.0;
x.im = 5.0;
y = x;
x.re = 5.0;
cout << y.re << endl;
return 0;
}
