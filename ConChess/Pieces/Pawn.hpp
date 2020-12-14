#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"

class Pawn final: public BasePiece 
{
private:
    bool m_hasDoubleMove;
    static const PieceType m_type = PieceType::Pawn;
public:
    const MoveError canDoubleMove();
    const MoveError canMove(const coord x, const coord y) override; 
    const bool canEatThere(const coord x, const coord y);
    const bool pieceOnWay(const coord x, const coord y);
};