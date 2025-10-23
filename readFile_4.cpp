#include<iostream>
#include<fstream>

int main(){
    std::ifstream in_file;
    char c;
    in_file.open("poem.txt");

    if(!in_file){
        std::cerr<<"File not found"<<std::endl;
        return 1;
    }

    while (in_file.get(c))
    {
        std::cout<<c;
    }
    
    in_file.close();
    return 0;
}