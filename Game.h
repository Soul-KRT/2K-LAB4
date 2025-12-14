#pragma once
#include "Deck.h"
#include "Dealer.h"
#include "HumanPlayer.h"

class Game {
    Deck decks[4];
    Dealer dealer;
    HumanPlayer player;
public:
    Game();

    void playRound();

private:
    Deck& chooseDeck();
    void printDeckSizes();
};
