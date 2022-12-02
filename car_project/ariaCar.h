#ifndef CAR_ARIACAR_H
#define CAR_ARIACAR_H

#include "carBody.h"
#include "ariaMovement.h"
    /*
     * movement -> ariaCar -> aria100
     * movement *car1 = new aria100();
     *
     * movement -> ariaMovement (movement)
     * body -> ariaBody
     * ariaCar  -> aria100 (car)
     *          -> aria200
    * */
class ariaCar :public carBody , public ariaMovement{
public:
    ariaCar(double ,double );
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
