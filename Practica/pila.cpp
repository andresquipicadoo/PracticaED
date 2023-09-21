#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Definimos una estructura para representar las piezas de Lego
struct piezalego {
    string type;
};

// Clase para representar una casa
class Hogar {
private:
    stack<piezalego> paredes;
    stack<piezalego> ventanas;
    stack<piezalego> techo;
    stack<piezalego> piso;

public:
    void construirPared() {
        piezalego pared;
        pared.type = "Pared";
        paredes.push(pared);
    }

    // Método para construir una ventana
    void construirVentana() {
        piezalego ventana;
        ventana.type = "Ventana";
        ventanas.push(ventana);
    }

    // Método para construir el techo
    void construirTecho() {
        piezalego techos;
        techos.type = "Techo";
        techo.push(techos);
    }

    // Método para construir el piso
    void construirPiso() {
        piezalego pisos;
        pisos.type = "Piso";
        piso.push(pisos);
    }

    // Método para mostrar la casa construida
    void mostrarCasa() {
        cout << "Casa construida:" << endl;
        cout << "Paredes: " << paredes.size() << endl;
        cout << "Ventanas: " << ventanas.size() << endl;
        cout << "Techo: " << techo.size() << endl;
        cout << "Piso: " << piso.size() << endl;
    }
};

// Función para evaluar expresiones con pilas
int evaluarExpresion(const string& expresion) {
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
    return pila.top();
}

int main() {
    // Punto A: Piezas de Lego de diferentes tipos
    piezalego pieza1 = {"Pared"};
    piezalego pieza2 = {"Ventana"};
    piezalego pieza3 = {"Techo"};
    piezalego pieza4 = {"Piso"};

    Hogar casa;

    casa.construirPared(); // Construir una pared
    casa.construirPared(); // Construir otra pared
    casa.construirVentana(); // Construir una ventana
    casa.construirTecho(); // Construir el techo
    casa.construirPiso(); // Construir el piso

    // Mostrar la casa construida
    casa.mostrarCasa();

    // Punto C: Evaluación de expresiones con pilas
    string expresion = "2+3-1";
    int resultado = evaluarExpresion(expresion);
    cout << "Resultado de la expresión: " << resultado << endl;

    return 0;
}