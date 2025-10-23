#include<iostream>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
        string get_name(){return name;}
        int get_health(){return health;}
        int get_xp(){return xp;}
        Player(string name_val="None",int health_val=0,int xp_val=0);
        //copy constructor
        Player(const Player &source);
        //destructor
        ~Player(){cout<<"Destructor called for "<<name<<endl;}
};

Player::Player(string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
    cout<<"three args constructor called for "<<name<<endl;
}

Player::Player(const Player &source)
:name{source.name},health{source.health},xp{source.xp}{
    cout<<"copy constructor made a copy of "<<source.name<<endl;
}
void display_Player(Player p){
    cout<<"Name : "<<p.get_name()<<endl;
    cout<<"Health : "<<p.get_health()<<endl;
    cout<<"Xp : "<<p.get_xp()<<endl;
}

int main(){
    Player empty;
    display_Player(empty);
    Player frank{"Frank"};

    Player hero{"Hero",100};
    Player villain{"villain",100,55};

    return 0;
}