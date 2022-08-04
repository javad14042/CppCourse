#include "movie.h"

movie::movie(string InName, string InGenre, string InLimit,int InId)
:name{InName},genre{InGenre},ageLimit{InLimit},id{InId}
{

}

movie::movie(int InId)
:id{InId}
{

}
