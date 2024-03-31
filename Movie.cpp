//
// Created by koeni on 3/30/2024.
//

#include "Movie.h"
using namespace std;

void Movie::setTitle(string movieTitle){
    title = movieTitle;
}
string Movie::getTitle(){
    return title;
}

void Movie::setGenre(string movieGenre){
    genre = movieGenre;
}
string Movie::getGenre(){
    return genre;
}

void Movie::setYear(int movieYear){
    year = movieYear;
}
int Movie::getYear(){
    return year;
}

void Movie::setScore(int movieScore){
    score = movieScore;
}
int Movie::getScore(){
    return score;
}

void Movie::setRating(string movieRating){
    rating = movieRating;
}
string Movie::getRating(){
    return rating;
}

void Movie::printMovie(){
    cout << getTitle() << "\n";
    cout << getGenre() << "\n";
    cout << getYear() << "\n";
    cout << getScore() << "\n";
    cout << getRating() << "\n";
}

