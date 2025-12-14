#pragma once
#include "IFormattable.h"
#include "Deck.h"

class DeckObjectAdapter : public IFormattable {
    const Deck& deck;      // ссылка на существующую колоду
public:
    DeckObjectAdapter(const Deck& d) : deck(d) {}

    std::string format() const override {
        std::string s = "Deck (объект-адаптер), карт осталось: ";
        s += std::to_string(deck.sizeLeft());
        s += "\n—одержимое: ";

        // если есть доступ к вектору карт Ч можно красиво вывести первые N
        // здесь дл€ простоты покажем только количество
        return s;
    }
};
