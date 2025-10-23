#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num){
    cout<<"printing integer: "<<num<<endl;
}
void print(double num){
    cout<<"printing double: "<<num<<endl;
}
void print(string name){
    cout<<"printing string: "<<name<<endl;
}
void print(string first_name, string last_name){
    cout<<"printing full name: "<<first_name<<" "<<last_name<<endl;
}
void print(vector<string> vec){
    cout<<"Printing vector of strings: ";
    for(string v:vec){
        cout<<v<<" ";
    }
    cout<<endl;
}
int main(){
    print(100);
    print(100.1122);
    print("Srijan");
    print("Srijan","Gupta");
    print({"Larry","Moe","Curly"});
    return 0;
}