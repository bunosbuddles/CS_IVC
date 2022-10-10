#ifndef TICKET_H
#define TICKET_H
#include <string>
#include "Item.h"
#include "Store.h"
#include "DateTime.h"

using namespace std;

class Ticket
{
    public:
        Ticket(Item *Items, Store store, DateTime datetime, int orderNumber);
        ~Ticket();
        double getTaxAmount();
        double getFinalPrice();
        void printTicket();
    private:
        Item *Items;
        Store store;
        DateTime datetime;
        int orderNumber;
};
#endif