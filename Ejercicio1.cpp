//Cálculo del Área de un Círculo
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
        cout << endl;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;

        if (radio < 0) {
            cout << "El radio no puede ser negativo. Intente de nuevo." << endl;
            continue;
        }

        area = M_PI * pow(radio, 2);
        cout << "El area del circulo es: " << area << endl;
        cout << endl;

        cout << "Desea calcular el area de otro circulo? (S/N): ";
        cin >> opcion;

        while (opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n') {
            cout << "Opcion invalida. Ingrese S para si o N para no: ";
            cin >> opcion;
        }
        
        if (opcion == 'N' || opcion == 'n') {
            cout << "Gracias por usar el programa. "<< endl;
            cout << "Finalizando programa..." << endl;
            cout << endl;
        } else {
            cout << "Reiniciando el programa..." << endl;
            cout << endl;
        } 
        
    } while (opcion == 'S' || opcion == 's');
    return 0;
}