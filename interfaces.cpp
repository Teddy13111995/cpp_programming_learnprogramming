#include<iostream>

class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
    public:
    virtual void print(std::ostream &os) const=0;
};

std::ostream &operator<<(std::ostream &os,const I_Printable &obj){
    obj.print(os);
    return os;
}


class Account:public I_Printable{
    public:
        virtual void withdraw(double amount){
            std::cout<<"In account::withdraw"<<std::endl;
        }
        virtual void print(std::ostream &os)const override{
            os<<"Account Display";
        }
        virtual ~Account(){}
};


class Checking:public Account{
    public:
        virtual void withdraw(double amount){
            std::cout<<"In checking::withdraw"<<std::endl;
        }
        virtual void print(std::ostream &os)const override{
            os<<"Checking Display";
        }
        virtual ~Checking(){}
};

class Savings:public Account{
    public:
        virtual void withdraw(double amount){
            std::cout<<"In Savings::withdraw"<<std::endl;
        }
        virtual void print(std::ostream &os)const override{
            os<<"Savings Display";
        }
        virtual ~Savings(){}
};


class Trust:public Account{
    public:
        virtual void withdraw(double amount){
            std::cout<<"In Trust::withdraw"<<std::endl;
        }
        virtual void print(std::ostream &os)const override{
            os<<"Trust Display";
        }
        virtual ~Trust(){}
};


int main(){
    Account a;
    std::cout<<a<<std::endl;

    Checking c;
    std::cout<<c<<std::endl;

    Savings s;
    std::cout<<s<<std::endl;

    Trust t;
    std::cout<<t<<std::endl;

    Account *p1=new Account();
    std::cout<<*p1<<std::endl;

    Account *p2=new Trust();
    std::cout<<*p2<<std::endl;
    
    return 0;
}