#include<iostream>
#include<fstream>
using namespace std;

int main(){
char data[100];
ofstream outfile;
outfile.open("files1.txt");

cout << "Enter name : " <<'\n';
cin.getline(data,100);

outfile << data << endl;
outfile.close();

ifstream infile;
infile.open("files1.txt");

cout << "Whatever your name was : " << '\n';
infile >> data;

cout << data << endl;

infile.close();
return 0;

int const *p
int *const p
}
