//
// Created by aquir on 20/9/2023.
//


#include <iostream>
#include <stack>
#include "pila.cpp"

using namespace std;

int main() {
    // Punto A: Piezas de Lego de diferentes tipos
    piezalego pieza1 = {"Pared", 10, 5, 2};
    piezalego pieza2 = {"Ventana", 5, 5, 2};
    piezalego pieza3 = {"Techo", 10, 10, 2};
    piezalego pieza4 = {"Piso", 10, 10, 2};

    Hogar casa;

    casa.construirPared(); // Construir una pared
    casa.construirPared(); // Construir otra pared
    casa.construirVentana(); // Construir una ventana
    casa.construirTecho(); // Construir el techo
    casa.construirPiso(); // Construir el piso

    // Mostrar la casa construida
    casa.mostrarCasa();

    return 0;
}