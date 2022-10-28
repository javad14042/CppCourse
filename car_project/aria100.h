#ifndef CAR_ARIA100_H
#define CAR_ARIA100_H

#include "ariaCar.h"

class aria100 :public ariaCar{
private:
    double speed;            //0 to 300
    int direction;          //-180 to 180
    //int extreme_Turn_Left_angle;

    void gasPedal(char) override;
    void brakePedal(char) override;
    void turn(int,char) override;

    void extreme_Gas() override;
    void moderate_Gas() override;
    void extreme_Brake() override;
    void moderate_Brake() override;
    void extreme_Turn_Right() override;
    void extreme_Turn_Left() override;
    void moderate_Turn_Right() override;
    void moderate_Turn_Left() override;

    void gasAction(char);
    void brakeAction(char);
    int directionCalculator(int);
    int extremeGasLevel=4;
    int moderateGasLevel=2;
    int extremeBrakeLevel=4;
    int moderateBrakeLevel=2;
    bool checkGasLevels(int,char);
    bool checkBrakeLevels(int,char);
public:
    aria100();
    aria100(double InSpeed,int InDirection);

    int fuel;
    void menu() override;
    void showDetails() const;
     void setting();
    //carBody
    void carTrunkStatus(doorPosition) override;
    void doorStatus(doorPosition,unsigned int) override;
    void hoodStatus(doorPosition) override;
    void displayAmountOfFuel() const override;
    void action_arrangingTheSeats(unsigned int) override;
    void action_doorStatus(doorPosition,unsigned int) override;
    void arrangingTheSeats(unsigned int) override;

};

#endif //CAR_ARIA100_H
