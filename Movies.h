#ifndef _MOVIES_H_
#define _MOVIES_H_
#include<vector>
#include "Movie.h"
#include<string>

class Movies{
    private:
        std::vector<Movie> movies;
    public:
        //constructor
        Movies();
        //destructor
        ~Movies();
        //add movie
        bool add_movie(std::string name,std::string pg,int watched);
        //increment watch
        bool increment_watched(std::string name);
        //display
        void display()const;
};
#endif