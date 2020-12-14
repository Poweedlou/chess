#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"
#include "pieces.hpp"

class Pawn final: public BasePiece 
{
private:
    bool m_hasDoubleMove;
    const PieceType m_type = PieceType::Pawn;
public:
    const MoveError canDoubleMove();
    const MoveError canMove(const coord x, const coord y) override; 
    const bool pieceOnWay(const coord x, const coord y);
};