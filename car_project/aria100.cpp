#include <iostream>
#include "aria100.h"
#include "ariaMovement.h"




aria100::aria100(): aria100(0,0) {
}

aria100::aria100(double InSpeed, double InDirection): ariaCar(InSpeed,InDirection) {

}

void aria100::showDetails() const {
    std::cout << "speed: " << speed << "  direction: " << direction <<std::endl;
}

void aria100::carTrunkStatus(doorPosition status) {
    if (status == doorPosition::open)
        std::cout << "trunk is open\n";
    else if (status == doorPosition::close)
        std::cout << "trunk is close\n";
}

void aria100::hoodStatus(doorPosition status) {
    if (status == doorPosition::open)
        std::cout << "hood is open\n";
    else if (status == doorPosition::close)
        std::cout << "hood is close\n";
}

void aria100::action_arrangingTheSeats(unsigned int input) {
    if (input >= 1 && input <= 10)
        arrangingTheSeats(input);
    else
        arrangingTheSeats(0);
}

void aria100::arrangingTheSeats(unsigned int input) {
    if (input == 0) {
        std::cout << "wrong input\n";
        std::cout << "Your input should be between 1 to 10\n";
    } else
        std::cout << "You have adjusted the seat in position " << input << std::endl;
}

void aria100::doorStatus(doorPosition status, unsigned int doorNum) {
    if (status == doorPosition::open)
        std::cout << "door " << doorNum << " is open\n";
    else if (status == doorPosition::close)
        std::cout << "door " << doorNum << " is close\n";
}

void aria100::action_doorStatus(doorPosition status, unsigned int doorNum) {
    if (doorNum <= 4 && doorNum >= 1) doorStatus(status, doorNum);
    else {
        std::cout << "Wrong input for number of doors\n";
        std::cout << "Your input should be between 1 to 4\n";
    }
}

void aria100::menu() {
    char op;
    char intensity;
    char charIntensity;
    while (true) {
        std::cout << "\nPress following commands:\n"
                     "g for gas\n"
                     "b for brake\n"
                     "t for turning the car\n"
                     "d for displaying details\n"
                     "s for setting\n"
                     "e for exit\n";
        if (fuel <= 0) {
            std::cout << "You ran out out of fuel" << std::endl;
            break;
        }
        std::cin >> op;
        op = (char) tolower(op);

        if (op == 'g') {
            std::cout << "Enter e for extreme gas and m for moderate gas\n";
            std::cin >> charIntensity;
            charIntensity = (char) tolower(charIntensity);
            if (charIntensity=='e')
                extreme_Gas();
            else if (charIntensity=='m')
                moderate_Gas();
            else  std::cout<<"Wrong input\n\n";
        } else if (op == 'b') {
            std::cout << "Enter the intensity of pressing the brake pedal from 1 to 5\n";
            std::cin >> charIntensity;
            charIntensity = (char) tolower(charIntensity);
            if (charIntensity=='e')
                extreme_Brake();
            else if (charIntensity=='m')
                moderate_Brake();
            else  std::cout<<"Wrong input\n\n";
        } else if (op == 't') {
            char _direction;
            std::cout << "Enter the intensity of your turn\n";
            std::cout << "Enter e for extreme and m for moderate\n";
            std::cin >> charIntensity;
            charIntensity = (char) tolower(charIntensity);
            std::cout << "Enter the direction of your turn(left or right)\n";
            std::cout << "Enter l for left or r for right\n";
            std::cin >> _direction;
            _direction = (char) tolower(_direction);
            turnAction(charIntensity,_direction);
        } else if (op == 'd')
            showDetails();
        else if(op=='s')
            setting();
        else if (op == 'e') break;
        else std::cout << "Wrong input\n";
    }
}

void aria100::extreme_Gas() {
    std::cout << "You have committed extreme gas" << std::endl;
    gasPedal(extremeGasLevel);
    if (speed >= 120) {
        std::cout << "Your speed is over the limit" << std::endl;
        std::cout << "Please slow down" << std::endl<< std::endl;
    }
}

void aria100::moderate_Gas() {
    std::cout << "You have committed moderate gas" << std::endl;
    gasPedal(moderateGasLevel);
    if (speed >= 120) {
        std::cout << "Your speed is over the limit" << std::endl;
        std::cout << "Please slow down" << std::endl;
    }
}

