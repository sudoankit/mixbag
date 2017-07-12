#include <iostream>
using namespace std;

ostream& operator<<(ostream& s, int& n)
{
  s << '(' << n << ')' << '\n';
  return s;
}

int main(){
  int d = 9;
  std::cout << d << std::endl;




}
