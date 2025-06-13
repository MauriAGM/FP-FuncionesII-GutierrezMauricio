//Calculo de hipotenusa 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double cateto1, cateto2, hipotenusa;
    char opcion;

    do {
        cout << "====== CALCULO DE LA HIPOTENUSA ======" << endl;
        cout << "======================================" << endl;
        cout << endl;

        cout << "Ingrese el valor del primer cateto: ";
        cin >> cateto1;
        if ( cateto1 <= 0 ) {
            cout << "El cateto no puede ser negativo. Intente de nuevo." << endl;
            return 1;
        }
        cout << "Ingrese el valor del segundo cateto:";
        cin >> cateto2;
        if ( cateto2 <= 0 ) {
            cout << "El cateto no puede ser negativo. Intente de nuevo." << endl;
         return 1;
        }

        hipotenusa = sqrt(pow(cateto1, 2) + pow (cateto2, 2));
        cout << "El valor de la hipotenusa es: " << hipotenusa << endl;
        cout << endl;
        cout << "Desea calcular la hipotenusa de otro triangulo? (S/N): ";
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
