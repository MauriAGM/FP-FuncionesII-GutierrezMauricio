#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lanzarDado() {
    return rand() % 6 + 1;
}
void mostrarRonda( int dado1, int dado2, int puntaje1, int puntaje2) {
    cout << "Jugador 1 lanzo: " << dado1 << endl;
    cout << "Jugador 2 lanzo: " << dado2 << endl;
    if (dado1 > dado2) {
        cout << "Jugador 1 gana la ronda." << endl;
    } else if (dado2 > dado1) {
        cout << "Jugador 2 gana la ronda." << endl;
    } else {
        cout << "Empate en la ronda." << endl;
    }
}
int main() {
    srand(time(0)); 
    int puntosJugador1 = 0, puntosJugador2 = 0;
    while (puntosJugador1 < 3 && puntosJugador2 < 3) {
        int dado1 = lanzarDado();
        int dado2 = lanzarDado();
        if (dado1 > dado2) {
            puntosJugador1++;
        } else if (dado2 > dado1) {
            puntosJugador2++;
        }
        mostrarRonda(dado1, dado2, puntosJugador1, puntosJugador2);
    }
    if (puntosJugador1 == 3) {
        cout << "Jugador 1 ha ganado el juego!" << endl;
    } else {
        cout << "Jugador 2 ha ganado el juego!" << endl;
    }
    return 0;
}
