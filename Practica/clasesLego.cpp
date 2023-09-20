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

using namespace std;

class Piece{
    // Attributes
    private:
        string color;
        string shape;
        int length;
        int width;
        int height;
    public:
        // Constructors
        Piece(string pColor, string pShape, int pLength, int pWidth, int pHeight){
            this->color = pColor;
            this->shape = pShape;
            this->length = pLength;
            this->width = pWidth;
            this->height = pHeight;
        }
        // Getters
        string getColor(){
            return this->color;
        }
        string getShape(){
            return this->shape;
        }
        int getLength(){
            return this->length;
        }
        int getWidth(){
            return this->width;
        }
        int getHeight(){
            return this->height;
        }
        // Setters
        void setColor(string pColor){
            this->color = pColor;
        }
        void setShape(string pShape){
            this->shape = pShape;
        }
        void setLenght(int pLength){
            this->length = pLength;
        }
        void setWidth(int pWidth){
            this->width = pWidth;
        }
        void setHeight(int pHeight){
            this->height = pHeight;
        }
        // Methods
        void printPiece(){
            cout << "Color: " << this->color << endl;
            cout << "Forma: " << this->shape << endl;
            cout << "Largo: " << this->length << endl;
            cout << "Ancho: " << this->width << endl;
            cout << "Alto: " << this->height << endl;
        }
};