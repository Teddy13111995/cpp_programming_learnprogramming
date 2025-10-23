#include<iostream>

using namespace std;

int main(){
    int marks{};
    cout<<"Enter your marks : ";
    cin>>marks;
    const int min{0},max{100};
    if(marks>=min && marks<=max){
        if(marks>=90){/*A*/
        cout<<"You got A grade"<<endl;
    }
        else if(marks<90 && marks>=75){/*B*/
        cout<<"You got B grade"<<endl;
    }
        else if(marks<75 && marks>=60){/*C*/
        cout<<"You got C grade"<<endl;
    }
        else if(marks<60 && marks>=45){/*D*/
        cout<<"You got D grade"<<endl;
    }
        else{/*F*/
        cout<<"You got F grade and you have to repeat the class."<<endl;}

    }
    else{
        cout<<"Enter valid marks next time!!!"<<endl;
    }
    return 0;
}