#include "onlineTv.h"


onlineTv::onlineTv(account *obj)
        : AccountName{obj} {
}

void onlineTv::order(movies sample) {
    int id;
    cout << "Please enter id of the film you want to watch\n";
    cin >> id;
    if (search(id) && searchExistence(id, sample)) {
        if (AccountName->getBalance() >= 80) {
            AccountName->withdraw(80);
            watchedMovies.emplace_back(id);
            cout << "Your order registered successfully\n";
        }
    } else {
        if (!search(id))
            cout << "You have bought this film before\n";
        else if (!searchExistence(id, sample))
            cout << "Your input is out of range\n";
    }
}

bool onlineTv::search(int id) {
    for (int j = 0; j < watchedMovies.size(); ++j) {
        if (watchedMovies[j] == id)
            return false;
    }
    return true;
}

bool onlineTv::searchExistence(int id, movies sample) {
    int len = sample.returnSizeOfVector();
    for (int i = 0; i < len; ++i)
        if (sample.SearchId(id))
            return true;
    return false;
}




