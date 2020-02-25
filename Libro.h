#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Autor.h"
#include "Fecha.h"
#ifndef LibroH
#define LibroH
using namespace std;

class Libro{
	
	string Titulo;
	Autor autor;
	string Edicion;
	string Editorial;
	string Lugar;
	Fecha fecha;
	int Paginas;
	
	public:
		Libro(string, Autor, string, string, string, Fecha, int);
		Libro();
		~Libro();
		void setter_titulo(string);
		void setter_autor(Autor);
		void setter_edicion(string);
		void setter_editorial(string);
		void setter_lugar(string,string);
		void setter_fecha(Fecha);
		void setter_paginas(int);
		string getter_titulo();
		Autor getter_autor();
		string getter_edicion();
		string getter_editorial();
		string getter_lugar();
		Fecha getter_fecha();
		int getter_paginas();
		void mostrarLibro();
		void LeerLibro();
	
	
	
};

#endif

