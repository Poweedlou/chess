#ifndef TABLE_H
#define TABLE_H

#include "types.h"
#include "errorcodes.h"
#include "Array2D.h"

class Table
{
private:
    Array2D</* */, coord, 8, 8> m_table;

public:
    Table() = default;
    ~Table() = default;
    void Reset();
    MoveError Move(coord x0, coord y0, coord x1, coord y1);
    
};
#endif