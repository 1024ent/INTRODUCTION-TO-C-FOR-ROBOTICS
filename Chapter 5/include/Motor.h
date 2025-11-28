#ifndef MOTOR_H
#define MOTOR_H

class Motor {
private:
    int speed;
    bool reversed;

public:
    Motor();
    Motor(int s, bool r);

    void setSpeed(int s);
    int getSpeed() const;

    void reverse();
    void stop();
    void printStatus() const;
};

#endif
