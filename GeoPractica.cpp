#include <iostream>

using namespace std;

float areaCuadrado(float lado=0) {
    float area= lado*lado;
    return area;  
}

float volumenCilindro(float radio=0.0, float altura=0.0) {
     const float pi=3.1416;
     float volumen= pi*radio*radio*altura;
     return volumen;

}

float volumenEsfera(float radio=0.0) {
    const float pi=3.1416;
    float volumen= (4/3)*pi*radio*radio*radio;
    return volumen;
}


int main() {
    cout << "Calculo de figuras geometricas" << endl;
    cout << "Menu de opciones" << endl;
    int numero1=0, numero2=0,numero3=0,numero4=0,opcion=0;
    cout << "1.calcular el area de un cuadrado" << endl;
    cout << "2.calcular el volumen de un cilindro" << endl;
    cout << "3.calcular el volumen de una esfera" << endl;
    cout <<"4.salir del programa" << endl;
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "ingrese el valor del lado del cuadrado" << endl;
            cin >> numero2;
            cout << "el area del cuadrado es: " << areaCuadrado(numero2) << endl;
            break;
        case 2:
            cout << "ingrese el valor del radio del cilindro" << endl;
            cin >> numero2;
            cout << "ingrese el valor de la altura del cilindro" << endl;
            cin >> numero3;
            cout << "el volumen del cilindro es: " << volumenCilindro(numero2, numero3) << endl;
            break;
        case 3:
            cout << "ingrese el valor del radio de la esfera" << endl;
            cin >> numero2;
            cout << "el volumen de la esfera es: " << volumenEsfera(numero2) << endl;
            break;
        case 4:
            cout << "saliendo del programa..." << endl;
            break;
        default:
            cout << "opcion invalida" << endl;
    }

return 0;
}