#ifndef CAR_ARIAMOVEMENT_H
#define CAR_ARIAMOVEMENT_H
#include "movement.h"

class ariaMovement : public movement{
public:
    ariaMovement();
    void gasPedal(double) final;
    void brakePedal(double) final;
    void turn(double) final;
protected:
    double speed;
    double direction;
    int fuel;
};


#endif //CAR_ARIAMOVEMENT_H
