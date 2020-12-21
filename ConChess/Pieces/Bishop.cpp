#include "Bishop.hpp"

const bool Bishop::pieceOnWay(coord x, coord y) const
{
    const coord dx = (x - m_x > 0) ? 1 : -1;
    const coord dy = (y - m_y > 0) ? 1 : -1;
    x -= dx;
    y -= dy;
    bool f = false;
    for (; x != m_x; x -= dx, y -= dy)
    {
        f = f || m_callback(x, y);
    }
    return f;
}

const MoveError Bishop::canMove(const coord x, const coord y) const
{
    coord dx = x - m_x;
    coord dy = x - m_y;
    if (abs(dx) == abs(dy))
    {
        if (this->pieceOnWay(x, y))
            return MoveError::TRAVEL_ERROR;
        return MoveError::OK;
    }
    return MoveError::TRAVEL_ERROR;
}