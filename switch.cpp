/*
Ask the user what grade they expect on an exam and
tell them what they need to score to get it
*/

#include<iostream>

using namespace std;

int main(){
    char grade{};
    cout<<"Enter the grade that you want in the exam : ";
    cin>>grade;
    int marks{};
    switch (grade)
    {
    case 'A':
    case 'a':
        /* code */
        marks=90;
        break;
    case 'B':
    case 'b':
        /* code */
        marks=80;
        break;
    case 'C':
    case 'c':
        /* code */
        marks=70;
        break;
    case 'D':
    case 'd':
        /* code */
        marks=60;
        break;
    default:
        cout<<"Thats not a valid grade"<<endl;
        break;
    }
    cout<<"You need marks greater than "<<marks<<endl;
    return 0;
}