void aria100::extreme_Brake() {
    std::cout << "You have committed extreme brake" << std::endl;
    brakePedal(extremeBrakeLevel);
}

void aria100::moderate_Brake() {
    std::cout << "You have committed moderate brake" << std::endl;
    brakePedal(moderateBrakeLevel);
}

void aria100::extreme_Turn_Right() {
    std::cout<<"You committed extreme turn to right "<<std::endl;
    fuel--;
}

void aria100::moderate_Turn_Right() {
    std::cout<<"You committed moderate turn to right "<<std::endl;
    fuel--;
}

void aria100::extreme_Turn_Left() {
    std::cout<<"You committed extreme turn to left"<<std::endl;
    fuel--;
}

void aria100::moderate_Turn_Left() {
    std::cout<<"You committed moderate turn to left"<<std::endl;
    fuel--;
}

void aria100::turnAction(char intensity, char _direction) {
    if (intensity == 'e') {
        if (_direction == 'l')
            ariaMovement::turn(-1 * 45);
        else if (_direction == 'r')
            ariaMovement::turn(45);
        else
            std::cout << "Your input for direction should be l or r\n";
    } else if (intensity == 'm') {
        if (_direction == 'l')
            ariaMovement::turn(-1 * 30);
        else if (_direction == 'r')
            ariaMovement::turn(30);
        else
            std::cout << "Your input for direction should be l or r\n";
    } else std::cout<<"You input for intensity should be m or e\n";
}

void aria100::setting() {
    char op;
    int temp;
    std::cout << "Which one do you want to change\n";
    std::cout << "default gas level or brake level\n";
    std::cout << "press g for gas and b for brake\n";
    std::cin >> op;
    op = (char) tolower(op);
    if (op == 'g') {
        std::cout << "Press e for changing extreme gas\n";
        std::cout << "Press m for changing moderate gas\n";
        std::cin >> op;
        op = (char) tolower(op);
        if (op == 'e') {
            std::cout << "Default speed for extreme gas is " << extremeGasLevel << std::endl;
            std::cout << "Enter your input\n";
            std::cin >> temp;
            if (checkGasLevels(temp, 'e')) {
                extremeGasLevel = temp;
                std::cout << "Extreme gas level changed successfully\n";
            } else std::cout << "Wrong input\n";

        } else if (op == 'm') {
            std::cout << "Default speed for moderate gas is " << moderateGasLevel << std::endl;
            std::cout << "Enter your input\n";
            std::cin >> temp;
            if (checkGasLevels(temp, 'm')) {
                moderateGasLevel = temp;
                std::cout << "Moderate gas level changed successfully\n";
            } else std::cout << "Wrong input\n";
        } else
            std::cout << "Wrong input\n";

    } else if (op == 'b') {
        std::cout << "Press e for changing extreme brake\n";
        std::cout << "Press m for changing moderate brake\n";
        std::cin >> op;
        op = (char) tolower(op);

    if (op == 'e') {
        std::cout << "Default speed for extreme brake is " << extremeBrakeLevel << std::endl;
        std::cout << "Enter your input\n";
        std::cin >> temp;
        if (checkBrakeLevels(temp, 'e')) {
            extremeBrakeLevel = temp;
            std::cout << "Extreme brake level changed successfully\n";
        } else std::cout << "Wrong input\n";

    } else if (op == 'm') {
        std::cout << "Default speed for moderate gas is " << moderateBrakeLevel << std::endl;
        std::cout << "Enter your input\n";
        std::cin >> temp;
        if (checkBrakeLevels(temp, 'm')) {
            moderateBrakeLevel = temp;
            std::cout << "Moderate brake level changed successfully\n";
        }
    }
    } else {
        std::cout << "Wrong input\n";
        std::cout << "press g for gas and b for brake\n";
    }
}

bool aria100::checkGasLevels(int level, char type) const {
    if (type == 'e') {
        if (level > moderateGasLevel && level <= 5)
            return true;
        return false;
    }
    if (level < extremeGasLevel && level >= 1)
        return true;
    return false;
}

bool aria100::checkBrakeLevels(int level, char type) const {
    if (type == 'e') {
        if (level > moderateBrakeLevel && level <= 5)
            return true;
        return false;
    }
    if (level < extremeBrakeLevel && level <= 1)
        return true;
    return false;
}

