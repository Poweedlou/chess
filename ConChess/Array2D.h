#ifndef ARRAY2D_H
#define ARRAY2D_H

#include "types.h"

#ifndef NDEBUG
#include <iostream>
#endif


template <class T, class T_ind, T_ind x_len, T_ind y_len>
class Array2D
{
private:
    T m_buffer[x_len * y_len]; 
public:
    Array2D() = default;
    ~Array2D() = default;
    #ifdef NDEBUG
    inline 
    #endif
    T_ind i(const T_ind x, const T_ind y) const;
    T& g(const T_ind x, const T_ind y);

};


template<class T, class T_ind, T_ind x_len, T_ind y_len>
#ifdef NDEBUG
inline 
#endif
T_ind Array2D<T, T_ind, x_len, y_len>::i(const T_ind x, const T_ind y) const
{
    return x * y_len + y;
}


template<class T, class T_ind, T_ind x_len, T_ind y_len>
T& Array2D<T, T_ind, x_len, y_len>::g(const T_ind x, const T_ind y)
{
    return m_buffer[this->i(x, y)];
}

#endif