//Cálculo del Área de un Círculo
// p * r^2
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char opcion;
    double radio, area;
    M_PI; // Constante de pi 

    do {
        cout << "==== CALCULO DEL AREA DE UN CIRCULO =====" << endl;
        cout << "=========================================" << endl;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        area = M_PI * pow(radio, 2);
        cout << "El area del circulo es: " << area << endl;

        cout << "Desea calcular el area de otro circulo? (S/N): ";
        cin >> opcion;
        while (opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n') {
            cout << "Opcion invalida. Ingrese S para si o N para no: ";
            cin >> opcion;
        }
    } while (opcion == 'S' || opcion == 's');
    return 0;
}