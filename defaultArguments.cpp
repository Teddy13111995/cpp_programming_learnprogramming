#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

double calc_cost(double base_cost,double tax_rate=0.06,double shipping_cost=3.50);
void greeting(string name, string prefix="Mr.", string suffix="");

void greeting(string name, string prefix,string suffix){
    cout<<"Hello "+prefix+" "+name+" "+suffix<<endl;
}
int main(){
    greeting("Srijan");
    cout<<"Your bill with default tax_rate and shipping cost is: "<<calc_cost(200.0)<<endl;
    greeting("Srijan","Lord of lords and king of kings");
    cout<<"Your bill with 8% tax_rate and default shipping cost is: "<<calc_cost(200.0,0.08)<<endl;
    greeting("Srijan","Lord of lords and king of kings","ViShi Industries");
    cout<<"Your bill with 8% tax rate and $4 shipping cost is: "<<calc_cost(200.0,0.08,4);
    return 0;
}

double calc_cost(double base_cost,double tax_rate,double shipping_cost){
    return base_cost+=base_cost*tax_rate+shipping_cost;
}