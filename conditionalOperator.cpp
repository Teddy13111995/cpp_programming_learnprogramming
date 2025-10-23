#include<iostream>

using namespace std;

int main(){

    int num{};
    cout<<"Enter an integer : ";
    cin>>num;
    cout<<num <<" is "<<((num%2==0)?"even":"odd")<<endl;
    
    int num1{},num2{};
    cout<<"Enter two integers seperated by space : ";
    cin>>num1>>num2;
    cout<<((num1==num2)?" both are eaual":(num1>num2)?"num1 is greater than num2":"num2 is greater than num1")<<endl;
    return 0;
}