#include<iostream>

using namespace std;

int main(){
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    cout<<"Enter the miles: ";
    cin>>miles;

    cout<<"Enter the gallons: ";
    cin>>gallons;
    if(gallons!=0){
        miles_per_gallons=static_cast<double> (miles)/gallons;
        cout<<"Result: "<<miles_per_gallons<<endl;
    }else{
        cerr<<"Sorry cant divide by zero"<<endl;
    }
    
    cout<<"Bye"<<endl;
    return 0;
}