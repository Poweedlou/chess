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
    static const PieceType m_type = PieceType::Base;
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
    virtual const MoveError move(const coord x, const coord y) = 0;
    virtual void changeColor(bool isWhite) {m_isWhite = isWhite;}
    virtual bool isWhite() {return m_isWhite;}
};

#endif