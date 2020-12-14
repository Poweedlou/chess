#include "BasePiece.hpp"

void BasePiece::move(const coord x, const coord y)
{
    m_x = x;
    m_y = y;
}

const bool BasePiece::isWhite() { return m_isWhite; }

void BasePiece::changeColor(bool isWhite) { m_isWhite = isWhite; }
