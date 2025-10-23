#include<iostream>
#include<vector>

class Shape{        //Abstract Base Class
    private:
        //attributes common to all shape
    public:
        virtual void draw()=0;//pure virtual function
        virtual void rotate()=0;//pure virtual function
        virtual ~Shape(){}
};

class Open_Shape: public Shape{//Abstract class
    public:
        virtual ~Open_Shape(){}
};

class Closed_Shape: public Shape{//Abstract class
    public:
        virtual ~Closed_Shape(){}
};

class Line:public Open_Shape{//Concrete class
    virtual void draw() override{
        std::cout<<"Drawing a line"<<std::endl;
    }    
    virtual void rotate() override{
        std::cout<<"Rotating a line"<<std::endl;
    }
    virtual ~Line(){}
};

class Circle:public Closed_Shape{//Concrete class
    public:
        virtual void draw() override{
            std::cout<<"Drawing a Circle"<<std::endl;
        }    
        virtual void rotate() override{
            std::cout<<"Rotating a circle"<<std::endl;
        }
        virtual ~Circle(){}
};

class Square:public Closed_Shape{//concrete class
    public:
        virtual void draw() override{
            std::cout<<"Drawing a square"<<std::endl;
        }    
        virtual void rotate() override{
            std::cout<<"Rotating a square"<<std::endl;
        }
        virtual ~Square(){}
};

void screen_refresh(const std::vector<Shape *> &shapes){
    std::cout<<"Refreshing"<<std::endl;
    for(const auto p:shapes)
        p->draw();
}

int main(){
    //Shape s;//Compiler error
    //Open_Shape *op =new Open_Shape();//compiler error

    Circle c;
    c.draw();
    

    Shape *s1=new Circle();
    Shape *s2=new Line();
    Shape *s3=new Square();

    std::vector<Shape *> shapes{s1,s2,s3};
    screen_refresh(shapes);
    delete s1;
    delete s2;
    delete s3;
    return 0;
}