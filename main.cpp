#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <sstream>
#include "Movie.h"
using namespace std;

int main() {

    //creates movieList, a list of Movie objects which contains an object of every movie in the database.
    list<Movie> movieList;

    //Opens file and creates necessary variables to iterate through file
    fstream myfile;
    myfile.open("movies.txt");
    string mystring;
    string myline;

    //Fills movieList with Movie objects from the database input file
    while (std::getline(myfile, mystring)) {
        Movie movie;
        if (myfile.is_open()) {
            getline(myfile, myline);
            movie.setTitle(myline);

            getline(myfile, myline);
            movie.setGenre(myline);

            getline(myfile, myline);
            stringstream ss1;
            ss1 << myline;
            int temp1;
            ss1 >> temp1;
            movie.setYear(temp1);

            getline(myfile, myline);
            stringstream ss2;
            ss2 << myline;
            int temp2;
            ss2 >> temp2;
            movie.setScore(temp2);

            getline(myfile, myline);
            movie.setRating(myline);
        }
        movieList.push_back(movie);
    }
    /*for (std::list<Movie>::iterator i = movieList.begin(); i != movieList.end(); ++i) {
        i->printMovie();
    }*/

    //Creates variables necessary for storing user input
    string genre;
    int year;
    int score;
    string rating;

    //Prompts user to input desired movie genre. Assigns to the appropriate variable, and makes sure input is correct
    cout << "Genres: Comedy, Drama, Action, Horror, Romance, Fantasy, SciFi" << "\n";
    cout << "Enter your desired genre: ";
    cin >> genre;
    if(genre != "Comedy" && genre != "Drama" && genre != "Action" && genre != "Horror" && genre != "Romance" && genre != "Fantasy" && genre != "SciFi"){
        cout << "Unrecognized input, please try again";
        exit(0);
    }
    //cout << "\n" << genre << "\n";

    //Prompts user to input desired movie decade. Assigns to the appropriate variable, and makes sure input is correct
    cout << "Year: 1960, 1970, 1980, 1990, 2000, 2010, 2020" << "\n";
    cout << "Enter your desired decade of release: ";
    cin >> year;
    //cout << "\n" << year << "\n";
    if(year != 1960 && year != 1970 && year != 1980 && year != 1990 && year != 2000 && year != 2010 && year != 2020){
        cout << "Unrecognized input, please try again";
        exit(0);
    }

    //Prompts user to input desired movie critic score. Assigns to the appropriate variable, and makes sure input is correct
    cout << "Critic Score: Input a number between 0 and 99" << "\n";
    cout << "Enter your desired minimum critic score: ";
    cin >> score;
    //cout << "\n" << score << "\n";
    if((score < 0 || score > 99) || cin.fail()){
        cout << "Unrecognized input, please try again";
        exit(0);
    }

    //Prompts user to input desired movie rating. Assigns to the appropriate variable, and makes sure input is correct
    cout << "Ratings: G, PG, PG13, R" << "\n";
    cout << "Enter your desired rating: ";
    cin >> rating;
    //cout << "\n" << rating << "\n";
    if(rating != "G" && rating != "PG" && rating != "PG13" && rating != "R"){
        cout << "Unrecognized input, please try again";
        exit(0);
    }

    //Creates lists to pass Movie objects through to determine which fit the user inputted criteria
    list<Movie> genreList;
    list<Movie> yearList;
    list<Movie> scoreList;
    list<Movie> ratingList;

    //Iterates through movieList, pushing only matching genre entries onto genreList
    for (list<Movie>::iterator i = movieList.begin(); i != movieList.end(); ++i) {
        if(i->getGenre() == genre){
            Movie movie;
            movie.setTitle(i->getTitle());
            movie.setGenre(i->getGenre());
            movie.setYear(i->getYear());
            movie.setScore(i->getScore());
            movie.setRating(i->getRating());
            genreList.push_back(movie);
        }

    }
    if(movieList.size() == 0) {
        cout << "No movie in the database matches your request";
        exit(0);
    }
    /*for (std::list<Movie>::iterator i = genreList.begin(); i != genreList.end(); ++i) {
        i->printMovie();
    }*/

    //Iterates through genreList, pushing only matching decade entries onto yearList
    for (list<Movie>::iterator i = genreList.begin(); i != genreList.end(); ++i) {
        if(i->getYear() >= year && i->getYear() < year + 10){
            Movie movie;
            movie.setTitle(i->getTitle());
            movie.setGenre(i->getGenre());
            movie.setYear(i->getYear());
            movie.setScore(i->getScore());
            movie.setRating(i->getRating());
            yearList.push_back(movie);
        }
    }
    if(genreList.size() == 0) {
        cout << "No movie in the database matches your request";
        exit(0);
    }

    //Iterates through yearList, pushing only matching critic score entries onto scoreList
    for (list<Movie>::iterator i = yearList.begin(); i != yearList.end(); ++i) {
        if(i->getScore() >= score){
            Movie movie;
            movie.setTitle(i->getTitle());
            movie.setGenre(i->getGenre());
            movie.setYear(i->getYear());
            movie.setScore(i->getScore());
            movie.setRating(i->getRating());
            scoreList.push_back(movie);

        }
    }
    if(yearList.size() == 0) {
        cout << "No movie in the database matches your request";
        exit(0);
    }

    //Iterates through scoreList, pushing only matching rating entries onto ratingList
    for (list<Movie>::iterator i = scoreList.begin(); i != scoreList.end(); ++i) {
        if(i->getRating() == rating){
            Movie movie;
            movie.setTitle(i->getTitle());
            movie.setGenre(i->getGenre());
            movie.setYear(i->getYear());
            movie.setScore(i->getScore());
            movie.setRating(i->getRating());
            ratingList.push_back(movie);
        }
    }
    if(scoreList.size() == 0) {
        cout << "No movie in the database matches your request";
        exit(0);
    }

    //Prints any entries in ratingList, as these match every criterion
    for (list<Movie>::iterator i = ratingList.begin(); i != ratingList.end(); ++i) {
            i->printMovie();
    }
    if(ratingList.size() == 0) {
        cout << "No movie in the database matches your request";
    }
    return 0;
}
