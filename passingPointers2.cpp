#include<iostream>
#include<string>
#include<vector>

using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x{100},y{200};
    cout<<"x and y before swap: "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"x and y after swap: "<<x<<" "<<y<<endl;
    return 0;
}