//
// Created by rnap on 11/10/26.
//
#include <iostream>
#include "c1v.h"
#include <cmath>
#include <numeric>
#include <vector>

using namespace std;

void minNOTA(vector<int> &notas) {
    int mini = notas[0];
    for (int i = 1; i < notas.size(); i++) {
        if (notas[i] < mini) {
            mini = notas[i];
        }
    }
    for (int i = 0; i < notas.size(); i++) {
        if (notas[i] == mini) {
            notas.erase(notas.begin() + i);
            break;
        }
    }
}

float calculoEC() {
    vector<int>notasAP(6);
    int a, b;
    cout<<"Coloca tus AP 1-6:"<<"\n";
    for (int i=0;i<6;i++) {
        cin >> a >> b;
        notasAP[i] = (a+b)/2;
    }
    minNOTA(notasAP);
    int EA1, EA2;
    cout<<"EA1:";
    cin>>EA1;
    cout<<"EA2:";
    cin>>EA2;

    int AP = accumulate(notasAP.begin(), notasAP.end(), 0);

    int ED = 0;
    int aux;
    for (int i=0;i<2;i++) {
        cout<<"Coloca tu ED"<<i+1<<": ";
        cin >> aux;
        ED = ED+aux;
    }
    int bonus;
    cout<<"Cuantos puntos bonus tienes: ";
    cin >> bonus;
    float res = 0.02*AP + 0.15*(ED) + 0.3*(EA1 + EA2 + bonus);

    cout<<"Tu EC: "<<res<<endl;

    return res;
}

float Calculo(){
    int EC1 = round(calculoEC());
    int EC2 = round(calculoEC());
    int EP;
    int EF;

    cout<<"Tu nota del parcial: ";
    cin >> EP;
    cout<<"Tu nota del final: ";
    cin >> EF;

    float final = 0.25f*EC1 + 0.25f*EC2 + 0.30f*EF + 0.20f*EP;
    cout << "Tu nota FINAL: " << final;
    return final;
};

Curso getCalculo() {
    cout <<"\n"<< "Calculando Calculo de una variable..."<<"\n";
    return {"Calculo de una Variable: ", Calculo(), 4};
}
