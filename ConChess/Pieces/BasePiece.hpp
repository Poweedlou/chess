#ifndef BASEPIECE_H
#define BASEPIECE_H

#include <functional>
#include "pieces.hpp"
#include "types.hpp"
#include "errorcodes.hpp"
#include "debug.hpp"

typedef std::function<const bool(const coord, const coord)> t_callback;


class BasePiece
{
protected:
    const PieceType m_type = PieceType::Base;
    coord m_x, m_y;
    bool m_isWhite;
    t_callback m_callback;
public:
    BasePiece(coord x, coord y,
              t_callback callback,
              bool isWhite=true): 
                m_x(x), m_y(y),
                m_isWhite(isWhite),
                m_callback(callback) {};
    virtual ~BasePiece() = 0;
    virtual const MoveError canMove(const coord x, const coord y) const = 0;
    virtual void changeColor(bool isWhite);
    virtual const bool isWhite() const;
    virtual void move(const coord x, const coord y);
    virtual const bool pieceOnWay(const coord x, const coord y) const = 0;
};

#endif