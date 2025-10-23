/*
For this challenge you are to develop the foundation for a program 
for movie fanatics to keep track of what movies they have watched 
and how many times they watched each movie

The program must support the following:
class Movie - models a moviw which includes
- movie name
- movie raitng(G,PG,PG-13,R)
- watched - the number of times the movie has been watched

class Movies - models a collection of Movie objects

Movie need to know about Movie since it is a collection of movie object
However our main driver should interact with the movies class

For example, a simple amn should be able to 
- create a Movies object
- ask the Movies object to add a movie by providing the movie name,rating and watched count
- ask the Movies objectto increment the watched count by 1 for a movie given its name
- ask the Movies object to display all of its Movies

Additionally,
- if we try to add a movie whose name is already in the movies collection we should 
display the error to the user
- if we try to increment the watched count for a movie whose name is not in the movies collection
we should display this error to the user
*/
#include <iostream>
#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);                 // OK
    add_movie(my_movies,"Star Wars", "PG",5);             // OK
    add_movie(my_movies,"Cinderella", "PG",7);            // OK
     
    my_movies.display();   // Big, Star Wars, Cinderella
    
    add_movie(my_movies,"Cinderella", "PG",7);            // Already exists
    add_movie(my_movies,"Ice Age", "PG",12);              // OK
 
    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    increment_watched(my_movies,"Big");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
   my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");     // XXX not found

	return 0;
}
