#pgrama once
#include <list>
#include <Dibujo.hpp>


class Sprite :public Dibujo
{
private:
    list<Dibujo*> cuadros;
public:
    Sprite(list<Dibujo*> cuadros) 
    {
        this->cuadros = cuadros;
    }

    void Dibujar()
    {
        this->cuadros[cuadroActual].Dibujar();
    }
    
    void AvanzarCuadro()
    {
        
    }
};