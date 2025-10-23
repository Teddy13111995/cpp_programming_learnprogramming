#include<iostream>

using namespace std;

int main(){
    bool equal_res{false},not_equal_res{false};

    int num1{},num2{};

    cout<<boolalpha;

    cout<<"Enter two integers seperated by a space : ";
    cin>>num1>>num2;

    equal_res=(num1==num2);
    not_equal_res=(num1!=num2);

    cout<<"Are num1 and num2 equal? "<<equal_res<<endl;
    cout<<"Are num1 and num2 not equal? "<<not_equal_res<<endl;
    return 0;
}