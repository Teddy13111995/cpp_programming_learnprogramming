#include<iostream>
#include<iomanip>

void ruler(){
    std::cout<<"\n123456789012345678901234567890123456789011234567890"<<std::endl;
}

int main(){
    int num1{1234};
    double num2{1234.5678};
    std::string hello{"Hello"};

    //defaults
    std::cout<<"\n----Defaults----"<<std::endl;
    ruler();
    std::cout<<num1<<num2<<hello<<std::endl;
    
    //defaults -one per line
    std::cout<<"\n----Defaults - one per line----"<<std::endl;
    ruler();
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<hello<<std::endl;

    //set field width to 10
    //Note the default justification is right for num1 only
    std::cout<<"\n----width 10 for num1----"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<num1<<num2<<hello<<std::endl;

    //set field width to 10 for first 2 outputs
    //Note the default justification is right for both
    std::cout<<"\n----width 10 for num1 and num2----"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<num1<<std::setw(10)<<num2<<hello<<std::endl;

    //set field width to 10 for all 3
    //Note the default justification is right for all
    std::cout<<"\n----width 10 for all----"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<num1<<std::setw(10)<<num2<<std::setw(10)<<hello<<std::endl;

    //set field width to 10 for all 3 and left justify
    //Note the default justification is right for all
    std::cout<<"\n----width 10 for all and left justified----"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<std::left<<num1<<std::setw(10)<<std::left<<num2<<std::setw(10)<<std::left<<hello<<std::endl;

    //setfill to a dash
    //this is persistent
    //then repeat the previous display
    std::cout<<std::setfill('-');
    //set field width to 10 for all 3
    //Note the default justification is right for all
    std::cout<<"\n----width 10 for all and left justified and setfill to dash----"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<std::left<<num1<<std::setw(10)<<std::left<<num2<<std::setw(10)<<std::left<<hello<<std::endl;

    //set width to 10 for all, left justify all and vary the setfill character
    //set field width to 10 for all 3
    //Note the default justification is right for all
    std::cout<<"\n----width 10 for all and left justified and setfill varies----"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<std::left<<num1<<std::setfill('*')<<std::setw(10)<<std::left<<num2<<std::setfill('#')<<std::setw(10)<<hello<<std::setfill('-')<<std::endl;
    return 0;
}