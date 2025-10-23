#include<iostream>

using namespace std;

int main(){
    int num1{200},num2{100};
    int result{0};

    result=num1+num2;
    cout<<num1<<" + "<<num2<<" = "<<result<<endl;

    result=num1-num2;
    cout<<num1<<" - "<<num2<<" = "<<result<<endl;

    result=num1*num2;
    cout<<num1<<" * "<<num2<<" = "<<result<<endl;

    result=num1/num2;
    cout<<num1<<" / "<<num2<<" = "<<result<<endl;

    result=num1%num2;
    cout<<num1<<" % "<<num2<<" = "<<result<<endl;

    cout<<5/10<<endl;
    cout<<5.0/10.0<<endl;
    return 0;
}