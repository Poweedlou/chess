#include "King.hpp"

const MoveError King::canMove(const coord x, const coord y)
{
    if (abs(m_x - x) <= 1 && abs(m_y - y) <= 1)
        return MoveError::OK;
    return MoveError::TRAVEL_ERROR;
}