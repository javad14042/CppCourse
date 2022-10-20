#ifndef CAR_CARBODY_H
#define CAR_CARBODY_H

enum class doorPosition{
    open,
    close
};

class carBody {
protected:
    virtual void doorStatus(doorPosition,unsigned int)=0;
    virtual void arrangingTheSeats(unsigned int)=0;
    virtual void hoodStatus(doorPosition)=0;
    virtual void carTrunkStatus(doorPosition)=0;
public:
    virtual void action_arrangingTheSeats(unsigned int)=0;
    virtual void action_doorStatus(doorPosition,unsigned int)=0;
};

#endif //CAR_CARBODY_H
