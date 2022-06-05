#include "account.h"

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


using namespace std;

class player
{
private:
    int health=100;
    int xp=0;
public:
    char name[20];

    int simulation();
    void attack();
    void defend();
    int display();
    void isDead();

    int show_health();
    int show_xp();
};




#endif // PLAYER_H_INCLUDED
