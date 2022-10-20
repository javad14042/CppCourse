#ifndef CAR_ARIACAR_H
#define CAR_ARIACAR_H

#include "carBody.h"
#include "movement.h"

class ariaCar :public carBody,public movement{
public:
     virtual void extreme_Gas()=0;
     virtual void moderate_Gas()=0;
     virtual void extreme_Brake()=0;
     virtual void moderate_Brake()=0;

     virtual void extreme_Turn_Right()=0;
     virtual void extreme_Turn_Left()=0;
     virtual void moderate_Turn_Right()=0;
     virtual void moderate_Turn_Left()=0;
     virtual void menu()=0;
};

#endif //CAR_ARIACAR_H
