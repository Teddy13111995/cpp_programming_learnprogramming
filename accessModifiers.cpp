#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
    //attributes
        string name{"player"};
        int health;
        int xp;
    public:
    //methods
        void talk(string text_to_say){
            cout<<name<<" says "<<text_to_say<<endl;
        }
        bool is_dead();
};

int main(){
    Player srijan;

    //srijan.name="Srijan"; //name is inaccessible as it is private
    srijan.talk("Hello there");
    return 0;
}