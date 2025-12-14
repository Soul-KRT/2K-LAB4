#include "Game.h"
#include "IFormattable.h"
#include "DeckObjectAdapter.h"
#include "DeckClassAdapter.h"

int main() {
    setlocale(LC_ALL, "Russian");

    Game game;
    int again = 1;
    while (again == 1) {
        game.playRound();
        std::cout << "Сыграть ещё? (1/2): ";
        std::cin >> again;
    }

    Deck d;
    d.shuffle();

    DeckObjectAdapter objAdapter(d);
    DeckClassAdapter  classAdapter;

    prettyPrint(objAdapter);
    prettyPrint(classAdapter);

    return 0;
}
