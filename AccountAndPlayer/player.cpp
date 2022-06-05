#include "player.h"
#include <iostream>
#include <stdlib.h>
#include<time.h>

int player::simulation() {
    srand(time(0));
    if (rand() % 2 == 0) {
        return 0;
    }
    if (rand() % 2 == 1) {
        return 1;
    }
}

void player::isDead() {
    cout << "You Lose!\n";
    cout << "Try Again " << name << endl;

}

void player::attack() {
    if (simulation() == 0) {
        health -= 10;
        xp += 20;
    } else {
        health -= 25;
        xp += 10;
    }
}

void player::defend() {
    if (simulation() == 0) {
        health -= 5;
        xp += 5;
    } else {
        health -= 30;
        xp += 2;

    }
}

int player::display() {

    cout << "xp :" << xp << endl;

    if (health <= 0) {
        cout << "\n";
        isDead();
    } else {
        cout << "health :" << health << endl;
    }
}

int player::show_health() {
    return health;
}

int player::show_xp() {

    return xp;
}

