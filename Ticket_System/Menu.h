#ifndef MENU_H
#define MENU_H
#include <string>
#include "Item.h"
using namespace std;

class Menu
{
    public: 
        Menu();
        Menu(Item *items);
        ~Menu();
        void printMenu();
        void addMenu(Item item);
        void deleteMenu(Item item);
    private:
        Item *items;
};

#endif