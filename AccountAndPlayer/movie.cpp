#include "movie.h"

int movie::idCounter = 1;

movie::movie(string InName, string InGenre, string InLimit)
: name{InName}, genre{InGenre}, ageLimit{InLimit} {
    id = idCounter;
    idCounter++;
}

movie::movie(int InId)
        : id{InId} {

}
