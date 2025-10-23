#include<iostream>
#include<fstream>
#include<string>

int main(){
    std::ifstream in_file{"romeoandjuliet.txt"};
    std::ofstream out_file{"romeoandjuliet_out.txt"};
    if (!in_file){
        std::cerr<<"File not found"<<std::endl;
    }
    if(!out_file){
        std::cerr<<"File not created"<<std::endl;
        return 1;
    }
    std::string line{};
    int line_number{0};
    while (std::getline(in_file,line))
    {
        line_number++;
        out_file<<line_number<<line<<std::endl;
    }
    in_file.close();
    out_file.close();
    return 0;
}