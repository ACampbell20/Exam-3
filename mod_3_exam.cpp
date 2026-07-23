#include <iostream>
#include "Computer.h"

using namespace std;

int main(){
    Processor p1("Intel i7-14700K", 3.6);

    Computer c1("Asus", &p1);

    Computer c2("Asus", "AMD Ryzen 7 7700X", 4.5);

    cout << "Computer 1" << endl;
    cout << c1 << endl << endl;

    cout << "Computer 2" << endl;
    cout << c2 << endl << endl;

    Computer c3(c1);

    cout << "Computer 3 (Copy Constructor)" << endl;
    cout << c3 << endl << endl;

    Computer c4;
    c4 = c2;

    cout << "Computer 4 (Assignment Operator)" << endl;
    cout << c4 << endl << endl;

    if (c1 == c3)
        cout << "Computer 1 and Computer 3 are equal." << endl;
    else
        cout << "Computer 1 and Computer 3 are NOT equal." << endl;

    if (c1 == c2)
        cout << "Computer 1 and Computer 2 are equal." << endl;
    else
        cout << "Computer 1 and Computer 2 are NOT equal." << endl;

    cout << endl;
    cout << "Total Processors Created: "
         << Processor::getProcessorCount() << endl;

}
