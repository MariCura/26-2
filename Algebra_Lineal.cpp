//
// Created by rnap on 11/10/26.
//

#include "Algebra_Lineal.h"
#include <iostream>
#include <cmath>

using namespace std;

int EP_Algebra() {
    int EP;
    cout<<"\n"<<"Ingrese su Parcial: ";
    cin>>EP;
    return EP;
}
int EF_Algebra() {
    int EF;
    cout<<"Ingrese su Final: ";
    cin>>EF;
    return EF;
}

int AP1_Algebra() {
    int apes[5];
    cout<<"\n"<<"Nota de AP's: "<<"\n";
    for (int i=0; i<5; i++) {
        cout<<"Ingrese su AP"<<i+1<<": ";
        cin>>apes[i];
    }
    int AP_res = 0;
    for (int i=0; i<5; i++) {
        AP_res += apes[i];
    }
    return round((float)AP_res/5.0);
}

int AP2_Algebra() {
    int apes2[5];
    cout<<"\n"<<"Nota de AP's: "<<"\n";
    for (int i=0; i<5; i++) {
        cout<<"Ingrese su AP"<<i+6<<": ";
        cin>>apes2[i];
    }
    int AP_res2 = 0;
    for (int i=0; i<5; i++) {
        AP_res2 += apes2[i];
    }
    return round((float)AP_res2/5.0);
}

int EC1_Algebra() {
    int EA1, EA2;
    cout<<"\n"<<"Ingrese su EA1: ";
    cin>>EA1;
    cout<<"Ingrese su EA2: ";
    cin>>EA2;
    int EAI = (EA1+EA2)/2;
    int CU1;
    cout<<"Ingrese su CU1: ";
    cin>>CU1;

    float ec1;
    ec1 = 0.6*EAI + 0.2*CU1 + 0.2*AP1_Algebra();

    cout<<"\n"<<"Su EC1 es: "<<ec1<<"\n";
    return round(ec1);
}
int EC2_Algebra() {
    int EA3, EA4;
    cout<<"\n"<<"Ingrese su EA3: ";
    cin>>EA3;
    cout<<"Ingrese su EA4: ";
    cin>>EA4;
    int EAII = (EA3+EA4)/2;
    int CU2;
    cout<<"Ingrese su CU2: ";
    cin>>CU2;

    float ec2;
    ec2 = 0.6*EAII + 0.2*CU2 + 0.2*AP2_Algebra();

    cout<<"\n"<<"Su EC2 es: "<<ec2<<"\n";
    return round(ec2);
}

float Algebra() {
    float NF = 0.25*EC1_Algebra()+0.25*EC2_Algebra()+0.2*EP_Algebra()+0.3*EF_Algebra();
    cout<<"\n"<<"Su promedio final es: "<<NF<<"\n";
    return NF;
}

Curso getAlgebra() {
    cout <<"\n"<< "Calculando Algebra Lineal..."<<"\n";
    return {"Algebra Lineal: ", Algebra(), 4};
}