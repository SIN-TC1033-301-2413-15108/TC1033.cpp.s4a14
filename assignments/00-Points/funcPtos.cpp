#include <iostream>
#include "funcPtos.hpp"

void llenaPuntos(Point puntos[])
{
    std::cout << "Llenando el arreglo de puntos\n";

    for(auto i=0; i < N; i++)
    {
        puntos[i].setX(i);
        puntos[i].setY(i+1);
    }
}
void muestraPuntos(Point puntos[])
{
    std::cout << "El arreglo de puntos\n";

    for (auto i=0; i < N; i++)
        std::cout << puntos[i].getX() << " " << puntos[i].getY() << "\n";
}