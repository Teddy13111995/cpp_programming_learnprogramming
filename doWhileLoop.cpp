#include<iostream>

using namespace std;

int main(){
    cout<<"============================="<<endl;
    char selection{};
    do{
        cout<<"\n------------------------"<<endl;
        cout<<"1. Do this."<<endl;
        cout<<"2. Do that."<<endl;
        cout<<"3. Do something else."<<endl;
        cout<<"Q Quit"<<endl;
        cout<<"Enter your selection : ";
        cin>>selection;
        switch (selection)
        {
        case '1':
            cout<<"You chose to Do This"<<endl;
            break;
        case '2':
            cout<<"You chose to Do That"<<endl;
            break;
        case '3':
            cout<<"You chose to Do Something else"<<endl;
            break;
        case 'Q':
        case 'q':
            cout<<"You chose to quit"<<endl;
            break;
        
        default:
            cout<<"Invalid option, try again!";
            break;
        }
    }while(selection!='q' && selection!='Q');

    return 0;
}