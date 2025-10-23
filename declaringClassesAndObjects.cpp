#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;
    //methods
    void talk(string);
    bool is_dead();
};

class Account{
    //attributes
    string name{"Account"};
    double balance{0.0};

    //methods
    bool deposit(double);
    bool withdrawal(double);
};

int main(){

    Player player1,player2;

    Player *enemy{nullptr};
    enemy=new Player();
    delete enemy;

    Player players[]{player1, player2};//array of class objects
    vector<Player> player_vec{player1};
    player_vec.push_back(player2);

    return 0;
}