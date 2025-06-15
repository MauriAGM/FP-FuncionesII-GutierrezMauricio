//Funcion void para calcular raices de una ecuacion cuadratica
#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &sonReales) {
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        sonReales = true;
    } else if (discriminante == 0) {
        raiz1 = raiz2 = -b / (2 * a);
        sonReales = true;
    } else {
        sonReales = false;
    }
}

int main() {
    double a, b, c, raiz1, raiz2;
    bool sonReales;

    cout << "=== CALCULO DE RAICES CUADRATICAS ===" << endl;
    cout << "=====================================" << endl;
    cout << "Ingrese el valor de a, coeficiente de x^2: ";
    cin >> a;
    if (a == 0) {
        cout << "El coeficiente a no puede ser cero." << endl;
        return 1; 
    }
    cout << "Ingrese el valor de b, coeficiente de x: ";
    cin >> b;
    cout << "Ingrese el valor de c, termino independiente: ";
    cin >> c;

    calcularRaices(a, b, c, raiz1, raiz2, sonReales);

    if (sonReales) {
        if (raiz1 == raiz2) {
            cout << "Las raices son reales e iguales. Raiz doble: " << raiz1 << endl;
        } else {
            cout << "Las raices son reales y diferentes." << endl;
            cout << "La primera raiz es: " << raiz1 << endl;
            cout << "La segunda raiz es: " << raiz2 << endl;
        }
    } else {
        cout << "Las raices son complejas." << endl;
    }

    cout << endl;
    cout << "Fin del programa." << endl;

    return 0;
}