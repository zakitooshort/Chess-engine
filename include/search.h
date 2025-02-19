#ifndef CHESS_ENGINE_SEARCH_H
#define CHESS_ENGINE_SEARCH_H

#include "board.h"
#include "evaluation.h"

class Search {
public:
    static Move search(const Board& board, int depth);
    // Add more functions as needed

private:
    static int minimax(const Board& board, int depth, int alpha, int beta, bool isMaximizing);
};

#endif //CHESS_ENGINE_SEARCH_H