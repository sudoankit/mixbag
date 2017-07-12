#include<iostream>
#include<string>

using namespace std;

class account_bank {

private :
 string name;
 int acc_number;
 string type;
 float balance;
public:
 account_bank(string name_usr,int acc_number_usr ,string type_usr,int balance_usr){
    name = name_usr;
    acc_number = acc_number_usr;
    type = type_usr;
    balance = balance_usr;
 }

 void deposit(int deposits){
    balance = balance + deposits;
 }

 void display() const {
    cout << "Name :" << name<<'\n';
    cout << "Acc Number :" <<acc_number << '\n';
    cout << "Type :" << type<<'\n';
    cout << "Balance :" << balance<<'\n';
     cout << "Thank you! Visit again :) " << '\n';
 }

  void withdrawal(int takes){
  cout << "Balance : " << balance <<'\n';
    if(balance  >= takes)
        balance = balance - takes;
    else
        cout << "Insufficient Balance " << '\n';
 }

};

int main(){
account_bank b1("Inon",2345435,"SAVINGS",23423);
b1.display();
cout << "--------------------------------"<<'\n';
b1.deposit(20000);

b1.withdrawal(23421);
cout << "--------------------------------"<<'\n';
b1.display();








}
