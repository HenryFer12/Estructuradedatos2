#include "Estudiante.h"
#include <string>

#include <iostream>

int main()
{
    //Declarar un objeto de la clase estudiante
    Estudiante alumno;
    string nombre;
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    alumno.set_nombre(nombre);//Llamando al metodo set_nombre
    cout << "El nombre del estudiante es: " << alumno.get_nombre()<<endl;//Muestra el atributo de la clase
    cout << "El nombre es: " << nombre;//Muestra la variable local
}
