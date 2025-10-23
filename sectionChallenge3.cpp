/*
This challenge has two parts.
We will be reading words from a text file provided. The text file is named 'words.txt' and
contains the first few paragraphs from the book ' the wonderful wizard of oz'

Part 1:
 For part1 of this challenge you are to display each unique word in the file and 
 immediately following each word displays the number of times it occur in the text file

 the words should be displayed in ascending order.

Part 2:
Display each unique word in the file and immediately following each word display the line numbers
in which that word appears.


*/


#include<iostream>
#include<map>
#include<fstream>
#include<set>
#include<sstream>


void part1(){
    std::map<std::string,int> word_count{};
    std::ifstream in_file("words.txt");
    if(!in_file){
        std::cerr<<"Cannot open file"<<std::endl;
        
    }

    std::string word;
    while(in_file>>word){
        ++word_count[word];
    }
    for(const auto &pair:word_count){
        std::cout<<pair.first<<" : "<<pair.second<<std::endl;
    }
}
void part2(){
std::map<std::string,std::set<int>> word_lines{};
    std::ifstream in_file("words.txt");
    if(!in_file){
        std::cerr<<"Cannot open file"<<std::endl;
    }

    std::string line;
    int line_num=0;
    while(std::getline(in_file,line)){
        ++line_num;
        std::istringstream iss(line);
        std::string word;
        while(iss>>word)
            word_lines[word].insert(line_num);
    }
    for(const auto &pair:word_lines){
        std::cout << pair.first << " : ";
        for (int num : pair.second)
            std::cout << num << " ";
        std::cout << std::endl;
    }
}
int main(){
    part1();
    
    part2();
    
    return 0;
}