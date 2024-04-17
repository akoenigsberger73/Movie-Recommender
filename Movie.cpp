//
// Created by koeni on 3/30/2024.
//

#include "Movie.h"
using namespace std;

//movieTitle parameter is title of Movie object
void Movie::setTitle(string movieTitle){
    title = movieTitle;
}
//returns title variable
string Movie::getTitle(){
    return title;
}

//movieGenre parameter is genre of Movie object
void Movie::setGenre(string movieGenre){
    genre = movieGenre;
}
//returns genre variable
string Movie::getGenre(){
    return genre;
}

//movieYear parameter is release year of Movie object
void Movie::setYear(int movieYear){
    year = movieYear;
}
//returns year variable
int Movie::getYear(){
    return year;
}

//movieScore parameter is critic score of Movie object
void Movie::setScore(int movieScore){
    score = movieScore;
}
//returns score variable
int Movie::getScore(){
    return score;
}

//movieRating parameter is maturity rating of Movie object
void Movie::setRating(string movieRating){
    rating = movieRating;
}
//returns rating variable
string Movie::getRating(){
    return rating;
}

//prints all variable values of the Movie object
void Movie::printMovie(){
    cout << getTitle() << "\n";
    cout << getGenre() << "\n";
    cout << getYear() << "\n";
    cout << getScore() << "\n";
    cout << getRating() << "\n";
}

