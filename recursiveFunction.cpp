#include<iostream>

using namespace std;
unsigned long long fibonacci(unsigned long long num);
//Fibonacci
/*
base case : F(0)=F(1)=1
use case : F(n)=F(n-1)+F(n-2)
*/
unsigned long long fibonacci(unsigned long long num){
    if(num<=1)
    return num;
    return fibonacci(num-1)+fibonacci(num-2);
}

//Factorial 
/*
base case F(0)=1
use case F(n)=n*F(n-1)
*/
unsigned long int factorial(unsigned int num){
    if (num==0)
    return 1;
    return num*factorial(num-1);
}
int main(){
    cout<<fibonacci(5)<<endl;
    cout<<fibonacci(30)<<endl;
    cout<<fibonacci(40)<<endl;
    cout<<endl;
    cout<<factorial(5)<<endl;
    cout<<factorial(30)<<endl;

    return 0;
}

