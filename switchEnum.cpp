#include<iostream>

using namespace std;

int main(){
    enum Direction{
        left, right,up,down
    };

    Direction heading{left};

    switch (heading){
        case left:cout<<"You are going left"<<endl;
                    break;
        case right:cout<<"You are going right"<<endl;
                    break;
        case up:cout<<"You are going up"<<endl;
                    break;
        case down:cout<<"You are going down"<<endl;
                    break;
        default:cout<<"No one knows where you are going"<<endl;
    }
    return 0;
}