/*
A palindrome is a string that reads the same backwards and forwards

For the purpose of this assignment we will only consider alpha charachters and omit all other characters.

A common method to solve is to compare the string to its reverse and if they are equal it must be a palindrome,
but we will use a deque
*/

#include<iostream>
#include<cctype>
#include<deque>

template<typename T>
void display(const std::deque<T> &d){
    std::cout<<"[";
    for(const auto &elem:d){
        std::cout<<elem<<" ";
    }
    std::cout<<"]"<<std::endl;
}

bool palindrome_checker(const std::string &str){
    std::deque<char> d;
    for(const char c:str){
        if(isalpha(c))
        d.push_back(std::tolower(c));
    }
    display(d);

    //bool is_palindrome = true;
    char c1{};
    char c2{};

    while(d.size()>1){
        c1=d.front();
        c2=d.back();
        if(c1!=c2)
        return false;
        d.pop_back();
        d.pop_front();
    }
    return true;

}
int main(){
    std::string pal_str_given{"A Santa at nasa"};
    std::cout<<"Enter a string: ";
    std::getline(std::cin,pal_str_given);
    if(palindrome_checker(pal_str_given)){
        std::cout<<"Palindrome"<<std::endl;
    }
    else
        std::cout<<"not a Palindrome"<<std::endl;

}
