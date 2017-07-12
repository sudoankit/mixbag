#include<iostream>
#include<string>
using namespace std;

class student{
private :
    string name;
    int roll;
    string branch;
public :
    student(string n,string b,int r){
	name = n;
	branch = b;
	roll = r;
    }
    void draw() const {
	cout <<'(' <<name << ',' << branch << ',' << roll << ") \n";
    }
};

int main(){
     student s("alex","cse",114004);
     s.draw();
}
