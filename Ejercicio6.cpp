//Juego de Piedra, Papel y Tijeras

#include <iostream>
#include <cstdlib>
#include <ctime>    
using namespace std;

int main(){
    srand(time(0));
    int SeleccionComputadora;
    int SeleccionUsuario, puntosUsuario = 0, puntosComputadora = 0;
    string SelectComputadora, SelectUsuario;
    do {
        SeleccionComputadora = rand() % 3 + 1; // 1: Piedra, 2: Papel, 3: Tijeras
        cout << "Ingrese su seleccion: ";
        cin >> SeleccionUsuario;
        if (SeleccionUsuario < 1 || SeleccionUsuario > 3) {
            cout << "Seleccion invalida. Debe ser 1 (Piedra), 2 (Papel) o 3 (Tijeras)." << endl;
            return 1; 
        }
        if (SeleccionUsuario == 1) {
            SelectUsuario = "Piedra";
        } else if (SeleccionUsuario == 2) {
            SelectUsuario = "Papel";
        } else {
            SelectUsuario = "Tijeras";
        }
        if (SeleccionComputadora == 1){
            SelectComputadora = "Piedra";
        } else if (SeleccionComputadora == 2) {
            SelectComputadora = "Papel";
        } else {
            SelectComputadora = "Tijeras";
        }

        cout << "La computadora ha seleccionado: " << SelectComputadora << " vs tu seleccion: " << SelectUsuario << endl;
        if (SeleccionComputadora == SeleccionUsuario) {
            cout << "Empate --- Ambos seleccionaron " << SelectUsuario << endl;
        } else if ((SeleccionComputadora == 1 && SeleccionUsuario == 3) || (SeleccionComputadora == 2 && SeleccionUsuario == 1) || (SeleccionComputadora == 3 && SeleccionUsuario == 2)) {
            cout << "Perdedor --- " << SelectComputadora << " vence a " << SelectUsuario << endl;
            puntosComputadora++;
        } else {
            cout << "Ganador --- " << SelectUsuario << " vence a " << SelectComputadora << endl;
            puntosUsuario++;
        }   
    } while (puntosUsuario <= 3 && puntosComputadora <= 3);
    if (puntosUsuario > puntosComputadora) {
        cout << "Felicidades! Has ganado el juego con " << puntosUsuario << " puntos." << endl;
    } else {
        cout << "Lo siento, la computadora ha ganado el juego con " << puntosComputadora << " puntos." << endl;
    }
    return 0;
}