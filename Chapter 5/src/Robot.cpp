#include "Robot.h"
#include <iostream>
using namespace std;

Robot::Robot() : left(0, false), right(0, false) {}

void Robot::driveForward(int speed) {
    left.setSpeed(speed);
    right.setSpeed(speed);
}

void Robot::stop() {
    left.stop();
    right.stop();
}

void Robot::printStatus() {
    cout << "Left Motor -> ";
    left.printStatus();
    cout << "Right Motor -> ";
    right.printStatus();
}
