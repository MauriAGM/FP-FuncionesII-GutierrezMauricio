//Cálculo del Área de un Círculo
// p * r^2
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radio, area;
    const double PI = 3.1415;
    
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    area = PI * pow(radio, 2);
    cout << "El area del circulo es: " << area << endl;
    return 0;
}