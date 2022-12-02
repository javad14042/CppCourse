#ifndef CAR_ARIA100_H
#define CAR_ARIA100_H

#include "ariaCar.h"
#include "ariaMovement.h"

class aria100 :public ariaCar{
private:
    int extremeGasLevel=4;
    int moderateGasLevel=2;
    int extremeBrakeLevel=4;
    int moderateBrakeLevel=2;

public:
    aria100();
    aria100(double InSpeed,double InDirection);
    void menu() override;
    void showDetails() const;
    void setting();
    //carBody
    void carTrunkStatus(doorPosition) override;
    void doorStatus(doorPosition,unsigned int) override;
    void hoodStatus(doorPosition) override;
    void action_arrangingTheSeats(unsigned int) override;
    void action_doorStatus(doorPosition,unsigned int) override;
    void arrangingTheSeats(unsigned int) override;
    void extreme_Gas() override;
    void moderate_Gas() override;
    void extreme_Brake() override;
    void moderate_Brake() override;
    void extreme_Turn_Right() override;
    void extreme_Turn_Left() override;
    void moderate_Turn_Right() override;
    void moderate_Turn_Left() override;
    void turnAction(char,char) ;

private:
    bool checkGasLevels(int,char) const;
    bool checkBrakeLevels(int,char) const;

};

#endif //CAR_ARIA100_H
