#include <iostream>
#include <string>
#include <cstdio>

class Mascota
{
private:
    std::string nombre;
public:
    Mascota() {
        std::cout<< "Ha nacido una nueva mascota." <<std::endl;
        this->nombre = "Firulais";
    }
    void Inicializar() {
        std::cout<< "Ha nacido una nueva mascota." <<std::endl;
        this->nombre = "Firulais";
    }
    ~Mascota() {
        std::cout<< "Adios mundo cruel." <<std::endl;
    }

    void Destruir() {
        std::cout<< "Adios mundo cruel " <<std::endl;
    }

    void DecirNombre() {
        std::cout<< "Mi nombre es: " << this->nombre <<std::endl;
    }
};