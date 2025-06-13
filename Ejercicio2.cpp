//Generador de numero aleatorios 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, cantN;
    cout << "================= GENERADOR DE NUMEROS ALEATORIOS =================" << endl;
    cout << "===================================================================" << endl;
    cout << endl;

    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> cantN;
    if (cantN <= 0) {
        cout << "La cantida de numeros debe ser mayor a cero " << endl;
        return 1;
    }

    cout << "Ingrese el numero maximo para el generador de numeros aleatorios: ";
    cin >> n;
    if (n <= 0) {
        cout << "El numero debe ser mayor que cero." << endl;
        return 1;
    }
    srand(time(0));
    cout << "Generando " << cantN << " numeros aleatorios entre 1 y " << n << ":" << endl;
    for (int i = 0; i < cantN; i++) {
        int numeroALeatorio = rand() % n + 1;
        cout << numeroALeatorio << " ";
        cout << endl;
    }
    return 0;
}