#include<iostream>

using namespace std;

class Move{
    private:
    int *data;
    public:
    void set_data_value(int d){*data=d;}
    int get_data_value(){return *data;}
    //Constructor
    Move(int d);
    //Copy constructor
    Move(const Move &source);
    //Move constructor
    Move(Move &&source)noexcept;
    //Destructor
    ~Move();
};

Move::Move(int d){
    data=new int;
    *data=d;
    cout<<"Constructor called for "<<d<<endl;
}

Move::Move(const Move &source):Move{*source.data}{
    cout<<"copy constructor called for "<<*data<<endl;
}

Move::Move(Move &&source) noexcept:data{source.data}{
    source.data=nullptr;
    cout<<"Move constructor - moving resource: "<<*data<<endl;
}

Move::~Move(){
    if(data!=nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
}

int main(){
    vector<Move> vec;
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));
    vec.push_back(Move(90));
    return 0;
}