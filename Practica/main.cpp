//
// Created by aquir on 20/9/2023.
//
/*
    * main.cpp
    *
    *  Created on: 20/09/2023 9:20
    *  Modified on: 21/09/2023 10:45
    *
    *  Authors: Jeffry Araya Ch. and Andres Quiros P.
*/
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
    casa.construirPared(); // Construir una pared adicional
    casa.construirVentana(); // Construir una ventana
    casa.construirTecho(); // Construir el techo
    casa.construirPiso(); // Construir el piso

    // Llamada del metodo mostrarCasa() de pila.cpp para mostrar la casa.
    casa.mostrarCasa();
    return 0;
}