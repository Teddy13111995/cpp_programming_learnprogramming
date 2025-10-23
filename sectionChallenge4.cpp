/*
A palindrome is a string that reads the same backwards and forwards

For the purpose of this assignment we will only consider alpha charachters and omit all other characters.

A common method to solve is to compare the string to its reverse and if they are equal it must be a palindrome,
but we will use a stack and a queue.

*/

#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    std::stack<char> stk;
    std::queue<char> q;

    for(char c:s){
        if(std::isalpha(c)){
            char upper=std::toupper(c);
            stk.push(upper);
            q.push(upper);
        }
    }
    while(!stk.empty()){
        if(stk.top()!=q.front())
         return false;
        stk.pop();
        q.pop();
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  <<std::setw(30) << std::right<< s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
