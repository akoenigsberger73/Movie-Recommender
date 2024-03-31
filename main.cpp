#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <sstream>
#include "Movie.h"
using namespace std;

int main() {
    list<Movie> movieList;
    fstream myfile;
    myfile.open("movies.txt");
    string mystring;
    string myline;
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
    string genre;
    int year;
    int score;
    string rating;
    cout << "Genres: Comedy, Drama, Action, Horror, Romance, Fantasy, SciFi" << "\n";
    cout << "Enter your desired genre: ";
    cin >> genre;
    //cout << "\n" << genre << "\n";

    cout << "Year: 1960, 1970, 1980, 1990, 2000, 2010, 2020" << "\n";
    cout << "Enter your desired decade of release: ";
    cin >> year;
    //cout << "\n" << year << "\n";

    cout << "Critic Score: 0, 10, 20, 30, 40, 50, 60, 70, 80, 90" << "\n";
    cout << "Enter your desired minimum critic score: ";
    cin >> score;
    //cout << "\n" << score << "\n";

    cout << "Ratings: G, PG, PG13, R" << "\n";
    cout << "Enter your desired rating: ";
    cin >> rating;
    //cout << "\n" << rating << "\n";

    list<Movie> genreList;
    list<Movie> yearList;
    list<Movie> scoreList;
    list<Movie> ratingList;
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
    /*for (std::list<Movie>::iterator i = genreList.begin(); i != genreList.end(); ++i) {
        i->printMovie();
    }*/
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

    for (std::list<Movie>::iterator i = ratingList.begin(); i != ratingList.end(); ++i) {
        i->printMovie();
    }
    return 0;
}
