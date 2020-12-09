#ifndef BASEPIECE_H
#define BASEPIECE_H

#include "pieces.h"
#include "types.h"
#include "errorcodes.h"

class BasePiece
{
private:
    static const PieceType m_type = PieceType::Base;
    coord m_x, m_y;
public:
    BasePiece(coord x, coord y): m_x(x), m_y(y) {};
    virtual ~BasePiece() = 0;
    virtual MoveError move() = 0;
    
};

#endif