#include<iostream>
#include<fstream>
#include<string>

int main(){
    std::ifstream in_file{"poem.txt"};
    std::ofstream out_file{"poem_out.txt"};
    if (!in_file){
        std::cerr<<"File not found"<<std::endl;
    }
    if(!out_file){
        std::cerr<<"File not created"<<std::endl;
        return 1;
    }
    // std::string line{};
    char c;
    while (in_file.get(c))
    {
        out_file.put(c);
    }
    in_file.close();
    out_file.close();
    return 0;
}