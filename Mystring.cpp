#include<cstring>
#include<iostream>
#include "Mystring.h"

//No args constructor
Mystring::Mystring():str{nullptr}{
    str=new char[1];
    *str='\0';
}
//overloaded constructor
Mystring::Mystring(const char *s)
  :str{nullptr}{
    if(s==nullptr){
        str=new char[1];
        *str='\0';
    }else{
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}{
    str=new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

//destructor
Mystring::~Mystring(){
    //std::cout<<"Destructor called for "<<*str<<std::endl;
    delete [] str;
}
//getters
void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
}
int Mystring::get_length()const{
    return std::strlen(str);
}
const char *Mystring::get_str()const{return str;}

//copyAssignment for myString_copyAssignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy assignment"<<std::endl;
    if(this==&rhs){
        return *this;
    }
    delete [] str;
    str=new char[std::strlen(rhs.str)+1];
    std::strcpy(str,rhs.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"move assignment"<<std::endl;
        if(this==&rhs)
            return *this;
        delete [] str;
        str=rhs.str;
        rhs.str=nullptr;
        return *this;
      }

// //operator methods
// //equality
// bool Mystring::operator==(const Mystring &rhs)const{
//     if(std::strcmp(str,rhs.str)==0)
//         return true;
//     return false;
// }
// //make lowercase
// Mystring Mystring::operator-()const{
//     char *buff;
//     buff=new char[std::strlen(str)+1];
//     std::strcpy(buff,str);
//     for(int i{0};i<std::strlen(str);i++){
//         buff[i]=std::tolower(buff[i]);
//     }
//     Mystring temp{buff};
//     delete [] buff;
//     return temp;
// }

// //concatenate
// Mystring Mystring::operator+(const Mystring &rhs)const{
//     char *buff=new char[std::strlen(str)+std::strlen(rhs.str)+1];
//     std::strcpy(buff,str);
//     std::strcat(buff,rhs.str);
//     Mystring temp{buff};
//     delete [] buff;
//     return temp;
// }


      //friend functions for operatorFunctions

bool operator==(const Mystring &lhs,const Mystring &rhs){
    std::cout<<"friend method"<<std::endl;
    return (std::strcmp(lhs.str,rhs.str)==0);
}

Mystring operator-(const Mystring &obj){
    std::cout<<"friend method"<<std::endl;
    char *buff=new char[std::strlen(obj.str)+1];
    std::strcpy(buff,obj.str);
    for(int i{0};i<std::strlen(buff);i++)
        buff[i]=std::tolower(buff[i]);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs,const Mystring &rhs){
    std::cout<<"friend method"<<std::endl;
    char *buff=new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//overloading insertion and extraction
std::ostream &operator<<(std::ostream &os, const Mystring &obj){
    os<<obj.str;
    return os;
}

std::istream &operator>>(std::istream &is, Mystring &obj){
    char *buff=new char[1000];
    is>>buff;
    obj=Mystring{buff};
    delete [] buff;
    return is;
}