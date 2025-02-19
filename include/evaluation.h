#ifndef CHESS_ENGINE_EVALUATION_H
#define CHESS_ENGINE_EVALUATION_H

#include "board.h"

class Evaluation {
public:
    static int evaluate(const Board& board);
    // Add more functions as needed
};

#endif //CHESS_ENGINE_EVALUATION_H