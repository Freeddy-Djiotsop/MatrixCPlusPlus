
#ifndef MATRIX_ARITH_HPP_INCLUDED
#define MATRIX_ARITH_HPP_INCLUDED
template<typename S, typename T>void matsum(S**&,T**&,S**&,int,int);
template<typename T>void neg(T**&,int,int);
template<>void neg<bool>(bool**&,int,int);

#endif // MATRIX_ARITH_HPP_INCLUDED
