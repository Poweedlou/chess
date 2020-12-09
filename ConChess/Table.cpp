#include "Table.hpp"
#include "errorcodes.hpp"
#include "Array2D.hpp"
#include "tableInitPos.hpp"
#include "AllPieces.hpp"


void Table::Reset()
{
    for (coord x = 0; x < 8; ++x)
    {
        for (coord y = 0; y < 8; ++y)
        {
            if (initPos[y * 8 + x] != '0')
            {
                char piece = initPos[y * 8 + x + 1];
                char color = initPos[y * 8 + x];
                m_table.g(x, y) = makePiece(color, piece, x, y);
                #ifndef NDEBUG
                assert(x >= 0 && x < 8 && y >= 0 & y < 8 && " trying to make piece out of range");
                std::cout << "Made " << piece << " at " << x + 1 << ' ' << y + 1 << std::endl;
                #endif
            }
            
        }
    }
}