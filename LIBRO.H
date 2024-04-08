#pragma once
#define MAX 100

class LIBRO
{
private:
	int dato[MAX];
	int inicio, fin;
public:
	LIBRO(void);
	bool Encolar(int Valor);
	bool Deseconlar(void);
	bool PrimeroCola(int& valor);
	bool ColaVacia(void);
	void Mostrar(void);
	
};

