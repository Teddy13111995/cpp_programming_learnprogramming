/*
Ask the the user to enter 3 integers 
Calculates the sum of the integers then calcluate the average of 3 integers
Display the 3 integers entered, their sum and average
*/

#include<iostream>

using namespace std;

int main(){
    int num1{0},num2{0},num3{0};

    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    int sum{0};
    sum=num1+num2+num3;

    double avg{0.0};
    avg=static_cast<double>(sum)/3;

    cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<avg<<endl;
    return 0;
}