//Speicherplatz Verwaltung

#include<iostream>
#include"matrix_dyn.hpp"

//int zeile und spalten weil die länge immer ganzzahlig sein muss

template<typename T> void reservieren(T**& M, int zeilen, int spalten)
{
    M = new T*[zeilen];
    for(int i=0; i<zeilen; i++)
    {
        *(M+i) = new T[spalten];
    }
}

template<typename T> void freigeben(T**& M, int zeilen)
{
    for(int i=0; i<zeilen; i++)
        delete[] *(M+i);
    delete[] M;
}

//Ich erzwinge die Ausprägung die ich brauche
template void reservieren<int>(int**&,int,int);
template void reservieren<double>(double**&,int,int);
template void reservieren<bool>(bool**&,int,int);

template void freigeben<int>(int**&,int);
template void freigeben<double>(double**&,int);
template void freigeben<bool>(bool**&,int);
