//array data structure 


#include<iostream>
#define M 5
using namespace std;

class array {
private :
    double f[M];
    
public :

    array(double f[]){                      //constructor
	for(size_t i; i < M ; i++){
	    cin >> f[i];
	}
	
	void draw() const;
	void insert(int pos,int key);
	void del(int pos);

     };

    inline void array::draw() const {
	for(size_t i; i < M;i++ ){
	    cout << f[i] << '\n';
	    
	}
    }

    inline void array::insert( int pos, int key) {
	cin << pos << key ;

	for(size_t i = M-1; i >= pos ; i--)
	    f[i] = f[i-1];

	f[i] = key;
    }


    inline void array::del(int pos){
	cin << pos;

	for(size_t i = pos; i < N ; i++)
	    f[i - 1] = f[i];
	f[i] = 0;

    }

       
    int main(){
	array(b[]);
	b.draw();

	b.insert(2,12345);
	b.draw();
	
	b.del(2);
        b.draw();
    }
	    
	    
	    
	

    
	    
    
