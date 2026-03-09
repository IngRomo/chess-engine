#include <iostream>
#include <array>
#include <vector>

using BoardArray = std::array<char, 64>;

class Render {
private:
    BoardArray mBoard{};
    const  BoardArray kInitialBoardState   {'r','n','b','q','k','b','n','r',
                                            'p','p','p','p','p','p','p','p',
                                            '.','.','.','.','.','.','.','.',
                                            '.','.','.','.','.','.','.','.',
                                            '.','.','.','.','.','.','.','.',
                                            '.','.','.','.','.','.','.','.',
                                            'P','P','P','P','P','P','P','P',
                                            'R','N','B','Q','K','B','N','R'};
    
    void initializeBoard();
    void assignBoard(BoardArray&, const BoardArray&);
    const char *toGlyph(const char c, bool sqr);
    void printBoard();
public:
    Render();
    ~Render();
};
