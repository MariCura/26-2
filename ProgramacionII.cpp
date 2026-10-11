//
// Created by rnap on 11/10/26.
//

#include "ProgramacionII.h"

#include <cmath>
#include <iostream>
using namespace std;

int examenParcial() {
    float TA1, TA2, Parcial;
    cout<<"Ingrese el valor de su Tarea 1: ";
    cin>>TA1;
    cout<<"Ingrese el valor de su Tarea 2 (video): ";
    cin>>TA2;
    cout<<"Ingrese el valor de su Parcial (video): ";
    cin>>Parcial;

    int res = round(TA1 + TA2 + Parcial);
    return res;
}
int examenFinal() {
    float TA1, TA2, Final;
    cout<<"Ingrese el valor de su Tarea 1: ";
    cin>>TA1;
    cout<<"Ingrese el valor de su Tarea 2 (video): ";
    cin>>TA2;
    cout<<"Ingrese el valor de su Final (video): ";
    cin>>Final;

    int res = round(TA1 + TA2 + Final);
    return res;

}


int EC1_Progra() {
    int PA1, TA1, TA2, TA3, PC1;

    cout << "Ingrese el valor de su Participacion activa: ";
    cin >> PA1;
    cout << "Ingrese el valor de su Tarea 1: ";
    cin >> TA1;
    cout << "Ingrese el valor de su Tarea 2: ";
    cin >> TA2;
    cout << "Ingrese el valor de su Tarea 3: ";
    cin >> TA3;
    cout << "Ingrese el valor de su PC1: ";
    cin >> PC1;

    float ec1 = 0.20 * PA1 + 0.15*TA1 + 0.15*TA2 + 0.20*TA3 + 0.3*PC1;
    cout << "Su EC1 vale: ";
    cout << ec1<<"\n";

    return round(ec1);
}

int EC2_Progra() {
    int PA2, TA4, TA5, TA6, PC2;

    cout << "Ingrese el valor de su Participacion activa: ";
    cin >> PA2;
    cout << "Ingrese el valor de su Tarea 4: ";
    cin >> TA4;
    cout << "Ingrese el valor de su Tarea 5: ";
    cin >> TA5;
    cout << "Ingrese el valor de su Tarea 6: ";
    cin >> TA6;
    cout << "Ingrese el valor de su PC2: ";
    cin >> PC2;

    float ec2 = 0.20 * PA2 + 0.15*TA4 + 0.15*TA5 + 0.20*TA6 + 0.3*PC2;
    cout << "Su EC2 vale: ";
    cout << ec2<<"\n";

    return round(ec2);

}


int P1() {
    int p1;
    cout << "Ingrese el valor de su proyecto 1: ";
    cin >> p1;
    return p1;
}
int P2() {
    int p2;
    cout << "Ingrese el valor de su proyecto 2: ";
    cin >> p2;
    return p2;
}

float Programacion() {
    float res;
    res = 0.10 * examenParcial() + 0.30 * examenFinal() + 0.15 * EC1_Progra() + 0.15 * EC2_Progra() + 0.10 * P1() + 0.20 * P2();
    cout << "Tu nota FINAL: " << res << "\n";
    return res;
}

Curso getProgra() {
    cout <<"\n"<< "Calculando Porgramacion II..."<<"\n";
    return {"Programacion II: ", Programacion(), 4};
}






