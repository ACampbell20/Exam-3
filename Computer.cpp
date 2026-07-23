#include "Computer.h"

Computer::Computer(){
    brand = "";
    cpu = new Processor();
}

Computer::Computer(string brand, Processor* cpu)
{
    this->brand = brand;
    this->cpu = new Processor(cpu->getModel(), cpu->getClockSpeedGHz());
}

Computer::Computer(string brand, string model, double clockSpeedGHz){
    this->brand = brand;
    cpu = new Processor(model, clockSpeedGHz);
}

Computer::Computer(const Computer& other){
    brand = other.brand;
    cpu = new Processor(other.cpu->getModel(),
                        other.cpu->getClockSpeedGHz());
}

Computer::~Computer()
{
    delete cpu;
}

Computer& Computer::operator=(const Computer& other){
    if (this != &other)
    {
        brand = other.brand;

        delete cpu;

        cpu = new Processor(other.cpu->getModel(),
                            other.cpu->getClockSpeedGHz());
    }

    return *this;
}

string Computer::getBrand() const{
    return brand;
}

Processor* Computer::getCPU() const{
    return cpu;
}

void Computer::setBrand(string brand)
{
    this->brand = brand;
}

void Computer::setCPU(Processor* cpu){
    delete this->cpu;

    this->cpu = new Processor(cpu->getModel(),
                              cpu->getClockSpeedGHz());
}

bool Computer::operator==(const Computer& other) const{
    return brand == other.brand &&
           cpu->getClockSpeedGHz() == other.cpu->getClockSpeedGHz();
}

ostream& operator<<(ostream& out, const Computer& computer){
    out << "Brand: " << computer.brand << endl;
    out << "Processor: " << computer.cpu->getModel() << endl;
    out << "Clock Speed: " << computer.cpu->getClockSpeedGHz() << " GHz";

    return out;
}
