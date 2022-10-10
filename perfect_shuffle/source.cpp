#include <iostream>
#include <string>
#include "Juno_Lee_deck.cpp"
using namespace std;

int main()
{
    Deck *myDeck = new Deck(); 
    Deck *yourDeck = new Deck();
    cout << "Before shuffle" << endl;
    myDeck->printCard();
    myDeck->perfectShuffle();
    cout << endl << endl; 
    cout << "After Shuffle" << endl;
    myDeck->printCard();
    myDeck->compare(yourDeck->getDeck());
    return 0; 
}