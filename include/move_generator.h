#ifndef CHESS_ENGINE_MOVE_GENERATOR_H
#define CHESS_ENGINE_MOVE_GENERATOR_H

#include "board.h"
#include <vector>

class MoveGenerator {
public:
    static std::vector<Move> generateMoves(const Board& board);
    
};

#endif 