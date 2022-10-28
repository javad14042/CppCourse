#include <iostream>
#include "aria100.h"

aria100::aria100(): aria100(0,0) {
}

aria100::aria100(double InSpeed, int InDirection):speed{InSpeed},direction{InDirection} {
    fuel=10;
}

void aria100::showDetails() const {
    std::cout << "speed: " << speed << "  direction: " << direction <<std::endl;
    displayAmountOfFuel();
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

void aria100::displayAmountOfFuel() const {
    std::cout << fuel << "/10 is full" << std::endl;
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
    int intensity;
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
            gasPedal(charIntensity);
        } else if (op == 'b') {
            std::cout << "Enter the intensity of pressing the brake pedal from 1 to 5\n";
            std::cin >> charIntensity;
            charIntensity = (char) tolower(charIntensity);
            brakePedal(charIntensity);
        } else if (op == 't') {
            char _direction;
            std::cout << "Enter the angle of your turn\n";
            std::cin >> intensity;
            intensity = abs(intensity);
            std::cout << "Enter the direction of your turn(left or right)\n";
            std::cout << "Enter l for left or r for right\n";
            std::cin >> _direction;
            _direction = (char) tolower(_direction);
            turn(intensity,_direction);
        } else if (op == 'd')
            showDetails();
        else if(op=='s')
            setting();
        else if (op == 'e') break;
        else std::cout << "Wrong input\n";
    }
}

void aria100::gasAction(char c) {
    if (c == 'e') {
        speed +=5*extremeGasLevel;
        std::cout << "You have committed extreme gas" << std::endl;
    } else {
        speed +=5*moderateGasLevel;
        std::cout << "You have committed moderate gas" << std::endl;
    }
}

void aria100::brakeAction(char c) {
    if (c == 'e') {
        speed -=5*extremeBrakeLevel;
        std::cout << "You have committed extreme brake" << std::endl;
    } else {
        speed -=5*moderateBrakeLevel;
        std::cout << "You have committed moderate brake" << std::endl;
    }
}

int aria100::directionCalculator(int input)  {
    direction += input;
    if (direction > 180) {
        direction -= 360;
        return direction;
    } else if (direction < -180) {
        direction += 360;
        return direction;
    } return direction;
}

void aria100::extreme_Gas() {
    fuel--;
    gasAction('e');
    if (speed >= 120) {
        std::cout << "Your speed is over the limit" << std::endl;
        std::cout << "Please slow down" << std::endl<< std::endl;
    }
}

void aria100::moderate_Gas() {
    fuel--;
    gasAction('m');
    if (speed >= 120) {
        std::cout << "Your speed is over the limit" << std::endl;
        std::cout << "Please slow down" << std::endl;
    }
}

void aria100::extreme_Brake() {
    fuel--;
    brakeAction('e');
}

void aria100::moderate_Brake() {
    fuel--;
    brakeAction('m');
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

void aria100::gasPedal(char intensity) {
    if (intensity == 'e')
        extreme_Gas();
    else if (intensity == 'm')
        moderate_Gas();
    else {
        std::cout << "Wrong input\n";
        std::cout << "Your input should be m or e\n";
    }
}

void aria100::brakePedal(char intensity) {
    if (intensity == 'e')
        extreme_Brake();
    else if (intensity == 'm')
        moderate_Brake();
    else {
        std::cout << "Wrong input\n";
        std::cout << "Your input should be m or e \n";
    }
}

void aria100::turn(int intensity, char _direction) {
    if (intensity >= 40 && intensity <= 80) {
        if (_direction == 'l') {
            extreme_Turn_Left();
            directionCalculator(-1 * intensity);
        } else if (_direction == 'r') {
            extreme_Turn_Right();
            directionCalculator(intensity);
        } else std::cout << "Wrong input for direction\n";
    } else if (intensity < 40) {
        if (_direction == 'l') {
            moderate_Turn_Left();
            directionCalculator(-1 * intensity);
        } else if (_direction == 'r') {
            moderate_Turn_Right();
            directionCalculator(intensity);
        } else std::cout << "Wrong input for direction\n";
    } else {
        std::cout << "Wrong input\n";
        std::cout << "Your input for angle should be between -80 to 80\n";
    }
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

bool aria100::checkGasLevels(int level, char type) {
    if (type == 'e') {
        if (level > moderateGasLevel && level <= 5)
            return true;
        return false;
    }
    if (level < extremeGasLevel && level >= 1)
        return true;
    return false;
}

bool aria100::checkBrakeLevels(int level, char type) {
    if (type == 'e') {
        if (level > moderateBrakeLevel && level <= 5)
            return true;
        return false;
    }
    if (level < extremeBrakeLevel && level <= 1)
        return true;
    return false;
}

