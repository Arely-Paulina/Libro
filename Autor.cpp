#include<iostream>
#include "Autor.h"
using namespace std;

Autor::Autor(string nombre, string apellido){
	
	Nombre=nombre;
	Apellido=apellido;
	
}

Autor::Autor(){
	
}

Autor::~Autor(){
	
}

void Autor::setter_apellido(string apellido){
	
	Apellido=apellido;
}


void Autor::setter_nombre(string nombre){
	
	Nombre=nombre;
}


string Autor::getter_apellido(){
	
	return Apellido;
}

string Autor::getter_nombre(){
	return Nombre;
}


void Autor::leerPersona(){
	cout<<"\nNombre: ";
	cin>>Nombre;
	cout<<"Apellido: ";
	cin>>Apellido;
}
void Autor::mostrarpersona(){
	
	cout<<Nombre<<" "<<Apellido;
	
}
