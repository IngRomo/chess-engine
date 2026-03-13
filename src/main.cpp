#include <iostream>

#include "Game.hpp"
#include "Render.hpp"

int main(int argc, char* argv[]) {

    Game mGame;
    Render::printBoard(mGame.getBoardArray());
    mGame.makeMove(52,36);
    Render::printBoard(mGame.getBoardArray());
}