#include<iostream>

class Account{
    public:
        virtual void withdraw(double amount){std::cout<<"In account withdraw"<<std::endl;}
        virtual ~Account(){std::cout<<"Account destructor"<<std::endl;}
};

class Savings:public Account{
    public:
        virtual void  withdraw(double amount){std::cout<<"In savings withdraw"<<std::endl;}
        ~Savings(){std::cout<<"Savings destructor"<<std::endl;}
};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){std::cout<<"In checking withdraw"<<std::endl;}
        ~Checking(){std::cout<<"Checking destructor"<<std::endl;}
};

class Trust: public Account{
    public:
        virtual void withdraw(double amount){std::cout<<"In Trust withdraw"<<std::endl;}
        ~Trust(){std::cout<<"Trust destructor"<<std::endl;}
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main(){
    Account a;
    Account &ref=a;
    ref.withdraw(1000);

    Trust t;
    Account &ref1=t;
    ref1.withdraw(1000);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1,1000);
    do_withdraw(a2,1000);
    do_withdraw(a3,1000);
    do_withdraw(a4,1000);

    return 0;
}