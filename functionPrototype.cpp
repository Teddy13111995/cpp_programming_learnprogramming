#include<iostream>

using namespace std;

const double pi{3.14159};

//function prototype
double calc_area_circle(double radius);
void area_circle();
void volume_cylinder();


int main(){
    area_circle();
    volume_cylinder();

    return 0;
}
double calc_area_circle(double radius){
    return pi*radius*radius;
}
void area_circle(){
    double radius{};
    cout<<"\nEnter the radius of the circle";
    cin>>radius;
    cout<<"The area of the circle is: "<<calc_area_circle(radius)<<endl;
}

void volume_cylinder(){
    double radius{},height{};
    cout<<"Enter radius and height of cylinder: ";
    cin>>radius>>height;
    cout<<"The volume of the cylinder is "<<calc_area_circle(radius)*height<<endl;
}
