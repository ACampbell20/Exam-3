#include "Processor.h"

int Processor::totalProcessorsCreated = 0;

Processor::Processor(){
    model = "";
    clockSpeedGHz = 0.0;
    totalProcessorsCreated++;
}

Processor::Processor(string model, double clockSpeedGHz){
    this->model = model;
    this->clockSpeedGHz = clockSpeedGHz;
    totalProcessorsCreated++;
}

string Processor::getModel() const{
    return model;
}

double Processor::getClockSpeedGHz() const{
    return clockSpeedGHz;
}

void Processor::setModel(string model){
    this->model = model;
}

void Processor::setClockSpeedGHz(double clockSpeedGHz){
    this->clockSpeedGHz = clockSpeedGHz;
}

int Processor::getProcessorCount(){
    return totalProcessorsCreated;
}
