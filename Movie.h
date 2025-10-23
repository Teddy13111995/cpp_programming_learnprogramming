#ifndef _MOVIE_H_
#define _MOVIE_H_
#include<string>
class Movie{
    private:
        std::string movie_name;
        std::string pg_rating;
        int watched;
    public:
        std::string get_name_of_movie()const {return movie_name;}
        void set_name_of_movie(std::string name_of_movie);
        void set_pg_rating(std::string pg_rating_val);
        std::string get_pg_rating()const{return pg_rating;}
        void set_watched(int watched_val);
        int get_watched()const{return watched;}
        void display()const;
        void increment_watched(){++watched;}
        //Constructor
        Movie(std::string movie_name_val,std::string pg_rating_val,int watched_val);
        //Copy constructor
        Movie(const Movie &source);
        //Destructor
        ~Movie();
};

#endif