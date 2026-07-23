#include "ShoppingCart.h"
#include <stdexcept>

double ShoppingCart::salesTaxRate = 0.0;

ShoppingCart::ShoppingCart(){
    capacity = 5;
    itemCount = 0;
    itemList = new Item[capacity];
}

ShoppingCart::ShoppingCart(int capacity){
    this->capacity = capacity;
    itemCount = 0;
    itemList = new Item[capacity];
}

ShoppingCart::ShoppingCart(const ShoppingCart& other){
    capacity = other.capacity;
    itemCount = other.itemCount;

    itemList = new Item[capacity];

    for(int i=0;i<itemCount;i++)
        itemList[i] = other.itemList[i];
}

ShoppingCart::~ShoppingCart(){
    delete[] itemList;
}

ShoppingCart& ShoppingCart::operator=(const ShoppingCart& other){
    if(this != &other){
        delete[] itemList;

        capacity = other.capacity;
        itemCount = other.itemCount;

        itemList = new Item[capacity];

        for(int i=0;i<itemCount;i++)
            itemList[i] = other.itemList[i];
    }

    return *this;
}

Item* ShoppingCart::getItemList() const{
    return itemList;
}

int ShoppingCart::getItemCount() const{
    return itemCount;
}

int ShoppingCart::getCapacity() const
{
    return capacity;
}

void ShoppingCart::setCapacity(int capacity){
    this->capacity = capacity;
}

void ShoppingCart::setSalesTax(double taxRate)
{
    salesTaxRate = taxRate;
}

ShoppingCart ShoppingCart::operator+(const Item& item){
    ShoppingCart temp(*this);

    if(temp.itemCount < temp.capacity)
    {
        temp.itemList[temp.itemCount] = item;
        temp.itemCount++;
    }

    return temp;
}

Item& ShoppingCart::operator[](int index){
    if(index < 0 || index >= itemCount)
        throw out_of_range("Index out of range.");

    return itemList[index];
}
