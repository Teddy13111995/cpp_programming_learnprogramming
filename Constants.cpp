/*
Frank's carpet cleaning service
charges $30 per room
sales tax rate is 6%
estimates are valid for 30 days
prompt the user for the number of rooms they would like cleaned and provide estimates as such:

Estimates for carpet cleaning service:
number of rooms:2
Price per room:$30
Cost:$60
Tax:$3.6
===================
Total estimates:$63.6
This estimate is valid for 30 days

Pseudocode:
Prompt the user t enter the number of rooms
Display number of rooms
display price per room
display cost: number of rooms*price per room
display tax: number of rooms *price per room*tax rate
Display total estimate:cost+tax
Display estimate expiration date

*/


#include <iostream>

using namespace std;

int main(){
    const int price_per_room=30;
    const float sales_tax = 0.06;
    const int validity=30;
    int number_of_rooms(0);
    int cost_rooms(0);
    float tax(0.0);
    float total_cost(0.0);

    cout<<"Enter the number of rooms that needs to be cleaned : ";
    cin>>number_of_rooms;

    cout<<"===================================="<<endl;
    cout<<"Number of rooms : "<<number_of_rooms<<endl;
    cout<<"Price per room : $"<<price_per_room<<endl;
    cost_rooms=number_of_rooms*price_per_room;
    cout<<"Cost : $"<<cost_rooms<<endl;
    tax=cost_rooms*sales_tax;
    cout<<"Tax : $"<<tax<<endl;
    cout<<"===================================="<<endl;
    total_cost=cost_rooms+tax;
    cout<<"Total estimates : $"<<total_cost<<endl;
    cout<<"This estimate is valid for "<<validity<<" days"<<endl;

    return 0;
}