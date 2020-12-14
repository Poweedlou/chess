#include "pieces.hpp"
#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"


class King: public BasePiece
{
private:
    const PieceType m_type = PieceType::King;
    const bool pieceOnWay(const coord x, const coord y) {return false;};
public:
    const MoveError canMove(const coord x, const coord y);
};

