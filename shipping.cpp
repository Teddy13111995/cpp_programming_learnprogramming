/*
Shipping cost calculator
Ask the user for package dimension in inches
length, width and height - these should be integers
All dimensions must be 10 inches or less or we cannot ship it
Base_cost $2.50
if package volume is greater than 100cubic inches there is a 10% surcharge
if package volume is greater than 500cubic inches there is a 25% surcharge
*/

#include<iostream>

using namespace std;

int main(){
    int l{},b{},h{};
    cout<<"enter the length, breadth and height of the package : ";
    cin>>l>>b>>h;
    if (l>10 || b>10 || h>10){
        cout<<"Sorry we cannot ship"<<endl;
    }else if(l<=0 ||b <=0 ||h<=0){
        cout<<"Please enter valid length, breadth and height"<<endl;
    }
    else{
        int volume{l*b*h};
        const double base_cost{2.5};
        double cost{0.0};
        if(volume>500)
            cost=base_cost+base_cost*0.25;
        else if(volume>100)
            cost=base_cost+base_cost*0.1;
        else
            cost=base_cost;
        cout<<"Your total is $"<<cost<<endl;
    }
    return 0;
}