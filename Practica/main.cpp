/*
    * main.cpp
    *
    *  Created on: 20/09/2023 9:20 
    *  Modified on:
    * 
    *  Authors: Jeffry Araya Ch. and Andres Quiros P.  
*/

#include <iostream>
#include <string>
#include "clasesLego.cpp"

using namespace std;

/**
 * Compara dos piezas de lego para saber si se pueden embonar.
 * @param pPiece1 Puntero a la primera pieza de lego a comparar.
 * @param pPiece2 Punero a la segunda pieza de lego a comparar.
 * @return cout con el resultado de la comparacion.
 */
void embonarLegos(Piece* pPiece1, Piece* pPiece2){
    if(pPiece1->getLength() == pPiece2->getLength() && pPiece1->getWidth() == pPiece2->getWidth()){
        cout << "Se pueden embonar" << endl;
        cout << "Pieza 1: " << endl;
        pPiece1->printPiece();
        cout << "Pieza 2: " << endl;
        pPiece2->printPiece();
    }else{
        cout << "No se pueden embonar" << endl;
    }
}

int main(){
    Piece* legoAzul = new Piece("Azul", "Cuadrado", 2, 2, 1);
    Piece* legoRojo = new Piece("Rojo", "Rectangulo", 3, 2, 1);
    Piece* legoVerde = new Piece("Verde", "Cuadrado", 2, 2, 3);

    embonarLegos(legoAzul, legoRojo);
    embonarLegos(legoAzul, legoVerde);
    embonarLegos(legoRojo, legoVerde);
    return 0;
}