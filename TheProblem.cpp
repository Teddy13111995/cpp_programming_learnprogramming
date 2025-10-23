#include<iostream>

class Base{
    public:
    void say_hello() const{
        std::cout<<"Hello I am base class object"<<std::endl;
    }
};

class Derived:public Base{
    public:
    void say_hello() const{
        std::cout<<"Hello I am derived class object"<<std::endl;
    }
};

void greetings(const Base &obj){
    std::cout<<"Greetings: ";
    obj.say_hello();
}

int main(){
    Base b;
    b.say_hello();


    Derived d;
    d.say_hello();

    Base *p=new Derived;
    greetings(*p);
    delete p;
    return 0;
}