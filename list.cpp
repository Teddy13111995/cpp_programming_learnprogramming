#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

class Person{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
    public:

    Person():name{"Unknown"},age{0}{}
    Person(std::string name,int age): name{name},age{age}{}

    bool operator<(const Person &rhs)const{
        return age<rhs.age;
    }

    bool operator==(const Person &rhs)const{
        return name==rhs.name && age==rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p){
    os<<p.name<<":"<<p.age;
    return os;
}

template<typename T>
void display(const std::list<T> &l){
    std::cout<<"[";
    for(auto const &elem:l)
    std::cout<<elem<<" ";
    std::cout<<"]"<<std::endl;
}

void test1(){
    std::cout<<"\nTest1=============================="<<std::endl;

    std::list<int> l1{1,2,3,4,5};
    display(l1);

    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);

    std::list<int> l3;
    l3={1,2,3,4,5,6,7,8,9,10};
    display(l3);

    std::list<int> l4(10,100);
    display(l4);
}

void test2(){
    std::cout<<"\nTest2=============================="<<std::endl;

    std::list<int> l1{1,2,3,4,5,6,7,8,9,10};

    display(l1);
    std::cout<<l1.size()<<std::endl;
    std::cout<<l1.front()<<std::endl;
    std::cout<<l1.back()<<std::endl;

    l1.clear();
    std::cout<<l1.size();
    display(l1);
}
void test3(){
    std::cout<<"\nTest3=============================="<<std::endl;

    std::list<int> l{1,2,3,4,5,6,7,8,9,10};
    display(l);

    l.resize(5);
    display(l);

    l.resize(10);
    display(l);

    std::list<Person> persons;
    persons.resize(5);
    display(persons);
}
void test4(){
    std::cout<<"\nTest4=============================="<<std::endl;

    std::list<int> l{1,2,3,4,5,6,7,8,9,10};
    display(l);

    auto it=std::find(l.begin(),l.end(),5);
    if(it!=l.end()){
        l.insert(it,100);
    }
    display(l);

    std::list<int> l2{1000,2000,3000};
    l.insert(it,l2.begin(),l2.end());
    display(l);

    std::advance(it,-4);//points to the 100
    std::cout<<*it<<std::endl;

    l.erase(it);
    display(l);
}
void test5(){
    std::cout<<"\nTest5=============================="<<std::endl;


    std::list<Person> stooges{
        {"Larry",18},
        {"Moe",21},
        {"Curly",24}
    };

    display(stooges);
    std::string name;
    int age{};
    std::cout<<"\nEnter the name of next stooge: ";
    getline(std::cin,name);
    std::cout<<"Enter their age: ";
    std::cin>>age;

    stooges.emplace_back(name,age);
    display(stooges);

    //insert frank before moe
    auto it=std::find(stooges.begin(),stooges.end(),Person{"Moe",21});

    if(it!=stooges.end()){
        stooges.emplace(it,"Frank",30);
    }
    display(stooges);
}

void test6(){
    std::cout<<"\nTest6=============================="<<std::endl;


    std::list<Person> stooges{
        {"Larry",18},
        {"Moe",21},
        {"Curly",24}
    };

    display(stooges);
    stooges.sort();
    display(stooges);
}
int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}