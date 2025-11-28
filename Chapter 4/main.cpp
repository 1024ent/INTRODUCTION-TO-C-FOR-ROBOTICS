// Paste this to compile the file:
// g++ main.cpp Motor.cpp -o motor_demo.exe
#include <iostream>
using namespace std;

#include "Motor.h"

// ============================================================
// 1. Constructor Demo
// ============================================================
int constructor_demo() {
    cout << "\n=== Constructor Demo ===" << endl;

    Motor m1; // default constructor
    m1.printStatus();

    Motor m2(120, false); // parameter constructor
    m2.printStatus();

    return 0;
}

// ============================================================
// 2. Encapsulation Demo
// ============================================================
int encapsulation_demo() {
    cout << "\n=== Encapsulation Demo ===" << endl;

    Motor armMotor;

    armMotor.setSpeed(150);
    cout << "Speed is now: " << armMotor.getSpeed() << endl;

    armMotor.printStatus();

    return 0;
}

// ============================================================
// 3. Method Demo (reverse, stop, etc.)
// ============================================================
int method_demo() {
    cout << "\n=== Method Demo ===" << endl;

    Motor wheel(80, false);
    wheel.printStatus();

    cout << "Reversing motor..." << endl;
    wheel.reverseDirection();
    wheel.printStatus();

    cout << "Stopping motor..." << endl;
    wheel.stop();
    wheel.printStatus();

    return 0;
}

// ============================================================
// 4. Combined Robot Example
// ============================================================
int robot_oop_demo() {
    cout << "\n=== Robot OOP Simulation ===" << endl;

    Motor left(100, false);
    Motor right(100, false);

    cout << "\nInitial status:" << endl;
    left.printStatus();
    right.printStatus();

    cout << "\nBoosting left motor to 150..." << endl;
    left.setSpeed(150);
    left.printStatus();
    right.printStatus();

    cout << "\nReversing right motor..." << endl;
    right.reverseDirection();
    left.printStatus();
    right.printStatus();

    cout << "\nStopping both motors..." << endl;
    left.stop();
    right.stop();
    left.printStatus();
    right.printStatus();

    return 0;
}

// ============================================================
// MAIN
// ============================================================
int main() {

    // constructor_demo();
    // encapsulation_demo();
    // method_demo();
    robot_oop_demo();

    return 0;
}
