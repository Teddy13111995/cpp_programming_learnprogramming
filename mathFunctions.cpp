#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double num{};

    cout<<"Enter a floating number: ";
    cin>>num;
    cout<<"The square root of the number is "<<sqrt(num)<<endl;
    cout<<"the cube root of the number is "<<cbrt(num)<<endl;
    cout<<"The sine of the number is "<<sin(num)<<endl;
    cout<<"The cosine of the number is "<<cos(num)<<endl;
    cout<<"the ceil of the number is "<<ceil(num)<<endl;
    cout<<"the floor of the number is "<<floor(num)<<endl;
    cout<<"the round of the number is "<<round(num)<<endl;

    double power{};
    cout<<"enter the power to raise the number to ";
    cin>>power;
    cout<<"The number raised to the power is "<<pow(num,power);
    return 0;
}