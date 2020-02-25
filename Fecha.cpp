#include<iostream>
#include "Fecha.h"
using namespace std;

Fecha::Fecha(string dia, int numero, string mes, int anio){
	
	Dia=dia;
	Numero=numero;
	Mes=mes;
	Anio=anio;
	
	
}


Fecha::Fecha(){	
}

Fecha::~Fecha(){

}
void Fecha::setter_dia(string dia){
	
	Dia=dia;
}

void Fecha::setter_mes(string mes){
	
	Mes=mes;
}

void Fecha::setter_numero(int num){
	
	Numero=num;
}

void Fecha::settter_anio(int anio){
	Anio=anio;
}

string Fecha::getter_dia(){
	return Dia;
}

int Fecha::getter_numero(){
	
	return Numero;
}

string Fecha::getter_mes(){
	return Mes;
}

int Fecha::getter_anio(){
	
	return Anio;
}


void Fecha::mostrarFecha(){
	
	cout<<Dia<<" "<<Numero<<" de \n"<<Mes<<" del "<<Anio;
}

void Fecha::leerFecha(){
	cout<<"\nFecha\nDia: ";
	cin>>Dia;
	cout<<"Numero del dia: ";
	cin>>Numero;
	cout<<"Mes: ";
	cin>>Mes;
	cout<<"Anio: ";
	cin>>Anio;
}

