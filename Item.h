#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item{
private:
    string name;
    double price;

public:
    Item();
    Item(string name, double price);

    string getName() const;
    double getPrice() const;

    void setName(string name);
    void setPrice(double price);
};

#endif
