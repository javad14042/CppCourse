#ifndef PROJECT_MOVIE_H
#define PROJECT_MOVIE_H

#include <iostream>

using namespace std;

enum class flag {
    name,
    genre,
    ageLimit
};

class movie {
public:
    string name;
    string genre;
    string ageLimit;    //general,13,16,18
    int id;

    static int idCounter;

    explicit movie(string InName = "", string InGenre = "", string InLimit = "");
    explicit movie(int InId = 1);

};


#endif //PROJECT_MOVIE_H
