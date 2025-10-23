#include<iostream>

using namespace std;

class Shallow{
    private:
    int *data;
    public:
    void set_data(int d){*data=d;}
    int get_data(){return *data;}
    //Constructor
    Shallow(int d);
    //Copy constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data=new int;
    *data=d;
}

Shallow::Shallow(const Shallow &source):data{source.data}{
    cout<<"Copy constructor - shallow copy"<<endl;
}

Shallow::~Shallow(){
    delete data;
    cout<<"destructor called"<<endl;
}

void display(Shallow s){
    cout<<s.get_data()<<endl;
}
int main(){
    Shallow s(10);
    display(s);
    Shallow s1{s};
    s1.set_data(1000);
    return 0;
}