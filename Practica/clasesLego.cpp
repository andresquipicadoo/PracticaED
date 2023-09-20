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
        int size;
    public:
        // Constructors
        Piece(string pColor, string pShape, int pSize){
            this->color = pColor;
            this->shape = pShape;
            this->size = pSize;
        }
        // Getters and Setters
        string getColor(){
            return this->color;
        }
        string getShape(){
            return this->shape;
        }
        int getSize(){
            return this->size;
        }
        void setColor(string pColor){
            this->color = pColor;
        }
        void setShape(string pShape){
            this->shape = pShape;
        }
        void setSize(int pSize){
            this->size = pSize;
        }
        void printPiece(){
            cout << "Color: " << this->color << endl;
            cout << "Shape: " << this->shape << endl;
            cout << "Size: " << this->size << endl;
        }
};