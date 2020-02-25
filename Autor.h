#include <iostream>
#include <stdlib.h>
#ifndef AutorH
#define AutorH
using namespace std;


class Autor{
	string Nombre;
	string Apellido;
	
	public:
		Autor(string, string);
		Autor();
		~Autor();
		void setter_nombre(string);
		void setter_apellido(string);
		string getter_nombre();
		string getter_apellido();
		void mostrarpersona();
		void leerPersona();
	
};
#endif


