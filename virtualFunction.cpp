#include<iostream>

class Account{
    public:
        virtual void withdraw(double amount){std::cout<<"In account withdraw"<<std::endl;}
};

class Savings:public Account{
    public:
        virtual void  withdraw(double amount){std::cout<<"In savings withdraw"<<std::endl;}
};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){std::cout<<"In checking withdraw"<<std::endl;}
};

class Trust: public Account{
    public:
        virtual void withdraw(double amount){std::cout<<"In Trust withdraw"<<std::endl;}
};

int main(){

    Account *p1=new Account;
    Account *p2=new Savings;
    Account *p3=new Checking;
    Account *p4=new Trust;

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}