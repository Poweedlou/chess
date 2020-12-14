#include "pieces.hpp"
#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"


class Bishop: public BasePiece
{
private:
    const PieceType m_type = PieceType::Bishop;
public:
    const bool pieceOnWay(const coord x, const coord y);
    const MoveError canMove(const coord x, const coord y);
};