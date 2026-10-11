#include <iostream>

#include "Algebra_Lineal.h"
#include "Curso.h"
#include "ProgramacionII.h"
#include "c1v.h"
#include "Quimica.h" // coming soon....
#include "Intro_meca.h"


using namespace std;

int main() {
    int select;
    vector<Curso> cursos;

    do {
        cout <<"\n"<< "Selecciona el curso a calcular: "<<"\n";
        cout << "1.- Calculo de una variable"<<"\n";
        cout << "2.- El diablo en persona (intro a meca)"<<"\n";
        cout << "3.- Algebra lineal"<<"\n";
        cout << "4.- Programacion II"<<"\n";

        cout << "Curso escogido: ";
        cin >> select;

        if (select == 1) {
            cursos.push_back(getCalculo());
        } else if (select == 2) {
            cursos.push_back(getFisica());
        } else if (select == 3) {
            cursos.push_back(getAlgebra());
        } else if (select == 4) {
            cursos.push_back(getProgra());
        }
    } while (select != 8);

    return 0;
}
