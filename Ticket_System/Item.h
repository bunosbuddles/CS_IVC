#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;

class Item
{
    public: 
        Item();
        Item(string name, double price, string description, int quantity);
        ~Item();
        Item(const Item& temp);
        void printItem();
        void setDescription();
        void setPrice();
        void setQuantity();
        double getTotal();
    private:
        string name;
        double price;
        string description;
        int quantity;
};


#endif