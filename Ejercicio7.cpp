#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lanzarDado() {
    return rand() % 6 + 1;
}
void mostrarRonda(int ronda, int dado1, int dado2, int puntaje1, int puntaje2) {
    cout << "========================================================" << endl;
    cout << "\n============= Ronda " << ronda << " ==============" << endl;
    cout << "Jugador 1 lanzo: " << dado1 << endl;
    cout << "Jugador 2 lanzo: " << dado2 << endl;
    if (dado1 > dado2) {
        cout << "Jugador 1 gana la ronda." << endl;
    } else if (dado2 > dado1) {
        cout << "Jugador 2 gana la ronda." << endl;
    } else {
        cout << "Empate en la ronda." << endl;
    }
    cout << "Marcador: Jugador 1: " << puntaje1 << " - Jugador 2: " << puntaje2 << endl;
    cout << endl;
}
int main() {
    srand(time(0)); 
    int puntosJugador1 = 0, puntosJugador2 = 0, ronda = 1;
    while (puntosJugador1 < 3 && puntosJugador2 < 3) {
        int dado1 = lanzarDado();
        int dado2 = lanzarDado();
        if (dado1 > dado2) {
            puntosJugador1++;
        } else if (dado2 > dado1) {
            puntosJugador2++;
        }
        mostrarRonda(ronda, dado1, dado2, puntosJugador1, puntosJugador2);
        ronda++;
    }

    cout << "========================================================" << endl;
    cout << "\n========= Resultado Final ==========" << endl;
    cout << "Jugador 1: " << puntosJugador1 << " puntos" << endl;
    cout << "Jugador 2: " << puntosJugador2 << " puntos" << endl;
    if (puntosJugador1 == 3) {
        cout << "EL JUGADOR 1 HA GANADO EL JUEGO" << endl;
    } else {
        cout << "EL JUGADOR 2 HA GANADO EL JUEGO" << endl;
    }
    return 0;
}
