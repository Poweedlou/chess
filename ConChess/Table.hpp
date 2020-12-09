#ifndef TABLE_H
#define TABLE_H

#include "types.hpp"
#include "errorcodes.hpp"
#include "Array2D.hpp"
#include "AllPieces.hpp"
#include "debug.hpp"

class Table
{
private:
    static Array2D<BasePiece *, coord, 8, 8> m_table;

public:
    Table() = delete;
    static void Reset();
    static MoveError Move(coord x0, coord y0, coord x1, coord y1);
    
};
#endif