#include<iostream>
#include"Mystring.h"

using namespace std;

int main(){
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout<<"enter the third stooge first name: ";
    cin>>curly;

    cout<<"the three stooges are "<<larry<<" "<<moe<<" "<<curly<<endl;

    cout<<"\nEnter the three stooges names seperated by a space: ";
    cin>>larry>>moe>>curly;

    cout<<"the three stooges are "<<larry<<" "<<moe<<" "<<curly<<endl;
    return 0;
}