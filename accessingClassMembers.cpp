#include<iostream>
#include<string>

using namespace std;

class Player{
    public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){
        cout<<name<<" says "<<text_to_say<<endl;
    }
    bool is_dead();
};

class Account{
    public:
    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double bal){
        balance+=bal;
        cout<<"In balance";
        return true;
    }
    bool withdrawal(double bal){
        balance-=bal;
        cout<<"in withdrawal";
        return false;
    }

};

int main(){
    Player srijan;
    srijan.name="Srijan";
    srijan.health=100;
    srijan.xp=100;
    srijan.talk("Hi there");

    Player *enemy=new Player();
    (*enemy).name="Enemy";
    (*enemy).health=100;
    enemy->xp=10;
    enemy->talk("I will destroy u");

    Account srijan_account;
    srijan_account.name="Srijan's Account";
    srijan_account.balance=10000;

    srijan_account.deposit(100.0);
    srijan_account.withdrawal(500.0);

    return 0;
}