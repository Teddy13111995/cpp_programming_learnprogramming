#include<iostream>

using namespace std;

int main(){
    cout<<"enter a number : ";
    int num{};
    cin>>num;
    if (num>=10){
        cout<<num<<" is greater than or equal to 10"<<endl;
    }
    if (num<=100){
        cout<<num<<" is less than or equal to 100"<<endl;
    }
    if (num>=10 && num <=100){
        cout<<num<<" is greater than or equal to 10 and less than eual to 100"<<endl;
    }
    if (num==10 || num ==100){
        cout<<num<<" is equal to 10 or equal to 100"<<endl;
    }
    return 0;
}