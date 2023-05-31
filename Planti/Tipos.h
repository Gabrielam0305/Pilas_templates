#pragma once
#include <iostream>
#include <string>
#include "Pila.h"
#include "MiClase.h"
using namespace std;

template <typename tipos>
inline void agregar(tipos& value, tipos aumento, Pila<tipos>& pilas, size_t size) {
    cout << value << " ";
    value = value + aumento;
    pilas.insertar(value - 1);
}

template <>
inline void agregar(string& value, string aumento, Pila<string>& pilas, size_t size) {
    string Temporal = value + to_string(size);
    pilas.insertar(Temporal);
    cout << Temporal << " ";
}

template <>
inline void agregar(MiClase& value, MiClase aumento, Pila<MiClase>& pilas, size_t size) {
    string Temporal = "MC" + to_string(size);
    cout << Temporal << " ";
    MiClase obj_MiClase(Temporal);
    pilas.insertar(obj_MiClase);
}

inline void agregar(double& value, double aumento, Pila<double>& pilas, size_t size) {
    cout << value << " ";
    value = value + aumento;
    pilas.insertar(value - 1.1);
}

template <typename tipos>
void Tipos(tipos value, tipos aumento, string nom_funcion, const size_t size) {
    Pila<tipos> pila;
    cout << "--> Insertar elementos en " << nom_funcion << endl;
    for (size_t i = 0; i < size; ++i) {
        agregar(value, aumento, pila, i);
    }
    cout << "\n<-- Extraer elementos de " << nom_funcion << endl;

    while (!pila.estaVacia()) {
        cout << pila.encima() << " ";
        pila.extraer();
    }
    cout << endl;
}
