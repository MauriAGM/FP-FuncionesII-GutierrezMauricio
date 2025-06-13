//Calculo de raices cuadraticas considera si son raices reales o complejas

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a,b,c,discriminante,raiz1,raiz2;
    cout << "Ingrese los coeficientes a, b y c de la ecuacion cuadratica (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    discriminante = b*b - 4*a*c;
    raiz1 = (-b + sqrt(discriminante)) / (2*a);
    raiz2 = (-b - sqrt(discriminante)) / (2*a);

    cout << "La primera raiz es: " << raiz1 << endl;
    cout << "La segunda raiz es: " << raiz2 << endl;
    return 0;
}
