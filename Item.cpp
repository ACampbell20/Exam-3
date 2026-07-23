#include "Item.h"

Item::Item()
{
    name = "";
    price = 0;
}

Item::Item(string name, double price)
{
    this->name = name;
    this->price = price;
}

string Item::getName() const
{
    return name;
}

double Item::getPrice() const
{
    return price;
}

void Item::setName(string name)
{
    this->name = name;
}

void Item::setPrice(double price)
{
    this->price = price;
}
