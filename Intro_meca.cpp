//
// Created by rnap on 11/10/26.
//

#include "Intro_meca.h"
#include <cmath>
#include <iostream>
using namespace std;

int EC1_Fisica() {
    int TA1, TA2, TI1, Bonus1;

    cout << "EC1 - Ingrese Tarea 1 de aula: ";
    cin >> TA1;
    cout << "EC1 - Ingrese Tarea 2 de aula: ";
    cin >> TA2;
    cout << "EC1 - Ingrese Tarea individual 1 (aula magna, individual + grupal): ";
    cin >> TI1;
    cout << "Ingrese sus puntos Bonus: ";
    cin >> Bonus1;

    float ec1 = ((0.60 * ((TA1 + TA2) / 2.0) + 0.40 * TI1) + Bonus1);
    cout << "Su EC1 vale: " << ec1 << "\n";
    return round(ec1);
}


int EC2_Fisica() {
    int TA3, TA4, TI2, Bonus2;

    cout << "EC2 - Ingrese Tarea 3 de aula: ";
    cin >> TA3;
    cout << "EC2 - Ingrese Tarea 4 de aula: ";
    cin >> TA4;
    cout << "EC2 - Ingrese Tarea individual 2 (aula magna, individual + grupal): ";
    cin >> TI2;

    cout << "Ingrese sus puntos Bonus: ";
    cin >> Bonus2;


    float ec2 = ((0.60 * ((TA3 + TA4) / 2.0) + 0.40 * TI2) + Bonus2);
    cout << "Su EC2 vale: " << ec2 << "\n";
    return round(ec2);
}

int Lab_Fisica() {
    float L1, L2, L3, L4;

    cout << "Ingrese nota Laboratorio 1 (presencial): ";
    cin >> L1;
    cout << "Ingrese nota Laboratorio 2 (presencial): ";
    cin >> L2;
    cout << "Ingrese nota Laboratorio 3 (presencial): ";
    cin >> L3;
    cout << "Ingrese nota Laboratorio 4 (virtual): ";
    cin >> L4;

    int l1 = round(L1 + L2);
    int l2 = round(L3 + L4);

    return round(0.5 * l1 + 0.5 * l2);
}
float Fisica() {
    float E1, E2;
    float ec1 = EC1_Fisica();
    float ec2 = EC2_Fisica();
    float lab = Lab_Fisica();

    cout << "Ingrese nota Examen Parcial (E1): ";
    cin >> E1;
    cout << "Ingrese nota Examen Final (E2): ";
    cin >> E2;

    float nf = 0.20 * E1
             + 0.30 * E2
             + 0.20 * lab
             + 0.30 * (0.5 * ec1 + 0.5 * ec2);

    cout << "Tu nota FINAL de Fisica: " << nf << endl;
    return nf;
}

Curso getFisica() {
    cout <<"\n"<< "Calculando Introduccion a la mecanica..."<<"\n";
    return {"Introduccion a la Mecanica", Fisica(), 4};
}