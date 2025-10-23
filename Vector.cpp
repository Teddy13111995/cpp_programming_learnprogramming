#include<iostream>
#include<vector>

using namespace std;

int main(){
    //vector <char> vowels;//empty
    // vector <char> vowels(5);//5 initalized to 0
    vector <char> vowels{'a','e','i','o','u'};
    cout<<vowels.at(0)<<endl;
    cout<<vowels.at(1)<<endl;

    //vector <int> test_scores(3); //3 elements all initialized to zero
    //vector <int> test_scores(3,100); //3 elements all initialized to 100
    vector<int> test_scores{100,98,99};
    cout<<"\nTest scores using array syntax"<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;
    
    cout<<"\nTest scores using vector syntax"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    cout<<"\nThere are "<<test_scores.size()<<" scores in the vector"<<endl;

    cout<<"\nEnter three test scores"<<endl;
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);

    cout<<"\nUpdated test scores"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    cout<<"\nEnter a test score to add to vector:";
    int score_to_add(0);
    cin>>score_to_add;

    test_scores.push_back(score_to_add);
    cout<<"\nEnter one more score to add to the vector:";
    cin>>score_to_add;
    test_scores.push_back(score_to_add);

    cout<<"\nThere are "<<test_scores.size()<<" scores in the vector"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;

    vector<vector<int>> movie_rating{
        {1,2,3,4},{5,6,7,8},{9,10,11,12}
    };

    cout<<"\nHere are the movie rating for reviewer #1 using array syntax :"<<endl;
    cout<<movie_rating.at(0).at(0)<<endl;
    cout<<movie_rating.at(0).at(1)<<endl;
    cout<<movie_rating.at(0).at(2)<<endl;
    cout<<movie_rating.at(0).at(3)<<endl;

    cout<<"\nHere are the movie rating for reviewer #2 using array syntax :"<<endl;
    cout<<movie_rating.at(1).at(0)<<endl;
    cout<<movie_rating.at(1).at(1)<<endl;
    cout<<movie_rating.at(1).at(2)<<endl;
    cout<<movie_rating.at(1).at(3)<<endl;

    cout<<"\nHere are the movie rating for reviewer #3 using array syntax :"<<endl;
    cout<<movie_rating.at(2).at(0)<<endl;
    cout<<movie_rating.at(2).at(1)<<endl;
    cout<<movie_rating.at(2).at(2)<<endl;
    cout<<movie_rating.at(2).at(3)<<endl;
    return 0;
}