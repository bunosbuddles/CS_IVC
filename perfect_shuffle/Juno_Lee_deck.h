#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>
using namespace std;

struct Card
{
    string value;
    string type;
};

class Deck
{
    private: 
        Card *deck;
    public:
        Deck();
        ~Deck();
        void perfectShuffle();
        void printCard();
        bool compare(Card deckComp[]);
        Card* getDeck();
};

#endif