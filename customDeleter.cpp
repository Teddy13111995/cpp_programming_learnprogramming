#include<iostream>
#include<memory>

class Test{
    private:
    int data;
    public:
    Test():data{0}{std::cout<<"\tTest Constructor ("<<data<<")"<<std::endl;}
    Test(int data):data{data}{std::cout<<"\tTest Constructor ("<<data<<")"<<std::endl;}
    ~Test(){std::cout<<"\tTest Destructor ("<<data<<")"<<std::endl;}
};

void my_deleter(Test *ptr){
    std::cout<<"\t using my custom function deleter"<<std::endl;
    delete ptr;
}

int main(){
    {
        //using a function
        std::shared_ptr<Test> ptr1{new Test{100},my_deleter};
    }

    std::cout<<"============================================"<<std::endl;
    {
        //using a lambda expression
        std::shared_ptr<Test> ptr2(new Test{1000},
        [](Test *ptr){std::cout<<"\t Using my custom lambda deleter"<<std::endl;
        delete ptr;
    });
    }
    return 0;
}