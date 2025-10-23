#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> // for std::iota


//for_each - Non-modyfying sequence operation
//Displays each element of nums
void test1(){
    std::cout<<"\nTest1================"<<std::endl;

    std::vector<int> nums{10,20,30,40,50};
    std::for_each(nums.begin(),nums.end(),[](int num){std::cout<<num<<" ";});
}

//is_permutation - Non modifying sequence operation
//test whether two triangles are euivalent
void test2(){
    std::cout<<"\nTest2================"<<std::endl;

    struct Point{
        int x;
        int y;
    };
    Point pt1{1,2};
    Point pt2{4,3};
    Point pt3{3,5};
    Point pt4{3,1};

    std::vector<Point> tr1{pt1,pt2,pt3};
    std::vector<Point> tr2{pt2,pt1,pt3};
    std::vector<Point> tr3{pt1,pt2,pt4};

    if(std::is_permutation(tr1.begin(),tr1.end(),tr2.begin(),[](Point lhs, Point rhs){
        return lhs.x==rhs.x && lhs.y==rhs.y;
    }))
        std::cout<<"Tr1 and Tr2 are equivalent"<<std::endl;
    else
    std::cout<<"Tr1 and Tr2 are not equivalent"<<std::endl;

    if(std::is_permutation(tr1.begin(),tr1.end(),tr3.begin(),[](Point lhs, Point rhs){
        return lhs.x==rhs.x && lhs.y==rhs.y;
    }))
        std::cout<<"Tr1 and Tr3 are equivalent"<<std::endl;
    else
    std::cout<<"Tr1 and Tr3 are not equivalent"<<std::endl;
}

//transform - modifying sequence operation
void test3(){
    std::cout<<"\nTest3================"<<std::endl;

    std::vector<int> test_scores{93,88,75,68,65};
    int bonus_points{5};

    std::transform(test_scores.begin(),test_scores.end(),test_scores.begin(),[bonus_points](int score){return score+=bonus_points;});

    for(int score:test_scores)
    std::cout<<score<<" ";

}

//remove_if - modifying sequence operation
void test4(){
    std::cout<<"\nTest4================"<<std::endl;

    std::vector<int> nums{1,2,3,4,5};

    nums.erase(std::remove_if(nums.begin(),nums.end(),[](int num){return num%2==0;}),nums.end());

    for(int num:nums){
        std::cout<<num<<" ";
    }
}

class Person{
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
    private:
    std::string name;
    int age;
    public:
    Person(std::string name,int age):name{name},age{age}{}
    Person(const Person &p):name{p.name},age{p.age}{}
    ~Person()=default;
    void set_name(std::string name){this->name=name;}
    std::string get_name() const{return name;}
    int get_age()const{return age;}
    void set_age(int age){this->age=age;}
};

std::ostream &operator<<(std::ostream &os, const Person &rhs){
    os<<"[Person: "<<rhs.name<<":"<<rhs.age<<"]";
    return os;
}

//sort - sorting
void test5(){
    std::cout<<"\nTest5================"<<std::endl;

    Person p1("Larry",18);
    Person p2("Moe",23);
    Person p3("Curly",30);

    std::vector<Person> people{p1,p2,p3};

    std::sort(people.begin(),people.end(),[](Person lhs,Person rhs){
        return lhs.get_name()<rhs.get_name();
    });

    for(auto p:people){
        std::cout<<p<<std::endl;
    }

    std::sort(people.begin(),people.end(),[](Person lhs,Person rhs){
        return lhs.get_age()<rhs.get_age();
    });

    for(auto p:people){
        std::cout<<p<<std::endl;
    }
}

bool in_between(const std::vector<int> nums,int start_val, int end_val){
    bool res=false;
    res=std::all_of(nums.begin(),nums.end(),[start_val,end_val](int val){
        return val>=start_val &&val<=end_val;
    });
    return res;
}

void test6(){
    std::cout<<"\nTest6================"<<std::endl;

    std::cout<<std::boolalpha;

    std::vector<int> nums(10);

    std::iota(nums.begin(),nums.end(),1);

    for(int num:nums){
        std::cout<<num<<" ";
    }

    std::cout<<std::endl;

    std::cout<<in_between(nums,50,60)<<std::endl;
    std::cout<<in_between(nums,1,10)<<std::endl;
    std::cout<<in_between(nums,5,7)<<std::endl;
}

class Password_Validator1{
    private:
    char restricted_symbol{'$'};
    public:
    bool is_valid(std::string password){
        return std::all_of(password.begin(),password.end(),[this](char ch){
            return ch!=restricted_symbol;
        });
    }
};

class Password_Validator2{
    private:
    std::vector<char> restricted_symbol{'!','$','+'};
    public:
    bool is_valid(std::string password){
        return std::all_of(password.begin(),password.end(),[this](char ch){
            return std::none_of(restricted_symbol.begin(),restricted_symbol.end(),[ch](char symbol){
                return ch==symbol;
            });
        });
    }
};


void test7(){
    std::cout<<"\nTest7================"<<std::endl;

    std::string password{"hollywood1$"};
    Password_Validator1 pv1;
    if(pv1.is_valid(password)){
        std::cout<<"The pwd "<<password<<" is valid!"<<std::endl;
    }
    else{
        std::cout<<"The pwd "<<password<<" is not valid!"<<std::endl;
    }

    std::cout<<std::endl;

    password="Hollywood1";
    if(pv1.is_valid(password)){
        std::cout<<"The pwd "<<password<<" is valid!"<<std::endl;
    }
    else{
        std::cout<<"The pwd "<<password<<" is not valid!"<<std::endl;
    }

    std::cout<<std::endl;

    password="C++Rocks!";
    Password_Validator2 pv2;
    if(pv2.is_valid(password)){
        std::cout<<"The pwd "<<password<<" is valid!"<<std::endl;
    }
    else{
        std::cout<<"The pwd "<<password<<" is not valid!"<<std::endl;
    }

    std::cout<<std::endl;
    password="CplusplusRocks!";
    if(pv2.is_valid(password)){
        std::cout<<"The pwd "<<password<<" is valid!"<<std::endl;
    }
    else{
        std::cout<<"The pwd "<<password<<" is not valid!"<<std::endl;
    }

    std::cout<<std::endl;

    password="CplusplusRocks";
    if(pv2.is_valid(password)){
        std::cout<<"The pwd "<<password<<" is valid!"<<std::endl;
    }
    else{
        std::cout<<"The pwd "<<password<<" is not valid!"<<std::endl;
    }

    std::cout<<std::endl;

}

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    return 0;
}