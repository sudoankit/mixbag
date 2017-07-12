#include<iostream>
#define MAX 5
using namespace std;

class array {
private:
    int a[MAX];
public:

    void insert(int pos,int num);
    void del(int pos);
    void reverse();
    void display();
    void search(int num);
};

void array::insert(int pos,int num){
    int i;
    for( i = MAX-1 ; i >= pos ; i--)                //shifting to the right
	a[i] = a[i-1];
    a[i] = num;                                    //putting the value in the required position
}
void array::del(int pos){
    int i;
    for( i = pos; i < MAX ; i++)
	a[i-1] = a[i];                                     // shifting  to the left.
    a[i-1] = 0;                                                 //deleted element means 0
}

void array::reverse(){
   
    for(int i = 0 ; i < MAX/2 ; i++){                         //swap and store in temp var.
	int temp = a[i];
	a[i] = a[MAX-i-1];                                      //penultimate element
        a[MAX] = temp;
    }
}

void array::search(int num){
    
    
    for(int i = 0 ; i < MAX ; i++){
	if(a[i] == num){
	    cout << "The entry has benn found at pos " << (i+1) << '\n';
	}
	else if(i == MAX){
	    cout <<"NOT FOUND!";
	}
    }
}
    
void array::display(){
    for(int i ; i < MAX ; i++)
	cout << " " << a[i]; 
}

int main(){
    array a;

    for(int i = 0 ; i < MAX ; i++){
	a.insert(i,i+i);
    }
    
    a.display();

    for(int i =0 ; i < MAX ; i ++){
	a.del(i);
    }
    
    a.display();

    for(int i = 0; i <MAX ; i++){
	a.insert(i,i*i*i);
    }
    
    a.display();
    a.reverse();
    a.display();

    a.search(8);
    a.search(1);

}




    

    


