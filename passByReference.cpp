#include<iostream>
#include<string>
#include<vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num){
    num=1000;
}
void pass_by_ref2(string &s){
    s="Changed";
}
void pass_by_ref3(vector<string> &v){
    v.clear();
}
void print_vector(const vector<string> &v){
    cout<<"Printing vector"<<endl;
    for(string s:v){
        cout<<s<<" ";
    }
    cout<<endl;
}

int main(){
    int num{10};
    int another_num{20};
    cout<<"num before calling pass by ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"num after calling pass by ref1: "<<num<<endl;

    cout<<"another_num before calling  pass by ref1: "<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"another num after calling pass by ref1: "<<another_num<<endl;

    string name{"Srijan"};
    cout<<"\n name before pass by ref2: "<<name<<endl;
    pass_by_ref2(name);
    cout<<"name after pass by ref2: "<<name<<endl;

    vector<string> stooges{"Larry","Moe","Curly"};
    cout<<"\n Stooges before calling pass by ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"Stooges after calling pass by ref3: ";
    print_vector(stooges);
    return 0;
}