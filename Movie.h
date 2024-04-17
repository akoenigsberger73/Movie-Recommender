//
// Created by koeni on 3/30/2024.
//

#ifndef MOVIERECOMMENDER_MOVIE_H
#define MOVIERECOMMENDER_MOVIE_H
#include <string>
#include <iostream>
#include <list>

using namespace std;

//class Movie is used to instantiate Movie objects from the data present in the database file
class Movie {
private:
    //movie title in database
    string title;
    //movie genre in database
    string genre;
    //movie release year in database
    int year;
    //movie critic score in database
    int score;
    //movie maturity rating in database
    string rating;
public:
    //get and set methods for title
    void setTitle(string movieTitle);
    string getTitle();

    //get and set methods for genre
    void setGenre(string movieGenre);
    string getGenre();

    //get and set methods for year
    void setYear(int movieYear);
    int getYear();

    //get and set methods for score
    void setScore(int movieScore);
    int getScore();

    //get and set methods for rating
    void setRating(string movieRating);
    string getRating();

    //used to print out all data from a Movie object. Used for testing and output
    void printMovie();

};


#endif //MOVIERECOMMENDER_MOVIE_H
