#include<iostream>
#include "Libro.h"
#include "Autor.cpp"
#include "Fecha.cpp"
using namespace std;

Libro::Libro(string titulo, Autor _autor, string edicion, string editorial, string lugar, Fecha _fecha, int paginas){
	
	
	Titulo=titulo;
	autor=_autor;
	Edicion=edicion;
	Editorial=editorial;
	Lugar=lugar;
	fecha=_fecha;
	Paginas=paginas;
	
}

Libro::Libro(){
	
}

Libro::~Libro(){
	
}
void Libro::setter_titulo(string _titulo){
	
	Titulo=_titulo;
}
string Libro::getter_titulo(){
	return Titulo;
}

void Libro::setter_autor(Autor _autor){
	
	autor=_autor;
}

Autor Libro::getter_autor(){
	return autor;
}

void Libro::setter_edicion(string _edicion){
	
	Edicion=_edicion;
}

string Libro::getter_edicion(){
	return Edicion;
}

void Libro::setter_editorial(string _editorial){
	Editorial=_editorial;
}
string Libro::getter_editorial(){
	return Editorial;
}

void Libro::setter_fecha(Fecha _fecha){
	
	fecha=_fecha;
}

Fecha Libro::getter_fecha(){
	return fecha;
}

void Libro::setter_paginas(int _paginas){
	
	Paginas=_paginas;
}

int Libro::getter_paginas(){
	return Paginas;
}

void Libro::setter_lugar(string ciudad,string pais){
	Lugar=ciudad+" ("+pais+")";
}
string Libro::getter_lugar(){
	return Lugar;
}
void Libro::LeerLibro(){
	string ciudad,pais;

	autor.leerPersona();
	cout<<"Titulo: ";
	cin>>Titulo;
	cout<<"Editorial: ";
	cin>>Editorial;
	cout<<"Edicion: ";
	cin>>Edicion;
	cout<<"Paginas: ";
	cin>>Paginas;
	cout<<"\nLugar ";
	cout<<"\nCiudad: ";
	cin>>ciudad;
	cout<<"Pais: ";
	cin>>pais;
	setter_lugar(ciudad,pais);
	fecha.leerFecha();
	
}

void Libro::mostrarLibro(){
	cout<<"\nTitulo: "<<Titulo;
	cout<<"\nAutor: ";
	autor.mostrarpersona();
	cout<<"\nED: ";
	cout<<Edicion;
	cout<<"\n"<<Editorial<<", "<<Lugar<<", ";
	fecha.mostrarFecha();
	cout<<"\n"<<Paginas<<" paginas";
	
}
