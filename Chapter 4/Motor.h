#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
using namespace std;

class Motor {
private:
    int speed;
    bool reversed;

public:
    Motor();                 // default constructor
    Motor(int s, bool r);    // constructor with parameters

    void setSpeed(int s);
    int getSpeed() const;

    void reverseDirection();
    bool isReversed() const;

    void stop();
    void printStatus() const;
};

#endif
