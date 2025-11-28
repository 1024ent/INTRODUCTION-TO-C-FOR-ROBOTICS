#include <iostream>
#include <string>
using namespace std;

// ============================================================
// ARRAYS
// ============================================================
int array_demo_basic() {
    cout << "\n=== Basic Array Demo ===" << endl;

    int distances[5] = {12, 9, 7, 15, 20};

    cout << "Sensor values:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "distances[" << i << "] = " << distances[i] << endl;
    }

    return 0;
}

int array_modify_demo() {
    cout << "\n=== Modify Array Values ===" << endl;

    int motorSpeeds[4] = {50, 60, 70, 80};

    cout << "Original speeds:" << endl;
    for (int s : motorSpeeds) {
        cout << s << " ";
    }
    cout << endl;

    // Increase each speed by 10
    for (int i = 0; i < 4; i++) {
        motorSpeeds[i] += 10;
    }

    cout << "Updated speeds:" << endl;
    for (int s : motorSpeeds) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

// ============================================================
// STRUCT + TYPEDEF
// ============================================================

// Traditional C-style struct with typedef
typedef struct Motor {
    int speed;
    bool reversed;
} Motor;

// Another typedef struct example for sensors
typedef struct Sensor {
    int value;
} Sensor;

int struct_demo_basic() {
    cout << "\n=== Struct Demo (Motor with typedef) ===" << endl;

    Motor leftMotor;
    leftMotor.speed = 100;
    leftMotor.reversed = false;

    cout << "Left Motor Speed: " << leftMotor.speed << endl;
    cout << "Reversed? " << (leftMotor.reversed ? "Yes" : "No") << endl;

    return 0;
}

void setMotorSpeed(Motor &m, int speed) {
    m.speed = speed;
}

int struct_modify_demo() {
    cout << "\n=== Struct Modify Demo ===" << endl;

    Motor rightMotor = {80, false};

    cout << "Before: speed = " << rightMotor.speed << endl;

    setMotorSpeed(rightMotor, 120);

    cout << "After: speed = " << rightMotor.speed << endl;

    return 0;
}

// ============================================================
// ENUM
// ============================================================
enum RobotMode {
    IDLE,
    MOVING,
    TURNING,
    STOPPED
};

int enum_demo_basic() {
    cout << "\n=== Enum Demo ===" << endl;

    RobotMode mode = MOVING;

    cout << "Current mode: ";

    switch (mode) {
        case IDLE:     cout << "IDLE"; break;
        case MOVING:   cout << "MOVING"; break;
        case TURNING:  cout << "TURNING"; break;
        case STOPPED:  cout << "STOPPED"; break;
        default:       cout << "UNKNOWN"; break;
    }

    cout << endl;

    return 0;
}

// State machine simulation using enum
int enum_state_machine_demo() {
    cout << "\n=== Robot State Machine Demo ===" << endl;

    RobotMode mode = IDLE;

    for (int i = 0; i < 4; i++) {
        cout << "Cycle " << i << ": ";

        switch (mode) {
            case IDLE:
                cout << "Robot is idle. Starting movement..." << endl;
                mode = MOVING;
                break;

            case MOVING:
                cout << "Robot moving forward. Now turning..." << endl;
                mode = TURNING;
                break;

            case TURNING:
                cout << "Robot turning. Preparing to stop..." << endl;
                mode = STOPPED;
                break;

            case STOPPED:
                cout << "Robot stopped. Returning to idle..." << endl;
                mode = IDLE;
                break;
        }
    }

    return 0;
}

// ============================================================
// FULL ROBOT SIMULATION (Arrays + Struct + Enum)
// ============================================================
int robot_simulation_demo() {
    cout << "\n=== Full Robot Simulation (Using typedef structs) ===" << endl;

    // 1. Array of 4 sensors
    Sensor sensors[4] = { {12}, {8}, {15}, {20} };

    cout << "Sensor readings:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << " Sensor " << i << ": " << sensors[i].value << endl;
    }

    // 2. Two motors
    Motor left = {0, false};
    Motor right = {0, false};

    // 3. Robot mode
    RobotMode mode = IDLE;

    cout << "\nDetermining robot action based on front sensor..." << endl;

    int frontDist = sensors[0].value;

    if (frontDist < 10) {
        mode = STOPPED;
    } else {
        mode = MOVING;
    }

    // 4. Act based on mode
    switch (mode) {
        case MOVING:
            setMotorSpeed(left, 100);
            setMotorSpeed(right, 100);
            cout << "Robot moving forward at speed 100" << endl;
            break;

        case STOPPED:
            setMotorSpeed(left, 0);
            setMotorSpeed(right, 0);
            cout << "Obstacle ahead! Robot stopped." << endl;
            break;

        default:
            cout << "Robot idle." << endl;
            break;
    }

    // 5. Print motor status
    cout << "Left motor: " << left.speed << endl;
    cout << "Right motor: " << right.speed << endl;

    return 0;
}

// ============================================================
// MAIN
// ============================================================
int main() {

    // Uncomment to run step-by-step during the workshop:
    // array_demo_basic();
    // array_modify_demo();
    // struct_demo_basic();
    // struct_modify_demo();
    // enum_demo_basic();
    // enum_state_machine_demo();
    robot_simulation_demo(); // Full integration demo

    return 0;
}
