#include <iostream>
#include "Matriz.h"
#define MAX 20

using namespace std;


int main()
{
	Matriz matrix;
	int matriz[MAX][MAX], fil, col, may, opc;
	float prom;
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> fil;
	} while ((fil <= 0) || (fil > MAX));

	do {
		cout << "Ingrese el numero de columnas: ";
		cin >> col;
	} while ((col <= 0) || (col > MAX));
	matrix.set_fil(fil);
	matrix.set_col(col);
	//Menu
	do {
		cout << "\t Menu\n";
		cout << "\t ====\n\n";
		cout << "(1) Cargar Matriz\n";
		cout << "(2) Mostrar Matriz\n";
		cout << "(3) Promedio Matriz\n";
		cout << "(4) Mayor Matriz\n";
		cout << "(0) Salir\n";
		cout << "Opcion:";
		cin >> opc;
		switch (opc) {
		case 1: matrix.cargarmat(matriz, fil, col);
			break;
		case 2: matrix.mostrarmat(matriz, fil, col);
			break;
		case 3: prom = matrix.promedio(matriz, fil, col);
			cout << "El valor promedio es: " << prom;
			break;
		case 4: cout << "El mayor es: " << matrix.mayor(matriz, fil, col);
			break;
		case 0: cout << "Salir\n";
			break;
		default: cout << "Error\n";
			break;
		}
		
		 // Limpie la pantalla y funciona stdlib
	} while (opc != 0);
	return 0;
}
