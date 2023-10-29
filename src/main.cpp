#include <ncurses.h>
#include <list>
#include <ZombieComun.hpp>
#include <Lanzaguisante.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

int main(int argc, char const *argv[])
{
    initscr(); // Inicializa la biblioteca ncurses
    noecho();  // No mostrar las teclas presionadas
    cbreak();  // Desactiva el búfer de línea
    keypad(stdscr, TRUE); // Habilita el uso de teclas especiales como flechas

    ZombieComun* zombie1 = new ZombieComun(200, 0); // Agrega un ZombieComun
    ZombieComun* zombie2 = new ZombieComun(300, 0); // Agrega otro ZombieComun
    Lanzaguisante* lanzaguisante = new Lanzaguisante();

    list<Dibujo*> dibujos;
    dibujos.push_back(zombie1);
    dibujos.push_back(zombie2);
    dibujos.push_back(lanzaguisante);

    list<Actualizable*> actualizables;
    actualizables.push_back(zombie1);
    actualizables.push_back(zombie2);

    while (true)
    {
        int Key = getch();
        if (Key == 'q' || Key == 'Q')
        {
            break; // Salir del juego
        }

        if (Key == 'w' || Key == KEY_UP) // Mover hacia arriba
        {
            zombie1->MoverArriba();
        }
        if (Key == 's' || Key == KEY_DOWN) // Mover hacia abajo
        {
            zombie1->MoverAbajo();
        }
        if (Key == 'a' || Key == KEY_LEFT) // Mover a la izquierda
        {
            zombie1->MoverIzquierda();
        }
        if (Key == 'd' || Key == KEY_RIGHT) // Mover a la derecha
        {
            zombie1->MoverDerecha();
        }
        if (Key == 'l')
        {
            lanzaguisante->Disparar();
        }
        if (Key == 'p')
        {
            Guisante->CambiarDireccion();
        }

        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }

    endwin(); // Finaliza la biblioteca ncurses

    return 0;
}

