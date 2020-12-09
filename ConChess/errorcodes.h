#ifndef ERRORCODES_H
#define ERRORCODES_H

enum class MoveError {
    OK,
    ACCESS_ERROR,
    YOUR_PIECE_IN_DEST,
    NO_PIECE_IN_SRC,
    CHECK,
    TRAVEL_ERROR
};

#endif