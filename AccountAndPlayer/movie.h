#ifndef PROJECT_MOVIE_H
#define PROJECT_MOVIE_H
#include <iostream>

using namespace std;

enum class flag{
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

    explicit movie(string InName="",string InGenre="",string InLimit="", int InId=0 );
    explicit movie(int InId=0);



};


#endif //PROJECT_MOVIE_H
