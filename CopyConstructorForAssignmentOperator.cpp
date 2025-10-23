#include<iostream>

using namespace std;

class Base{
    private:
    int value;
    public:
    Base():value{0}{cout<<"Base no args constructor"<<endl;}
    Base(int x):value{x}{cout<<"Base overloaded constructor"<<endl;}
    Base(const Base &source):value{source.value}{cout<<"Base copy constructor"<<endl;}
    Base &operator=(const Base &rhs){cout<<"Base operator="<<endl;
    if(this==&rhs)return *this;
    value=rhs.value;
    return *this;}

    ~Base(){cout<<"Base Destructor"<<endl;}
};

class Derived:public Base{
    private:int doubled_value;
    public:
    Derived():Base(),doubled_value{0}{cout<<"Derived no args constructor"<<endl;}
    Derived(int x):Base(x),doubled_value{x*2}{cout<<"Derived int constructor"<<endl;}
    Derived(const Derived &source):Base(source),doubled_value{source.doubled_value}{
        cout<<"Derived copy constructor"<<endl;
    }
    Derived &operator=(const Derived &rhs)
    {cout<<"Derived operator="<<endl;
    if(this==&rhs)
        return *this;
    Base::operator=(rhs);
    doubled_value=rhs.doubled_value;
    return *this;
    }

};

int main(){
    Base b{100};//overloaded constructor
    Base b1(b);//copy constructor
    b=b1;//copy assignment

    Derived d{100};//Overloaded constructor
    Derived d1{d};//Copy constructor
    d=d1;//Copy assignment

    return 0;
}