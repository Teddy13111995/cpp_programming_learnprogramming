#include<iostream>

using namespace std;

class Base{
    //Note: Friends of Base have access to all
    public:
    int a{0};
    void display(){cout<<a<<", "<<b<<", "<<c<<endl;}//member methods have access to all
    protected:
    int b{0};
    private:
    int c{0};
};

class Derived:public Base{
    //Note: friends of derived have access to only what Derived has access to

    //a will be public
    //b will be protected
    //no access to c
    public:
    void access_base_members(){
        a=100;//ok
        b=200;//ok
        //c=300;//compiler error
    }
};



int main(){
    cout<<"=====Base member access from base objects=========="<<endl;
    Base base;
    base.a=100;//ok
    // base.b=200;//compiler error
    // base.c=300;//compiler error
    cout<<"=====Base member access from derived objects==========="<<endl;
    Derived d;
    d.a=100;//ok
    // d.b=200;//compiler error
    // d.c=300;//compiler error
    return 0;
}