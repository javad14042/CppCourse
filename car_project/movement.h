#ifndef CAR_MOVEMENT_H
#define CAR_MOVEMENT_H


class movement {
public:
    virtual void gasPedal(int)=0;
    virtual void brakePedal(int)=0;
    virtual void turn(int,char)=0;
    virtual void displayAmountOfFuel() const=0;
};


#endif //CAR_MOVEMENT_H
