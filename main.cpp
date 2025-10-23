#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

class Test{
    private:
        int data;
    public:
        Test():data{0}{cout<<"Test Constructor ("<<data<<")"<<endl;}
        Test(int data):data{data}{cout<<"Test Constructor ("<<data<<")"<<endl;}
        int get_data()const{return data;}
        ~Test(){cout<<"Test Destructor ("<<data<<")"<<endl;}
};


int main() {
    // Test t1{1000};
    // Test *t2 = new Test{1000};

    // delete t2;

    // //using unique pointer
    // unique_ptr<Test> t3{new Test{100}};

    // unique_ptr<Test> t4=std::make_unique<Test>(1000);

    // unique_ptr<Test> t5;
    // //t5=t3;
    // t5=std::move(t3);
    // if(!t3)
    //     cout<<"t3 is nullptr"<<endl;

    std::unique_ptr<Account> a1=std::make_unique<Checking_Account>("Moe",5000);
    cout<<*a1<<endl;
    a1->deposit(5000);
    cout<<*a1<<endl;

    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<Checking_Account>("James",1000));
    accounts.push_back(make_unique<Savings_Account>("Billy",4000,5.2));
    accounts.push_back(make_unique<Trust_Account>("Bobby",5000,4.5));

    for (const auto &acc:accounts){
        cout<<*acc<<endl;
    }
    return 0;
}

