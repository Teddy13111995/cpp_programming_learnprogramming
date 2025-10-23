#include<iostream>

using namespace std;

int main(){
    int num{};
    cout<<"Enter a positive integer : ";
    cin>>num;
    while(num>0){
        cout<<num<<endl;
        --num;
    }
    cout<<"Blastoff"<<endl;

    cout<<"enter a postitive integer to count up to : ";
    cin>>num;
    int i{1};
    while(num>=i){
        cout<<i<<endl;
        i++;
    }


    int number{};
    cout<<"enter an integer less than 100: ";
    cin>>number;
    while(number>=100){
        cout<<"enter an integer less than 100: ";
        cin>>number;
    }
    cout<<"Thanks"<<endl;

    bool done{false};
    int num1{0};

    while(!done){
        cout<<"enter an integer between 1 and 5: ";
        cin>>num1;
        if(num1<=1||num1>=5){
            cout<<"out of range try again"<<endl;
        }else{
            cout<<"Thanks"<<endl;
            done=true;
        }
    }
    return 0;
}