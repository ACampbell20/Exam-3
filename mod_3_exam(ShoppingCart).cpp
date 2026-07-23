#include <iostream>
#include "ShoppingCart.h"

using namespace std;

int main(){
    ShoppingCart cart(5);

    ShoppingCart::setSalesTax(0.095);

    Item item1("Milk",3.49);
    Item item2("Bread",2.99);
    Item item3("Eggs",4.25);

    cart = cart + item1;
    cart = cart + item2;
    cart = cart + item3;

    cout << "Shopping Cart" << endl;

    for(int i=0;i<cart.getItemCount();i++){
        cout << cart[i].getName()
             << " $"
             << cart[i].getPrice()
             << endl;
    }

    ShoppingCart cart2(cart);

    cout << endl;
    cout << "Copied Cart" << endl;

    for(int i=0;i<cart2.getItemCount();i++){
        cout << cart2[i].getName()
             << " $"
             << cart2[i].getPrice()
             << endl;
    }

    ShoppingCart cart3;
    cart3 = cart;

    cout << endl;
    cout << "Assigned Cart" << endl;

    for(int i=0;i<cart3.getItemCount();i++){
        cout << cart3[i].getName()
             << " $"
             << cart3[i].getPrice()
             << endl;
    }
}
