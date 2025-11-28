#include <iostream>
using namespace std;

#include "Robot.h"

int main() {
    Robot bot;

    bot.driveForward(120);
    bot.printStatus();

    cout << "\nStopping robot...\n";
    bot.stop();
    bot.printStatus();

    return 0;
}
