//Calculo de raices cuadraticas considera si son raices reales o complejas
//Hubo error en el commit donde dice ejercicio 5, pero el ejercicio es el 4
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a,b,c,discriminante,raiz1,raiz2;
    cout << "=== CALCULO DE RAICES CUADRATICAS ===" << endl;
    cout << "=====================================" << endl;
    cout << "Ingrese el valor de a,coeficiente de x^2: ";
    cin >> a;
    if (a == 0) {
        cout << "El coeficiente a no puede ser cero." << endl;
        return 1; 
    }
    cout << "Ingrese el valor de b, coefiicente de x: ";
    cin >> b;
    cout << "Ingrese el valor de c, termino independiente: ";
    cin >> c;

    discriminante = b*b - 4*a*c;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2*a);
        raiz2 = (-b - sqrt(discriminante)) / (2*a);
        cout << "Las raices son reales y diferentes " << endl;
        cout << "La primera raiz es: " << raiz1 << endl;
        cout << "La segunda raiz es: " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2*a);
        cout << "Las raices son reales e iguales " << endl;
        cout << "Raiz doble: " << raiz << endl;
    } else {
        cout << "Las raices son complejas." << endl;
    }
    cout << "=====================================" << endl;
    cout << "Fin del programa." << endl;
    
    return 0;
}
