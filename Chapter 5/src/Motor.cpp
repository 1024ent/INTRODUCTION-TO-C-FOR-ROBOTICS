// To compile the code, type:
// g++ src/*.cpp main.cpp -Iinclude -o robot_demo
#include "Motor.h"
#include <iostream>
using namespace std;

Motor::Motor() : speed(0), reversed(false) {}

Motor::Motor(int s, bool r) : speed(s), reversed(r) {}

void Motor::setSpeed(int s) { speed = s; }
int Motor::getSpeed() const { return speed; }

void Motor::reverse() { reversed = !reversed; }
void Motor::stop() { speed = 0; }

void Motor::printStatus() const {
    cout << "Motor speed: " << speed
         << " | Direction: " << (reversed ? "Reverse" : "Forward")
         << endl;
}
