#include<iostream>

using namespace std;

int main(){

    //1 euro =1.17 USD --23/7/2025
    const double usd_per_eur{1.17};

    cout<<"Welcome to EUR to USD converter"<<endl;
    cout<<"Enter the value in EUR :";
    double eur{0.0};
    cin>>eur;
    double dollar{eur*usd_per_eur};
    cout<<"You get : $"<<dollar<<endl;
    return 0;
}