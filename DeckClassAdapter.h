#pragma once
#include "IFormattable.h"
#include "Deck.h"

class DeckClassAdapter : public Deck, public IFormattable {
public:
    DeckClassAdapter() : Deck() {}

    std::string format() const override {
        std::string s = "Deck (класс-адаптер), карт осталось: ";
        s += std::to_string(sizeLeft());
        s += "\n";
        return s;
    }
};
