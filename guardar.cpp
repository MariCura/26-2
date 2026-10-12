//
// Created by rnap on 11/10/26.
//

#include "guardar.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;


void guardarNotas(const vector<Curso>& cursos) {
    if (cursos.empty()) {
        cout << "\nNo hay notas que guardar.\n";
        return;
    }
    ofstream archivo("notas.txt");
    if (!archivo.is_open()) {
        cout << "\nError: no se pudo abrir notas.txt\n";
        return;
    }
    for (const auto& c : cursos)
        archivo << c.nombre << c.nota << " - " << c.creditos << "\n";

    archivo.close();
    cout << "\nNotas guardadas en notas.txt\n";
}

void cargarNotas(vector<Curso>& cursos) {
    ifstream archivo("notas.txt");
    if (!archivo.is_open()) {
        cout << "\nNo se encontro notas.txt — empezando desde cero.\n";
        return;
    }
    cursos.clear();
    string linea;
    while (getline(archivo, linea)) {
        // Busca el ultimo espacio antes del " - " para separar nombre+nota de creditos
        size_t sep = linea.rfind(" - ");
        size_t espacio = linea.rfind(' ', sep - 1);

        string nombre    = linea.substr(0, espacio + 1);  // "Calculo de una Variable: "
        string notaStr   = linea.substr(espacio + 1, sep - espacio - 1); // "17.5"
        string credStr   = linea.substr(sep + 3);          // "4"

        cursos.push_back({nombre, stof(notaStr), stoi(credStr)});
    }
    archivo.close();
    cout << "\nNotas cargadas desde notas.txt\n";
}