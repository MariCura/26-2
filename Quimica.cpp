//
// Created by rnap on 11/10/26.
//
#include "Quimica.h"
#include <iostream>
#include <cmath>
using namespace std;


int Lab_quimica() {
    cout <<"---- LAB Quimica ---- "<<"\n";
    int lab_informe, lab_test;
    int cclab = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese su informe " <<i+1<<": ";
        cin >> lab_informe;
        cout << "Ingrese su test " <<i+1<<": ";
        cin >> lab_test;
        cclab = lab_informe + lab_test;
    }
    cout << "El valor de su Lab de quimica es: "<< cclab/8.0<<"\n";
    return round(cclab/8);
}

int EC_quimica() {
    cout <<"---- EC Quimica ---- "<<"\n";
    int cct = 0;
    int test;
    for (int i = 0; i < 13; i++) {
        cout << "Ingrese su test " <<i+1<<": ";
        cin >> test;
        cct += test;
    }
    cout << "El valor de su EC quimica es: "<< cct/13.0<<"\n";
    return round(cct/13);
}

int Parcial_quimica() {
    float Parcial;
    cout <<"Ingrese su parcial de quimica: ";
    cin >> Parcial;
    return round(Parcial);
}

int Final_quimica() {
    float Final;
    cout <<"Ingrese su final de quimica: ";
    cin >> Final;
    return round(Final);
}

float Quimica() {
    float quim = 0.2 * Parcial_quimica() + 0.3 * Final_quimica() + 0.3 * Lab_quimica() + 0.2 * EC_quimica();
    cout << "Tu nota FINAL: " << quim << "\n";
    return quim;
}

Curso getQuimica() {
    cout <<"\n"<< "Calculando Quimica Aplicada..."<<"\n";
    return {"Quimica Aplicada: ", Quimica(), 4};
}


