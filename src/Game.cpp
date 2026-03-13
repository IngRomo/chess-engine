#include "Game.hpp"

Game::Game(){
    std::cout << "Created game." << std::endl;
}

Game::~Game(){
    std::cout << "Game ended." << std::endl;
}

void Game::makeMove(int from, int to) {
    mBoard.applyMove(from, to);
}
