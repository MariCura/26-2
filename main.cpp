#include <iostream>
#include <vector>

#include "guardar.h"
#include "Algebra_Lineal.h"
#include "Curso.h"
#include "ProgramacionII.h"
#include "c1v.h"
#include "Quimica.h" // coming soon...
#include "Intro_meca.h"

using namespace std;

void menuCalcular(vector<Curso>& cursos) {
    int select;
    do {
        cout << "\n===== CALCULAR NOTAS =====" << "\n";
        cout << "1.- Calculo de una variable" << "\n";
        cout << "2.- El diablo en persona (intro a meca)" << "\n";
        cout << "3.- Algebra Lineal" << "\n";
        cout << "4.- Programacion II" << "\n";
        cout << "5.- Quimica Aplicada" << "\n";
        cout << "6.- Biologia Para ingenieros" << "\n";
        cout << "0.- Volver al menu principal" << "\n";
        cout << "Curso escogido: ";
        cin >> select;

        if      (select == 1) cursos.push_back(getCalculo());
        else if (select == 2) cursos.push_back(getFisica());
        else if (select == 3) cursos.push_back(getAlgebra());
        else if (select == 4) cursos.push_back(getProgra());
        else if (select == 5) cout<<"[Aun no disponible]\n";
        else if (select == 6) cout<<"[Aun no disponible]\n";

    } while (select != 0);
}

void menuVerNotas(vector<Curso>& cursos) {
    int select;
    do {
        cout << "\n===== VER NOTAS =====" << "\n";
        cout << "1.- Calculo de una variable" << "\n";
        cout << "2.- Intro a la Mecanica" << "\n";
        cout << "3.- Algebra Lineal" << "\n";
        cout << "4.- Programacion II" << "\n";
        cout << "0.- Volver al menu principal" << "\n";
        cout << "Curso escogido: ";
        cin >> select;

        bool encontrado = false;
        string nombre;

        if      (select == 1) nombre = "Calculo de una Variable: ";
        else if (select == 2) nombre = "Introduccion a la Mecanica";
        else if (select == 3) nombre = "Algebra Lineal: ";
        else if (select == 4) nombre = "Programacion II: ";

        if (select >= 1 && select <= 4) {
            for (const auto& c : cursos) {
                if (c.nombre == nombre) {
                    cout << "\n" << c.nombre << c.nota << " - " << c.creditos << " creditos\n";
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
                cout << "\nAun no has calculado ese curso en esta sesion.\n";
        }

    } while (select != 0);
}

void Ponderar(vector<Curso>& cursos) {
    cout << "\n[Proximamente]\n";
}


int main() {
    int select;
    vector<Curso> cursos;
    cargarNotas(cursos);

    do {
        cout << "\n===== CALCULADORA DE NOTAS 26-2 =====" << "\n";
        cout << "1.- Calcular notas"     << "\n";
        cout << "2.- Ver notas"          << "\n";
        cout << "3.- Calcular ponderado" << "\n";
        cout << "4.- Salir"              << "\n";
        cout << "Opcion: ";
        cin >> select;

        if      (select == 1) menuCalcular(cursos);
        else if (select == 2) menuVerNotas(cursos);
        else if (select == 3) Ponderar(cursos);

    } while (select != 4);

    guardarNotas(cursos);
    cout << "\nHasta luego!\n";
    return 0;
}
