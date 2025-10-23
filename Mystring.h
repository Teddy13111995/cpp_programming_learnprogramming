#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{

      //friend functions for operatorFunctions
    friend bool operator==(const Mystring &lhs,const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs);
    //overloading insertion and extraction
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    private:
        char *str;  //pointer to char[] that holds a C-style string
    public:
      Mystring();//no args constructor
      Mystring(const char *s);//overloaded constructor
      Mystring(const Mystring &source);//copy constructor
      //deep copy for mystring_copyAssignment
      Mystring &operator=(const Mystring &rhs); //copy assignment
      //move assignment operator
      Mystring &operator=(Mystring &&rhs);
      ~Mystring();//destructor
      //getters
      void display()const;
      int get_length()const;
      const char *get_str() const;

      //operator methods
    //   Mystring operator-() const;//make lowercase
    //   Mystring operator+(const Mystring &rhs) const;//concatenate
    //   bool operator==(const Mystring &rhs) const;//comparision


};

#endif