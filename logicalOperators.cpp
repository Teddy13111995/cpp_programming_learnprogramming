#include<iostream>

using namespace std;

int main(){


    int num{};
    const int lower{10};
    const int upper{20};

    cout<<boolalpha;
    cout<<"Enter a number between "<<lower<<" and "<<upper<<" : "<<endl;
    cin>>num;

    bool within_bounds{false};
    within_bounds=(num>lower && num<upper);

    cout<<num<<" is between "<<lower<<" and "<<upper<<" : "<<within_bounds<<endl;


    //determine if number is outside two integers
    
    within_bounds=(num<lower || num>upper);

    cout<<num<<" is outside "<<lower<<" or "<<upper<<" : "<<within_bounds<<endl;

    // determine if number is on the bound
    within_bounds=(num==lower || num==upper);

    cout<<num<<" is either "<<lower<<" or "<<upper<<" : "<<within_bounds<<endl;


    //Dtermine if you need to wear a coat based on temperature and wind speed
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_coat{25};
    const double temperature_for_coat{45};

    cout<<"enter the temperature and wind speed : ";
    cin>>temperature>>wind_speed;

    wear_coat=(wind_speed>wind_speed_for_coat || temperature<temperature_for_coat);

    cout<<"You need to wear the coat : "<<wear_coat<<endl;
    return 0;
}