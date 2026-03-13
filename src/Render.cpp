#include "Render.hpp"
#include "Board.hpp"
#include <iostream>

Render::Render(const Board& board) : mBoard(board.getBoard()) {
    printBoard();
}

Render::~Render() { }

void Render::printBoard() {
    int sqrCount = 0;
    for (size_t i = 0; i < mBoard.size(); ++i) {
        if (!(i % 8)) { std::cout << '\n' << 8-((i/8)) << ' '; ++sqrCount;}
        bool squareColor = sqrCount % 2;
        std::cout << toGlyph(mBoard[i], squareColor) << ' ';
        sqrCount++;
    }
    std::cout << '\n' << "  A B C D E F G H \n";

}

const char* Render::toGlyph(const char c, bool sqr) {
    switch (c) {
        case '.':
            if (sqr) {
                return "\u25A0";
            } else {
                return "\u25A1";
            }
            
        break;
        //* White
        case 'K': return "\u265A"; break;
        case 'Q': return "\u265B"; break;
        case 'R': return "\u265C"; break;
        case 'B': return "\u265D"; break;
        case 'N': return "\u265E"; break;
        case 'P': return "\u265F"; break;
        //* Black
        case 'k': return "\u2654"; break;
        case 'q': return "\u2655"; break;
        case 'r': return "\u2656"; break;
        case 'b': return "\u2657"; break;
        case 'n': return "\u2658"; break;
        case 'p': return "\u2659"; break;

        default: return "."; break;
    }
};