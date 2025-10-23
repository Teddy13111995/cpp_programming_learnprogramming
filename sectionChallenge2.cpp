/*
Automated grader
write a program that reads a file named 'responses.txt' that contains the answer for a quiz
as well as student responses for the quiz.

The answer key is the first item in the file .

You should read the file and display:
Each students name and score(#correct out of 5)
At the end, the class average should be displayed

Program should output to the console the following:
Student                 Score
------------------------------
name                    score
------------------------------
Average score           score
*/

#include<iostream>
#include<fstream>
#include<iomanip>

int main(){
    std::ifstream in_file;
    std::string answer,response,name;
    in_file.open("responses.txt");
    int score{0},count{0},total_score{0},i;
    double average_score{0};
    if(!in_file){
        std::cerr<<"File not found"<<std::endl;
        return 1;
    }
    std::getline(in_file,answer);
    std::cout<<answer<<std::endl;
    
    std::cout<<std::setw(10)<<std::left<<"Student"<<"\t\t\t"<<std::setw(10)<<"Score"<<std::endl;
    std::cout<<"--------------------------------------------------"<<std::endl;
    while (in_file>>name>>response)
    {
        count++;
        i=0;
        while(answer[i]){
            if(answer[i]==response[i])
                score++;
            i++;
        }

        std::cout<<std::setw(10)<<std::left<<name<<"\t\t\t"<<std::setw(10)<<score<<std::endl;
        total_score+=score;
        score=0;
        
    }
    average_score=static_cast<double>(total_score)/count;
    std::cout<<"--------------------------------------------------"<<std::endl;
    std::cout<<"Average score\t\t\t"<<average_score<<std::endl;
    in_file.close();
    return 0;
}