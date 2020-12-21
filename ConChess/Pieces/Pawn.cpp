#include "Pawn.hpp"
#include "types.hpp"
#include "errorcodes.hpp"

#define PAWN_FORWARD (this->m_isWhite ? 1 : -1)


const MoveError Pawn::canDoubleMove() const
{
    if (!(this->m_hasDoubleMove))
        return MoveError::NO_DOUBLE_MOVE;
    return (this->pieceOnWay(m_x, m_y + 2 * PAWN_FORWARD) ? MoveError::TRAVEL_ERROR : MoveError::OK);
}

const MoveError Pawn::canMove(const coord x, const coord y) const
{
    if ((x == m_x) && (y - m_y == PAWN_FORWARD))
        return MoveError::OK;
    if ((abs(x - m_x) == 1) && (y - m_y == PAWN_FORWARD))
        return (m_callback(x, y)) ? MoveError::OK : MoveError::CANT_EAT;
    if ((x == m_x) && (y - m_y == PAWN_FORWARD * 2))
    {
        MoveError retval = this->canDoubleMove();
        if (MoveError::OK == retval)
            return (m_callback(x, y) ? MoveError::TRAVEL_ERROR : MoveError::OK);
        return retval;
    }
    return MoveError::TRAVEL_ERROR;
}

const bool Pawn::pieceOnWay(const coord x, const coord y) const
{
    return m_callback(m_x, m_y + PAWN_FORWARD);
}