#include<iostream>

using namespace std;

int main(){
    int *int_ptr{nullptr};
    int_ptr=new int;
    
    cout<<"Enter a number: ";
    cin>>*int_ptr;

    cout<<"Your number is: "<<*int_ptr<<" and its address is: "<<int_ptr<<endl;
    delete int_ptr;
    cout<<"Your number is: "<<*int_ptr<<" and its address is: "<<int_ptr<<endl;
    
    size_t size{0};
    double *temp_ptr{nullptr};
    cout<<"How many temps? ";
    cin>>size;
    temp_ptr=new double[size];
    delete[] temp_ptr;
    cout<<endl;

    return 0;
}