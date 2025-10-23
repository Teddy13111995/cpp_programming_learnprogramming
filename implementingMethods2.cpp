#include<iostream>
#include"Account.h"

using namespace std;

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