#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Definimos una estructura para representar las piezas de Lego
/**
 * @struct piezalego
 * @brief A struct representing a lego piece with its type, length, width and height.
 */
struct piezalego {
    string type;
    int largo;
    int ancho;
    int alto;
};

// Clase para representar una casa
class Hogar {
    private:
        stack<piezalego> paredes;
        stack<piezalego> ventanas;
        stack<piezalego> techo;
        stack<piezalego> piso;

    public:
        /**
         * @brief Método para construir una pared y agregarla a la pila de paredes.
         * 
         */
        void construirPared() {
            piezalego pared;
            pared.type = "Pared";
            paredes.push(pared);
        }

        /**
         * @brief Método para construir una ventana y agregarla a la pila de ventanas.
         * 
         */
        void construirVentana() {
            piezalego ventana;
            ventana.type = "Ventana";
            ventanas.push(ventana);
        }

        /**
         * @brief Método para construir el techo y agregarlo a la pila de techos.
         * 
         */
        void construirTecho() {
            piezalego techos;
            techos.type = "Techo";
            techo.push(techos);
        }

        /**
         * @brief Método para construir el piso y agregarlo a la pila de pisos.
         * 
         */
        void construirPiso() {
            piezalego pisos;
            pisos.type = "Piso";
            piso.push(pisos);
        }

        /**
         * @brief Método para mostrar la casa construida.
         * 
         */
        void mostrarCasa() {
            cout << "Casa construida:" << endl;
            cout << "Paredes: " << paredes.size() << endl;
            cout << "Ventanas: " << ventanas.size() << endl;
            cout << "Techo: " << techo.size() << endl;
            cout << "Piso: " << piso.size() << endl;
        }
};