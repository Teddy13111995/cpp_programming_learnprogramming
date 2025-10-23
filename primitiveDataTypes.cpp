#include <iostream>

using namespace std;

int main(){
    //Charater type
    char middle_name('V');
    cout<<"my middle name is "<<middle_name<<endl;

    //integer types
    unsigned short int exam_score(55);
    cout<<"My exam score was "<<exam_score<<endl;

    int countries_represented(65);
    cout<<"there were "<<countries_represented<<" countries represented in my meeting"<<endl;

    long people_in_florida(20610000);
    cout<<"There are about "<<people_in_florida<<" people iin florida"<<endl;

    long people_on_earth(7'600'000'000);
    cout<<"There are about "<<people_on_earth<<"people on earth"<<endl;

    long long distance_to_alpha_centauri(9'461'000'000'000);
    cout<<"the distance to alpha centauri is "<<distance_to_alpha_centauri<<"kms"<<endl;

    // Floating point types
    float my_car_payment(401.23);
    cout<<"my car payment is "<<my_car_payment<<endl;

    double pi(3.14159);
    cout<<"Pi is "<<pi<<endl;

    long double large_amount(2.7e120);
    cout<<large_amount<<" is a very big number"<<endl;

    //Boolean type
    bool game_over(false);
    cout<<"the value of game over is "<<game_over<<endl;

    //overflow 
    short value1(30000);
    short value2(1000);
    short product(value1*value2);
    cout<<"The sum of "<<value1 <<" and "<<value2<<" is "<<product<<endl;

    return 0;
}