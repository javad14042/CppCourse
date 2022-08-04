#ifndef PROJECT_MOVIES_H
#define PROJECT_MOVIES_H

#include <iostream>
#include <vector>
#include "movie.h"

using namespace std;

class movies {
private:
    vector<movie>movieList;
public:
    void displayMovies();
    void SetVector(movie tmp);
    void Search(string parameter,flag flag1);
    bool SearchName(string InName);
    bool SearchId(int id) ;
    void readFile(string fileAddress);
    int returnSizeOfVector();

};


#endif //PROJECT_MOVIES_H
