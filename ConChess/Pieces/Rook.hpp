#include "pieces.hpp"
#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"


class Rook: public BasePiece
{
private:
    const PieceType m_type = PieceType::Rook;
    bool hasCastle = true;
public:
    const bool pieceOnWay(const coord x, const coord y) const override;
    const MoveError canMove(const coord x, const coord y) const override;
};