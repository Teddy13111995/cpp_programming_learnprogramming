#include "Movie.h"
#include<iostream>

void Movie::set_name_of_movie(std::string name_of_movie){
    movie_name=name_of_movie;
}
void Movie::set_pg_rating(std::string pg_rating_val){
    // if(pg_rating_val=="G"||pg_rating_val=="PG"||pg_rating_val=="PG-13"||pg_rating_val=="R")
    //     pg_rating=pg_rating_val;
    // else{
    //     cout<<"PG rating can only be G,PG,PG-13 and R";
    // }
    pg_rating=pg_rating_val;
}
void Movie::set_watched(int watched_val){
    watched=watched_val;
}
Movie::Movie(std::string movie_name_val,std::string pg_rating_val,int watched_val)
:movie_name{movie_name_val},pg_rating{pg_rating_val},watched{watched_val}{
    std::cout<<"Movie "<<movie_name_val<<" created"<<std::endl;
}

Movie::Movie(const Movie &source)
:movie_name{source.movie_name},pg_rating{source.pg_rating},watched{source.watched}{

}
Movie::~Movie(){
    std::cout<<"Destructor called for "<<movie_name<<std::endl;
}

void Movie::display()const{
    std::cout<<movie_name<<", "<<pg_rating<<", "<<watched<<std::endl;
}
