#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>
using namespace std;

class Processor{
private:
    string model;
    double clockSpeedGHz;
    static int totalProcessorsCreated;

public:
    Processor();
    Processor(string model, double clockSpeedGHz);

    string getModel() const;
    double getClockSpeedGHz() const;

    void setModel(string model);
    void setClockSpeedGHz(double clockSpeedGHz);

    static int getProcessorCount();
};

#endif
