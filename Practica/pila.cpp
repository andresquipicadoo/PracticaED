#include <iostream>
#include <stack>
#include <string>

using namespace std;

//Se define una estructura para representar las piezas de Lego
/**
 * @struct piezalego
 * @brief A struct representing a lego piece with its type, length, width and height.
 */

struct piezalego {
    // Variables para las dimensiones de la casa las cuales son inputs.
    string type;
    int largo;
    int ancho;
    int alto;
};


class Hogar {
// Esta clase sirve para modelar los diferentes elementos que componen una casa.
// Stack se utiliza en este caso para llevar un seguimiento  de los elementos de construcción de la
// casa como lo son (paredes, ventanas, techo y piso) de la casa de una manera mas especifica
private:
    stack<piezalego> paredes;
    stack<piezalego> ventanas;
    stack<piezalego> techo;
    stack<piezalego> piso;

public:

    void construirPared() {
         //Explicacion :Este metodo de encarga de construir las paredes  de la casa.
        // En este caso la funcion type() se usa para asignar un valor a un objeto
        // que se llama "pared"
        // El metodo push() se usa  para agregar un objeto de tipo
        // piezalego a una colección o estructura de datos llamada pared.
         piezalego pared;
        pared.type = "Pared";
        paredes.push(pared);
    }


    void construirVentana() {
         //Explicacion :Este metodo de encarga de construir una ventana para la casa.
         // En este caso la funcion type() se usa para asignar un valor a un objeto
        // que se llama "ventana"
        // El metodo push() se usa  para agregar un objeto de tipo
        // piezalego a una colección o estructura de datos llamada ventana.
         piezalego ventana;
        ventana.type = "Ventana";
        ventanas.push(ventana);
    }


    void construirTecho() {
         //Explicacion : Este metodo de encarga de construir el techo para la casa qu en este caso siempre es rojo.
        // En este caso la funcion type() se usa para asignar un valor a un objeto
        // que se llama "techos"
        // El metodo push() se usa para agregar un objeto de tipo
        // piezalego a una colección o estructura de datos llamada techo.
         piezalego techos;
        techos.type = "Techo";
        techo.push(techos);
    }



    void construirPiso() {
        //Explicacion :Este metodo de encarga de construir el piso  para la casa.
        // En este caso la funcion type() se usa para asignar un valor a un objeto
        // que se llama "pisos"
        // El metodo push() se usa para agregar un objeto de tipo
        // piezalego a una colección o estructura de datos llamada piso.
        piezalego pisos;
        pisos.type = "Piso";
        piso.push(pisos);
    }



    void mostrarCasa() {
         //Explicacion : Este metodo se encarga de mostrar la cantidad de paredes,puertas, ventanas ,pisos y techo que posee
         // la casa.
        cout << "Casa construida:" << endl;
        cout << "Paredes: " << paredes.size() << endl;
        cout << "Ventanas: " << ventanas.size() << endl;
        cout << "Techo: " << techo.size() << endl;
        cout << "Piso: " << piso.size() << endl;
    }
};