#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include "Item.h"

using namespace std;

class ShoppingCart{
private:
    Item* itemList;
    int itemCount;
    int capacity;
    static double salesTaxRate;

public:
    ShoppingCart();
    ShoppingCart(int capacity);

    ShoppingCart(const ShoppingCart& other);

    ~ShoppingCart();

    ShoppingCart& operator=(const ShoppingCart& other);

    Item* getItemList() const;
    int getItemCount() const;
    int getCapacity() const;

    void setCapacity(int capacity);

    static void setSalesTax(double taxRate);

    ShoppingCart operator+(const Item& item);

    Item& operator[](int index);
};
#endif
