#include <iostream>
using namespace std;

// ============================================================
// 1. Basic Reference Demo
// ============================================================
int reference_demo() {
    cout << "\n=== Reference Demo ===" << endl;

    int speed = 50;
    int &refSpeed = speed;

    cout << "Original speed: " << speed << endl;
    refSpeed = 100; // modify through reference
    cout << "Updated speed (using ref): " << speed << endl;

    return 0;
}

// ============================================================
// 2. Passing by Reference (Practical: Motor Speed Modify)
// ============================================================
typedef struct Motor {
    int speed;
    bool reversed;
} Motor;

// Function modifies real motor
void setMotorSpeed(Motor &m, int newSpeed) {
    m.speed = newSpeed;
}

int pass_by_reference_demo() {
    cout << "\n=== Passing Struct by Reference Demo ===" << endl;

    Motor left = {0, false};

    cout << "Before: " << left.speed << endl;
    setMotorSpeed(left, 120);  // modifies original
    cout << "After: " << left.speed << endl;

    return 0;
}

// ============================================================
// 3. Basic Pointer Demo
// ============================================================
int pointer_demo_basic() {
    cout << "\n=== Basic Pointer Demo ===" << endl;

    int value = 42;
    int *ptr = &value;

    cout << "Value: " << value << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;

    // modify using pointer
    *ptr = 100;
    cout << "Updated value via pointer: " << value << endl;

    return 0;
}

// ============================================================
// 4. Pointer to Struct (Practical Motor Example)
// ============================================================
int pointer_to_struct_demo() {
    cout << "\n=== Pointer to Struct Demo ===" << endl;

    Motor m = {60, false};
    Motor *mp = &m;

    cout << "Motor speed (direct): " << m.speed << endl;
    cout << "Motor speed (pointer): " << mp->speed << endl;

    mp->speed = 150; // modify motor through pointer
    cout << "Updated speed via pointer: " << m.speed << endl;

    return 0;
}

// ============================================================
// 5. Pointers and Arrays (useful for reading sensors)
// ============================================================
int pointer_array_demo() {
    cout << "\n=== Pointer + Array Demo ===" << endl;

    int sensorReadings[4] = {12, 8, 15, 20};
    int *ptr = sensorReadings; // array decays to pointer

    cout << "Sensor readings using pointer indexing:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "  *(ptr + " << i << ") = " << *(ptr + i) << endl;
    }

    return 0;
}

// ============================================================
// 6. Passing Pointer to Function (Modify Sensor Reading)
// ============================================================
void boostSensorValue(int *sensor) {
    *sensor += 5; // increase the actual value
}

int pass_pointer_to_function_demo() {
    cout << "\n=== Passing Pointer to Function Demo ===" << endl;

    int frontSensor = 10;

    cout << "Before: " << frontSensor << endl;
    boostSensorValue(&frontSensor);
    cout << "After boosting: " << frontSensor << endl;

    return 0;
}

// ============================================================
// 7. Dynamic Memory (Only simple demo, practical microcontroller note)
// ============================================================
int dynamic_memory_demo() {
    cout << "\n=== Dynamic Memory Demo (Simple) ===" << endl;

    int *val = new int(25);
    cout << "Value stored in dynamic memory: " << *val << endl;

    // always free memory
    delete val;

    cout << "Dynamic memory cleaned up (delete)." << endl;

    return 0;
}

// ============================================================
// 8. Combined Robot Example (Pointers + References)
// ============================================================
int robot_pointer_reference_demo() {
    cout << "\n=== Robot Pointer + Reference Simulation ===" << endl;

    Motor left = {0, false};
    Motor right = {0, false};

    Motor *leftPtr = &left; // pointer to motor
    Motor &rightRef = right; // reference to motor

    cout << "Setting left motor via pointer..." << endl;
    leftPtr->speed = 100;

    cout << "Setting right motor via reference..." << endl;
    rightRef.speed = 100;

    cout << "Left speed: " << left.speed << endl;
    cout << "Right speed: " << right.speed << endl;

    return 0;
}

// ============================================================
// MAIN
// ============================================================
int main() {

    // Call functions for workshop demo
    // reference_demo();
    // pass_by_reference_demo();
    // pointer_demo_basic();
    // pointer_to_struct_demo();
    // pointer_array_demo();
    // pass_pointer_to_function_demo();
    // dynamic_memory_demo();
    robot_pointer_reference_demo();

    return 0;
}
