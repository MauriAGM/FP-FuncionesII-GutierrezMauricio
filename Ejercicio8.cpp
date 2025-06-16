#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int saldo = 100; 

int generarNumero() {
    return rand() % 5 + 1; 
}

int ganancia (int numero1, int numero2, int numero3, int apuesta) {
    if (numero1 == numero2 && numero2 == numero3) {
        return apuesta * 10; 
    } else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        return apuesta * 2; 
    } else if ((numero1 + 1 == numero2 && numero2 + 1 == numero3) || (numero1 + 1 == numero3 && numero3 + 1 == numero2) || (numero2 + 1 == numero3 && numero3 + 1 == numero1)) {
        return apuesta * 5; 
    } else {
        return -apuesta; 
    }
}

void jugar() {
    cout << "==============================================" << endl;
    cout << "               Bienvenido al Juego            " << endl;
    srand(time(0));
    if (saldo <= 0) {
        cout << "No tienes monedas suficientes para jugar." << endl;
        return;
    }
    int apuesta;

    cout << "Ingrese su apuesta (entre 1 y 10): ";
    cin >> apuesta;
    while (apuesta < 1 || apuesta > 10 || apuesta > saldo) {
        cout << "Apuesta invalida. Debe ser entre 1 y 10. Intente de nuevo: ";
        cin >> apuesta;
    }
    int numero1, numero2, numero3;
    numero1 = generarNumero();
    numero2 = generarNumero();
    numero3 = generarNumero();
    cout << "Los numeros generados son: " << numero1 << ", " << numero2 << ", " << numero3 << endl;
    int resultado = ganancia(numero1, numero2, numero3, apuesta);
    saldo = saldo + resultado; 

    if (resultado > 0) {
        cout << "\nFelicidades. Ganaste " << resultado << " monedas. Tu saldo actual es: " << saldo << " monedas." << endl;
    } else {
        cout << "\nLo siento, perdiste " << -resultado << " monedas. Tu saldo actual es: " << saldo << " monedas." << endl;
    }
    cout << endl;
}

void monedas(){
    cout << "==============================================" << endl;
    cout << "               Monedas Disponibles           " << endl;
    cout << "Monedas disponibles: " << saldo << endl;
    cout << endl;
}

int menu () {
    int opcion;
    do {
        cout << "==================================================" << endl;
        cout << "BIENVENIDO AL JUEGO DE LA TRAGAMONEDAS" << endl;
        cout << "1. Jugar" << endl;
        cout << "2. Salir" << endl;
        cout << "3. Ver reglas" << endl;
        cout << "4. Ver monedas disponibles" << endl;   
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin .ignore(); // Limpiar el buffer de entrada
        cout << endl;

        switch (opcion) {
            case 1:
                jugar();
                break;
            case 2:
                cout << "Gracias por jugar " << endl;
                break;
            case 3:
                cout << "==============================================" << endl;
                cout << "               Reglas del Juego               " << endl;
                cout << "1. Apuesta entre 1 y 10 monedas." << endl;
                cout << "2. Si los tres numeros son iguales, ganas 10 veces tu apuesta." << endl;
                cout << "3. Si dos numeros son iguales, ganas 2 veces tu apuesta." << endl;
                cout << "4. Si los numeros son consecutivos, ganas 5 veces tu apuesta." << endl;
                cout << "5. Si no hay coincidencias, pierdes tu apuesta." << endl;
                cout << endl;
                break;
            case 4:
                monedas();
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 2);
}

int main() {
    menu();
    return 0;
}