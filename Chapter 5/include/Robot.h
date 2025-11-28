#ifndef ROBOT_H
#define ROBOT_H

#include "Motor.h"

class Robot {
private:
    Motor left;
    Motor right;

public:
    Robot();
    void driveForward(int speed);
    void stop();
    void printStatus();
};

#endif
