#include "ariaMovement.h"
#include <iostream>

ariaMovement::ariaMovement(double InSpeed, double InDirection, int InFuel) : speed{InSpeed}, direction{InDirection},
                                                                             fuel{InFuel} {

}

ariaMovement::ariaMovement(double InSpeed, double InDirection) : ariaMovement(InSpeed, InDirection, 10) {

}

ariaMovement::ariaMovement() : speed{0.0},direction{0.0}, fuel{10} {

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

void ariaMovement::displayAmountOfFuel()  {
    std::cout << ariaMovement::fuel << "/10 is full" << std::endl;
}

