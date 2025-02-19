#ifndef CHESS_ENGINE_EVALUATION_H
#define CHESS_ENGINE_EVALUATION_H

#include "board.h"

class Evaluation {
public:
    static int evaluate(const Board& board);
    
};

#endif 