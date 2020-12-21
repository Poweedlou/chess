#include "pieces.hpp"
#include "BasePiece.hpp"
#include "errorcodes.hpp"
#include "types.hpp"
#include "debug.hpp"


class King: public BasePiece
{
private:
    const PieceType m_type = PieceType::King;
    bool hasCastle = true;
    const bool pieceOnWay(const coord x, const coord y) const override {return false;};
public:
    const MoveError canMove(const coord x, const coord y) const override;
    const bool canCastle() const;
    void move(const coord x, const coord y) override;
};

