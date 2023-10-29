#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>

class Lanzaguisante :  public Dibujo
{
private:
    int numeroDisparos;
public:
    Lanzaguisante() : Dibujo("Lanzaguisante")
    {
            this->numeroDisparos * 3;
    }
    ~Lanzaguisante() {}
    void Actualizar (){

    }

    void Recargar(){

    }

    void Disparar(){
            if(this->numeroDisparos > 0){
                this->numeroDisparos -= 1;
            }
    }
};