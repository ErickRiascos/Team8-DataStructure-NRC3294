// Funciones Trigonometricas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Csc.h"
#include<conio.h>
using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    double x=0, r;
    do {
        cout << "MENU:\n1. Calcular la csc de un numero en grados" << endl;
        cout << "2. Salir" << endl;
        cout << "Elija una opcion: ";
        Csc s(x);
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el valor del angulo en grados:" << endl;
            cin >> x;
            s.setAngulo(x);
            s.gradARad();
            cout << "Csc del angulo: \t" << s.calcular() << endl;
            break;
        case 2:
            repetir = false;
            break;
        }
        system("pause");
        system("CLS");
    } while (repetir);
}