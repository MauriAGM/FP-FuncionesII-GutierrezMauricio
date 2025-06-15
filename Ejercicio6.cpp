//Juego de Piedra, Papel y Tijeras

#include <iostream>
#include <cstdlib>
#include <ctime>    
using namespace std;

int main(){
    srand(time(0));
    int SeleccionComputadora, SeleccionUsuario, puntosUsuario = 0, puntosComputadora = 0;
    string SelectComputadora, SelectUsuario;
    do {
        cout << "\n================ JUEGO DE PIEDRA, PAPEL Y TIJERA ==================" << endl;
        cout << "El primero en llegar a 3 puntos gana el juego." << endl;
        cout << endl;
        SeleccionComputadora = rand() % 3 + 1; // 1: Piedra, 2: Papel, 3: Tijeras
        cout << "Ingrese su seleccion (1: Piedra, 2: Papel, 3: Tijeras): ";
        cin >> SeleccionUsuario;
        if (SeleccionUsuario < 1 || SeleccionUsuario > 3) {
            cout << "Seleccion invalida. Debe ser 1 (Piedra), 2 (Papel) o 3 (Tijeras)." << endl;
            continue; 
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

        cout << "La computadora ha seleccionado: " << SelectComputadora << " vs Tu seleccion: " << SelectUsuario << endl;
        if (SeleccionComputadora == SeleccionUsuario) {
            cout << "Empate --- Ambos seleccionaron " << SelectUsuario << endl;
        } else if ((SeleccionComputadora == 1 && SeleccionUsuario == 3) || (SeleccionComputadora == 2 && SeleccionUsuario == 1) || (SeleccionComputadora == 3 && SeleccionUsuario == 2)) {
            cout << "Perdedor --- " << SelectComputadora << " vence a " << SelectUsuario << endl;
            puntosComputadora++;
        } else {
            cout << "Ganador --- " << SelectUsuario << " vence a " << SelectComputadora << endl;
            puntosUsuario++;
        }   
        cout << "Puntuacion Usuario: " << puntosUsuario << " - Puntuacion Computadora: " << puntosComputadora << endl;
        cout << "===================================================================" << endl;
    } while (puntosUsuario < 3 && puntosComputadora < 3);

    cout << "\n=== RESULTADO FINAL ===" << endl;
    cout << "Puntuacion Usuario: " << puntosUsuario << " - Puntuacion Computadora: " << puntosComputadora << endl;
    if (puntosUsuario > puntosComputadora) {
        cout << "FELICIDADES, HAS GANADO" << endl;
    } else {
        cout << "LO SIENTO, HAS PERDIDO" << endl;
    }
    return 0;
}