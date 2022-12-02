#ifndef CAR_ARIAMOVEMENT_H
#define CAR_ARIAMOVEMENT_H
#include "movement.h"

class ariaMovement : public movement{
public:
    ariaMovement();
    ariaMovement(double InSpeed,double InDirection);
    ariaMovement(double InSpeed,double InDirection,int InFuel);
    void gasPedal(double) final;
    void brakePedal(double) final;
    void turn(double) final;
    void displayAmountOfFuel();

    double speed;
    double direction;
    int fuel;
};


#endif //CAR_ARIAMOVEMENT_H
