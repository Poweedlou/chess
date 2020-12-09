#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"

class Pawn: public BasePiece 
{
private:
    bool m_hasDoubleMove;
    static const PieceType m_type = PieceType::Pawn;
public:
    const MoveError getDoubleMove(const coord x, const coord y);
    const MoveError move(const coord x, const coord y) override; 
    const bool canEatThere(const coord x, const coord y);
};