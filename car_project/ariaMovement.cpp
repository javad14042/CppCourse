#include "ariaMovement.h"

ariaMovement::ariaMovement() : speed{0.0}, fuel{10} {

}

void ariaMovement::gasPedal(double level) {
    speed += 5*level;
    fuel--;
}

void ariaMovement::brakePedal(double level) {
    speed -= 5*level;
    fuel--;
    if(speed < 0) speed =0;
}

void ariaMovement::turn(double input) {
    direction += input;
    if (direction > 180) direction -= 360;
    else if (direction < -180) direction += 360;
}


