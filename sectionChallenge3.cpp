/*
Ask the user to enter a word
Process the Romeo and juliet file and determine how many total words there are
and how many times the word the user entered appears as a substring of a word in the play
*/
#include<iostream>
#include<fstream>

int main(){
    std::ifstream in_file;
    std::string word;
    int count{0},count_sub_string{0};
    std::string sub_string;
    std::cout<<"Enter the substring that you want to search: ";
    std::cin>>sub_string;
    in_file.open("romeoandjuliet.txt");

    if(!in_file){
        std::cerr<<"File not found"<<std::endl;
        return 1;
    }

    while (in_file>>word)
    {
        count++;
        if(word.find(sub_string)!=std::string::npos){
            count_sub_string++;
        }

    }
    std::cout<<count<<std::endl;
    std::cout<<count_sub_string<<std::endl;
    in_file.close();
    return 0;
}