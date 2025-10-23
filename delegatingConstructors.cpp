#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
        Player();
        Player(string name_val);
        Player(string name_val,int health_val,int xp_val);
};

Player::Player():
Player{"None",0,0}{
    cout<<"No args constructor"<<endl;
}

Player::Player(string string_val):
Player{string_val,0,0}{
    cout<<"1 args constructor"<<endl;
}
Player::Player(string name_val,int health_val,int xp_val):
name{name_val},health{health_val},xp{xp_val}{
    cout<<"three args constructor"<<endl;
}


int main(){

    Player empty;
    Player srijan("Srijan");
    Player villain("Villain",100,55);
    return 0;
}