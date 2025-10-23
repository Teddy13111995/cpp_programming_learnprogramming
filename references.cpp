#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    int num{100};
    int &ref{num};
    
    cout<<num<<endl;
    cout<<ref<<endl;

    num=200;
    cout<<"--------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    ref=300;
    cout<<"--------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    cout<<"\n-------------------"<<endl;
    vector<string> stooges{"Larry","Moe","Curly"};
    for(auto str:stooges)//str is a copy of each vector element
        str="Funny";

    for(auto str:stooges){
        cout<<str<<endl;
    }

    cout<<"\n-----------------------"<<endl;
    for(auto &str:stooges)//str is a refernce to each vector element
        str="Funny";
    for(auto const &str:stooges)
        cout<<str<<endl;
    return 0;
}