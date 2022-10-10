#include <iostream>
#include <string>
#include "Juno_Lee_deck.h"
using namespace std;


Deck::Deck()
{
    deck = new Card[52];
    string types[4] = {"Diamond", "Clubs", "Heart", "Spade"};
    string values[13] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    int cardCount = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            Card temp;
            temp.type = types[i];
            temp.value = values[j];
            deck[cardCount] = temp;
            cardCount++;
        }
    }
};

Deck::~Deck(){};

void Deck::perfectShuffle()
{
    Card *tempDeck = new Card[52]; 
    int j = 0;
    int k = 0;
    for(int i = 0 ; i < 52; i+=2)
    {
        tempDeck[i] = deck[j];
        j++;
    }
    for(int i = 1; i < 52; i+=2)
    {
        tempDeck[i] = deck[26 + k];
        k++;
    }
    deck = tempDeck;
};

void Deck::printCard()
{
    for(int i = 0; i < 52; i++)
    {
        cout << "#" << deck[i].value << " Shape: " << deck[i].type << endl; 
    }
};

bool Deck::compare(Card deckComp[])
{
    int differences = 0;
    for (int i = 0; i < 52; i++)
    {
        if (deck[i].type != deckComp[i].type || deck[i].value != deckComp[i].value)
        {
            differences++;
        }
    }
    cout << "There are " << differences << " differences in these two decks." << endl;
    return true;
};

Card* Deck::getDeck()
{
    return deck;
};