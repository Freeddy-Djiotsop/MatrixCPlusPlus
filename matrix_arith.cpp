//Operationen bzw. Berechnungen

#include<iostream>
#include"matrix_arith.hpp"


//Wie die Matizen Multiplikation aus der Schule
template<typename S, typename T> void matsum(S**& Ma, T**& Mb, S**& Msum, int zeilen, int spalten)
{
    for(int i=0; i<zeilen; i++)
    {
        for(int j=0; j<spalten; j++)
        {
            *(*(Msum+i)+j) = *(*(Ma+i)+j) + *(*(Mb+i)+j);
        }
    }
}

//Allgemeine Template-Funktiion neg
template<typename T> void neg(T**& M, int zeilen, int spalten)
{
    for(int i=0; i<zeilen; i++)
        for(int j=0; j<spalten; j++)
            *(*(M+i)+j) *=(-1);
}

//Spezialisierte Template-Funktiion neg, der nur für bool aufgerufen weerden will
template<> void neg<bool>(bool**& M, int zeilen, int spalten)
{
    for(int i=0; i<zeilen; i++)
        for(int j=0; j<spalten; j++)
            *(*(M+i)+j) = !(*(*(M+i)+j));
}

//Ich erzwinge die Ausprägung die ich brauche
template void matsum<double,int>(double**&,int**&,double**&,int,int);

template void neg<int>(int**&,int,int);
template void neg<double>(double**&,int,int);

template void neg<bool>(bool**&,int,int);
