#pragma once
#include <iostream>
using namespace std;
void inicializarMatriz(int matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 0;
        }
    }
}
void mostrarMatriz(int matriz[][100], int n, string ciudades[]) {

    cout << "\nMatriz de conectividad:\n\n";

   
    cout << "      ";
    for (int i = 0; i < n; i++) {
        cout << ciudades[i] << " ";
    }
    cout << endl;

  
    for (int i = 0; i < n; i++) {
        cout << ciudades[i] << " ";
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "       ";
        }
        cout << endl;
    }
    //perra de mrd
}

void cargarRutas(int matriz[][100]) {
    matriz[0][1] = 1; 
    matriz[1][2] = 1;
    matriz[2][3] = 1; 
   
}
