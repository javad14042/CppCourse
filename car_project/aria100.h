#ifndef CAR_ARIA100_H
#define CAR_ARIA100_H

#include "ariaCar.h"


class aria100 :public ariaCar{
private:

    int extremeGasLevel=4;
    int moderateGasLevel=2;
    int extremeBrakeLevel=4;
    int moderateBrakeLevel=2;

public:
    aria100();
    aria100(double InSpeed,int InDirection);

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

private:

    int directionCalculator(int);

    bool checkGasLevels(int,char);
    bool checkBrakeLevels(int,char);

};

#endif //CAR_ARIA100_H
