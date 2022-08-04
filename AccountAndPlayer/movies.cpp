#include <fstream>
#include "movies.h"

void movies::SetVector(movie tmp) {
    movieList.emplace_back(tmp);
}

void movies::Search(string parameter, flag flag1) {
    if (flag1 == flag::ageLimit) {
        for (int i = 0; i < movieList.size(); ++i)
            if (movieList[i].ageLimit == parameter)
                cout << movieList[i].name << endl;
    } else if (flag1 == flag::genre) {
        for (int i = 0; i < movieList.size(); ++i)
            if (movieList[i].genre == parameter)
                cout << movieList[i].name << endl;
    } else {
        cout << "Wrong search parameter\n";
        cout << "Try Again\n";
    }
}

bool movies::SearchName(string InName) {
    for (int i = 0; i < movieList.size(); ++i)
        if (movieList[i].name == InName)
            return true;
    return false;
}

void movies::readFile(string fileAddress) {
    ifstream file1;
    file1.open(fileAddress);
    string InName;
    string InGenre;
    string InLimit;
    int idGenerator=1;
    while (file1 >> InName >> InGenre >> InLimit) {
        movie tmp(InName,InGenre,InLimit,idGenerator);
        idGenerator++;
        movieList.emplace_back(tmp);
    }
    file1.close();
}

void movies::displayMovies() {
    cout<<"Movie List\n";
    cout<<"-------------\n";
    cout<<"name\t"
        <<"genre\t"
        <<"ageLimit "
        <<"id"<<endl;
    cout<<"---------------------------\n";

    for (int i = 0; i < movieList.size(); ++i){
        cout<<movieList[i].name<<"\t"
            <<movieList[i].genre<<"\t"
            <<movieList[i].ageLimit<<"\t"
            <<movieList[i].id<<endl;
    }
}

bool movies::SearchId(int id)  {
    for (int i = 0; i < movieList.size(); ++i) {
        if (movieList[i].id == id)
            return true;
    }
    return false;
}

int movies::returnSizeOfVector() {
    return movieList.size();
}
