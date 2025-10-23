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
    try{
        if(gallons==0)
            throw 0;
        miles_per_gallons=static_cast<double> (miles)/gallons;
        cout<<"Result: "<<miles_per_gallons<<endl;
    }
    catch(int &ex){
        cerr<<"Sorry, cant divide by zero"<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}