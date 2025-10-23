#include<iostream>
#include<iomanip>

int main(){
    int num{255};
    //displaying using different bases
    std::cout<<"\n----------------------------------------------"<<std::endl;
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl;

    //showing base prefix for hex and oct
    std::cout<<"\n----------------------------------------------"<<std::endl;
    std::cout<<std::showbase;
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl;

    //displaying hex value in uppercase
    std::cout<<"\n----------------------------------------------"<<std::endl;
    std::cout<<std::showbase<<std::uppercase;
    std::cout<<std::hex<<num<<std::endl;

    //displaying the positive sign only for base 10
    std::cout<<"\n----------------------------------------------"<<std::endl;
    std::cout<<std::showpos;
    std::cout<<std::dec<<num<<std::endl;

    //displaying without positive sign
    std::cout<<"\n----------------------------------------------"<<std::endl;
    std::cout<<std::noshowpos;
    std::cout<<std::dec<<num<<std::endl;

    //Set using self method
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    //Reset to defaults
    std::cout<<std::resetiosflags(std::ios::basefield);
    std::cout<<std::resetiosflags(std::ios::showbase);
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<std::resetiosflags(std::ios::uppercase);

    std::cout<<"\n----------------------------------------------"<<std::endl;
    std::cout<<"Enter an integer: ";
    std::cin>>num;

    std::cout<<"Decimal default: "<<num<<std::endl;

    std::cout<<"Hexadecimal: "<<std::hex<<num<<std::endl;
    std::cout<<"Hexadecimal: "<<std::hex<<std::uppercase<<num<<std::endl;
    std::cout<<"Hexadecimal: "<<std::hex<<num<<std::endl;
    std::cout<<"Hexadecimal: "<<std::hex<<std::nouppercase<<num<<std::endl;

    std::cout<<"Octal: "<<std::oct<<num<<std::endl;
    std::cout<<"Hexadecimal: "<<std::hex<<std::showbase<<num<<std::endl;
    std::cout<<"Octal: "<<std::hex<<num<<std::endl;
    return 0;
}