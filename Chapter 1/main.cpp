#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------
// Basic I/O and Variables
// -----------------------------------------------
int basic_io() {
    cout << "=== Basic I/O and Variables ===" << endl;

    int a = 10;
    double b = 3.14;
    char c = 'R';
    string name = "Robot";

    cout << "Integer a = " << a << endl;
    cout << "Double b = " << b << endl;
    cout << "Char c = " << c << endl;
    cout << "String name = " << name << endl;

    return 0;
}

// -----------------------------------------------
// Arithmetic and Comparisons
// -----------------------------------------------
int arithmetic_demo() {
    cout << "\n=== Arithmetic Operators ===" << endl;

    int x = 7, y = 3;
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;

    cout << "\n=== Comparison Operators ===" << endl;
    cout << "x > y ? " << (x > y) << endl;
    cout << "x < y ? " << (x < y) << endl;
    cout << "x == y ? " << (x == y) << endl;

    return 0;
}

// -----------------------------------------------
// If / Else + Nested If
// -----------------------------------------------
int if_else_demo() {
    cout << "\n=== If-Else and Nested If-Else ===" << endl;

    int distance = 12; // Simulated sensor value
    cout << "Distance = " << distance << endl;

    if (distance < 5) {
        cout << "Object VERY close! Stop immediately!" << endl;
    } 
    else if (distance < 10) {
        cout << "Object close. Slow down." << endl;

        // Nested If
        if (distance < 8) {
            cout << "(Nested) Obstacle approaching fast!" << endl;
        }
    } 
    else {
        cout << "Path clear." << endl;
    }

    return 0;
}

// -----------------------------------------------
// Switch Case Demo
// -----------------------------------------------
int switch_demo() {
    cout << "\n=== Switch Case ===" << endl;

    int mode = 2; // pretend: 0=IDLE, 1=MOVING, 2=TURNING
    cout << "Mode = " << mode << endl;

    switch (mode) {
        case 0:
            cout << "Robot is IDLE." << endl;
            break;
        case 1:
            cout << "Robot is MOVING forward." << endl;
            break;
        case 2:
            cout << "Robot is TURNING." << endl;
            break;
        default:
            cout << "Unknown mode!" << endl;
            break;
    }

    return 0;
}

// -----------------------------------------------
// For Loops (multiple variations)
// -----------------------------------------------
int for_loop_demo() {
    cout << "\n=== For Loop Variations ===" << endl;

    cout << "\n1. Classic increasing for loop" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << endl;
    }

    cout << "\n2. Decreasing for loop" << endl;
    for (int i = 5; i > 0; i--) {
        cout << "i = " << i << endl;
    }

    cout << "\n3. Step size of 2" << endl;
    for (int i = 0; i <= 10; i += 2) {
        cout << "i = " << i << endl;
    }

    cout << "\n4. Range-based for loop (C++11+)" << endl;
    int values[5] = {10, 20, 30, 40, 50};
    for (int v : values) {
        cout << "Value = " << v << endl;
    }

    return 0;
}

// -----------------------------------------------
// While Loop + Do-While Loop
// -----------------------------------------------
int while_loop_demo() {
    cout << "\n=== While Loop ===" << endl;
    
    int counter = 0;
    while (counter < 3) {
        cout << "Counter = " << counter << endl;
        counter++;
    }

    cout << "\n=== Do-While Loop (runs at least once) ===" << endl;

    int d = 0;
    do {
        cout << "d = " << d << endl;
        d++;
    } while (d < 3);

    return 0;
}

// -----------------------------------------------
// MAIN
// -----------------------------------------------
int main() {

    // Uncomment line by line during workshop to demonstrate each part.

    // basic_io();
    // arithmetic_demo();
    // if_else_demo();
    // switch_demo();
    // for_loop_demo();
    while_loop_demo();

    return 0;
}
