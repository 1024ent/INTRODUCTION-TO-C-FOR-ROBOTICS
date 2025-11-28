#include "Motor.h"

// Default constructor
Motor::Motor() {
    speed = 0;
    reversed = false;
}

// Constructor with parameters
Motor::Motor(int s, bool r) {
    speed = s;
    reversed = r;
}

void Motor::setSpeed(int s) {
    speed = s;
}

int Motor::getSpeed() const {
    return speed;
}

void Motor::reverseDirection() {
    reversed = !reversed;
}

bool Motor::isReversed() const {
    return reversed;
}

void Motor::stop() {
    speed = 0;
}

void Motor::printStatus() const {
    cout << "Speed: " << speed 
         << " | Direction: " << (reversed ? "Reversed" : "Forward")
         << endl;
}
