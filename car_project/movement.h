#ifndef CAR_MOVEMENT_H
#define CAR_MOVEMENT_H


class movement {
public:
    virtual void gasPedal(double)=0;
    virtual void brakePedal(double)=0;
    virtual void turn(double)=0;
//    virtual void displayAmountOfFuel() const=0;
};


#endif //CAR_MOVEMENT_H
