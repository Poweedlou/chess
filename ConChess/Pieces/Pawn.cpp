#include "Pawn.hpp"
#include "types.hpp"
#include "errorcodes.hpp"


const MoveError Pawn::getDoubleMove(const coord x, const coord y)
{
    if (!(this->m_hasDoubleMove))
        return MoveError::NO_DOUBLE_MOVE;
    if (m_x != x)
        return MoveError::TRAVEL_ERROR;
    if (y - m_y == ((this->m_isWhite) ? 2 : -2))
    {
        this->m_hasDoubleMove = false;
        return MoveError::OK; 
    }
    else
        return MoveError::TRAVEL_ERROR;
    
}

const MoveError Pawn::move(const coord x, const coord y)
{
    
}

