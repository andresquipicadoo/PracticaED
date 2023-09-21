//
// Created by aquir on 20/9/2023.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Definimos una estructura para representar las piezas de Lego
struct LegoPiece {
    string type;
};

// Clase para representar una casa
class House {
private:
    stack<LegoPiece> paredes;
    stack<LegoPiece> ventanas;
    stack<LegoPiece> techo;
    stack<LegoPiece> piso;

public:
    void construirPared() {
        LegoPiece wall;
        wall.type = "Pared";
        paredes.push(wall);
    }

    // Método para construir una ventana
    void construirVentana() {
        LegoPiece window;
        window.type = "Ventana";
        ventanas.push(window);
    }

    // Método para construir el techo
    void construirTecho() {
        LegoPiece roofPiece;
        roofPiece.type = "Techo";
        techo.push(roofPiece);
    }

    // Método para construir el piso
    void construirPiso() {
        LegoPiece floorPiece;
        floorPiece.type = "Piso";
        piso.push(floorPiece);
    }

    // Método para mostrar la casa construida
    void displayHouse() {
        cout << "Casa construida:" << endl;
        cout << "Paredes: " << paredes.size() << endl;
        cout << "Ventanas: " << ventanas.size() << endl;
        cout << "Techo: " << techo.size() << endl;
        cout << "Piso: " << piso.size() << endl;
    }
};

int main() {
    // Punto A: Piezas de Lego de diferentes tipos
    LegoPiece pieza1 = {"Pared"};
    LegoPiece pieza2 = {"Ventana"};
    LegoPiece pieza3 = {"Techo"};
    LegoPiece pieza4 = {"Piso"};

    House casa;

    casa.construirPared(); // Construir una pared
    casa.construirPared(); // Construir otra pared
    casa.construirVentana(); // Construir una ventana
    casa.construirTecho(); // Construir el techo
    casa.construirPiso(); // Construir el piso

    // Mostrar la casa construida
    casa.displayHouse();

    // Punto C: Evaluación de expresiones con pilas
    string expresion = "2+3-1";
    stack<int> pila;
    for (char c: expresion) {
        if (isdigit(c)) {
            int numero = c - '0';
            pila.push(numero);
        } else if (c == '+') {
            int operand2 = pila.top();
            pila.pop();
            int operand1 = pila.top();
            pila.pop();
            pila.push(operand1 + operand2);
        } else if (c == '-') {
            int operand2 = pila.top();
            pila.pop();
            int operand1 = pila.top();
            pila.pop();
            pila.push(operand1 - operand2);
        }
    }

    cout << "Resultado de la expresión: " << pila.top() << endl;

    return 0;
}