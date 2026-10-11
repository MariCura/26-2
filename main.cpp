#include <iostream>
#include "Curso.h"
#include "ProgramacionII.h"
#include "c1v.h"
#include "Quimica.h" // coming soon....
#include "Intro_meca.h"


using namespace std;

int main() {
    int select;

    vector<Curso> cursos(6);

    cout << "Selecciona el curso a calcular: "<<"\n";
    cout << "1.- Calculo de una variable"<<"\n";
    cout << "2.- El diablo en persona (intro a meca)"<<"\n";
    cout << "3.- Programacion II"<<"\n"<<"\n";

    cout << "Curso escogido: ";
    cin >> select;

    if (select == 1) {
        cursos.push_back(getCalculo());
    } else if (select == 2) {
        cursos.push_back(getFisica());
    } else if (select == 3) {
        cursos.push_back(getProgra());
    }

    return 0;
}
