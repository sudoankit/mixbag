#include<iostream>

using namespace std;

class T {
private:
    int x;
    int y;
public:
    friend int sum(T);
    void set_xy(int p,int q){
	x = p;
	y = q;
}
};

    int sum(T p){
	int T::* px = & T::x;
	int T::* py = & T::y;
        T *pt = &p;
	int S = p.*px + pt->*py;
	return S;
    }

    int main(){
	T n;
	void (T::*pf)(int,int) = & T::set_xy;
	(n.*pf)(33,36);
	cout << "The value is " << sum(n) <<'\n';
    }

	
   
	
