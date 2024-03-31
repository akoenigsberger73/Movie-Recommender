//
// Created by koeni on 3/30/2024.
//

#ifndef MOVIERECOMMENDER_MOVIE_H
#define MOVIERECOMMENDER_MOVIE_H
#include <string>
#include <iostream>
#include <list>

using namespace std;

class Movie {
private:
    string title;
    string genre;
    int year;
    int score;
    string rating;
public:
    void setTitle(string movieTitle);
    string getTitle();

    void setGenre(string movieGenre);
    string getGenre();

    void setYear(int movieYear);
    int getYear();

    void setScore(int movieScore);
    int getScore();

    void setRating(string movieRating);
    string getRating();

    void printMovie();

};


#endif //MOVIERECOMMENDER_MOVIE_H
