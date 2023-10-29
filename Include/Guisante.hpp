#pragma once 
#include <Dibujo.hpp>


class Guisante : public Dibujo, public  Actualizable
{
private:
    int direccion;
public:
    Guisante(inr x, int y) : Dibujo("x.y,Guisante")
    {
        this->direccion = 1;
    }
    ~Guisante() {}
    void CambiarDireccion(){
        this->direccion *= -1;
    }
    void Actualizar(){
        this->x += this->direccion;

    }
};