#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "Processor.h"

using namespace std;

class Computer{
private:
    string brand;
    Processor* cpu;

public:
    Computer();
    Computer(string brand, Processor* cpu);
    Computer(string brand, string model, double clockSpeedGHz);

    Computer(const Computer& other);

    ~Computer();

    Computer& operator=(const Computer& other);

    string getBrand() const;
    Processor* getCPU() const;

    void setBrand(string brand);
    void setCPU(Processor* cpu);

    bool operator==(const Computer& other) const;

    friend ostream& operator<<(ostream& out, const Computer& computer);
};

#endif
