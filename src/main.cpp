#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
    Mascota m1;
    Mascota m2;

    std::cout << "Inicio del Programa" << std::endl;

    //m1.Comer();
    //m2.Comer();

    std::cout << "tipos de datos" << std::endl;
    std::cout << "int" << sizeof(int) << std::endl;
    std::cout << "char" << sizeof(char) << std::endl;
    std::cout << "bool" << sizeof(bool) << std::endl;
    std::cout << "float" << sizeof(float) << std::endl;
    std::cout << "double" << sizeof(double) << std::endl;
    std::cout << "Mascota " << sizeof(Mascota) << std::endl;
    std::cout << "Direcciones de memoria" << std::endl;
    int a = 4;
    std::cout << "tamaño: " << sizeof(a) << std::endl;
    std::cout << "contenido:" << a << std::endl;
    std::cout << "direccion:" << &a << std::endl;

    void *puntero = malloc(32);

    //std::cout << std::endl << std::endl;
    std::cout << "Direcciones de memoria" << std::endl;
    std::cout << "size of: " << sizeof(puntero) << std::endl;
    std::cout << "puntero1" << puntero << std::endl;
    std::cout << "puntero2" << &puntero << std::endl;
    
    free(puntero);

    // C - Memoria dinamica
    std::cout << "Mascota en C++: " << std::endl;
    Mascota* mascotaC = (Mascota*) malloc(sizeof(Mascota));
    mascotaC->Inicializar();
    mascotaC->DecirNombre();
    mascotaC->Destruir();
    free(mascotaC);

    //- - - - - - - - - - - - - - - - - - - - - - - -
    // C++
    std::cout << "Mascota en C++: " << std::endl;
    Mascota* mascotaCPP =new Mascota();
    mascotaCPP->DecirNombre();
    delete mascotaCPP;

    return 0;
}
