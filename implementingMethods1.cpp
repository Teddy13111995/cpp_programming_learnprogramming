#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
    //attributes
    string name;
    double balance;
    public:
        //methods
        //declare inline
        void set_balance(double bal){
            balance=bal;
        }
        double get_balance(){return balance;}
        //methods will be declared outside the class declaration
        void set_name(string n);
        string get_name();
        bool deposit(double amount);
        bool withdraw(double amount);
};

void Account::set_name(string n){
    name=n;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    balance+=amount;
    return true;
}
bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance-=amount;
        return true;
    }else{
        return false;
    }
}

int main(){
    Account srijan_account;
    srijan_account.set_name("Srijan's Account");
    srijan_account.set_balance(1000.0);
    if(srijan_account.deposit(200.0))
        cout<<"Deposit OK"<<endl;
    else
        cout<<"deposit not allowed"<<endl;

    if(srijan_account.withdraw(500.0))
        cout<<"Withdraw OK"<<endl;
    else
        cout<<"Not sufficient fund"<<endl;

    return 0;
}