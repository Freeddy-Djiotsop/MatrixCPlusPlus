//Ein- und Ausgabe

#include<iostream>
#include<iomanip>
#include"matrix_io.hpp"


template<typename T> void einlesen(T**& M, int zeilen, int spalten)
{

    for(int i=0; i<zeilen; i++)//Zeilenweise
        for(int j=0; j<spalten; j++)
            std::cin >> *(*(M+i)+j);
}

template<typename T> void print(T**& M, int zeilen, int spalten)
{
    for(int i=0; i<zeilen; i++)//Ausgabe zeilenweise
    {
        for(int j=0; j<spalten; j++)
            std::cout<<std::right<<std::setw(8)<<*(*(M+i)+j)<<" ";
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

//Ich erzwinge die Ausprägung die ich brauche
template void einlesen<int>(int**&,int,int);
template void einlesen<double>(double**&,int,int);
template void einlesen<bool>(bool**&,int,int);

template void print<int>(int**&,int,int);
template void print<double>(double**&,int,int);
template void print<bool>(bool**&,int,int);
