#include<iostream>

using namespace std;

int main(){
    char vowels[]{'a','e','i','o','u'};
    cout<<"The first vowel "<<vowels[0]<<endl;
    cout<<"The last vowel "<<vowels[4]<<endl;

    double hi_temperature[]{90.1,89.8,77.5,81.6};
    cout<<"\nThe first high temperature is : "<<hi_temperature[0]<<endl;
    hi_temperature[0]=100.7; // set the first element in hi_temperature to 100.7
    cout<<"\nThe first high temperature is : "<<hi_temperature[0]<<endl;

    int test_scores[5];
    cout<<"\nFirst score at index 0:"<<test_scores[0];
    cout<<"\nSecond score at index 1:"<<test_scores[1];
    cout<<"\nThird score at index 2:"<<test_scores[2];
    cout<<"\nFourth score at index 3:"<<test_scores[3];
    cout<<"\nFifth score at index 4:"<<test_scores[4];

    cout<<"\nEnter 5 test scores: ";
    cin>>test_scores[0]>>test_scores[1]>>test_scores[2]>>test_scores[3]
        >>test_scores[4];

    cout<<test_scores[0]<<test_scores[1]<<test_scores[2]<<test_scores[3]
        <<test_scores[4];
    return 0;
}