#include "LIBRO.h"
#include <iostream>

using namespace std;
LIBRO::LIBRO(void)
{
	inicio = 0; fin = 0;
}
bool LIBRO::Encolar(int Valor)
{
	bool error;
	if (fin == MAX)
		error = true;
	else 
	{
		error = false;
		dato[fin] = Valor;
		fin++;
	}
	return error;
}
bool LIBRO::Deseconlar(void)
{
	bool error;
	if (ColaVacia())
		error = true;
	else {
		error = false;
		inicio++;

	}
	return error;
}
bool LIBRO::PrimeroCola(int& Valor)
{
	bool error;
	if (ColaVacia())
		error = true;
	else {
		error = false;
		Valor = dato[inicio];

	}
}
bool LIBRO::ColaVacia(void)
{
	bool b_aux;
	if (inicio == fin) b_aux = true;
	else b_aux = false;
	return b_aux;
}
void LIBRO::Mostrar(void)
{
	for (int i = inicio; i < fin; i++)
		cout << "[" << dato[i] << "]" << endl;
	cout << endl << endl;
}
