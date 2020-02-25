#include <iostream>
#include <stdlib.h>
#include <conio.h>
#ifndef FechaH
#define FechaH

using namespace std;
class Fecha{
	string Dia;
	int Numero;
	string Mes;
	int Anio;
	
	public:
		Fecha(string, int, string, int);
		Fecha();
		~Fecha();
		void setter_dia(string);
		void setter_numero(int);
		void setter_mes(string);
		void settter_anio(int);
		string getter_dia();
		int getter_numero();
		string getter_mes();
		int getter_anio();
		void mostrarFecha();
		void leerFecha();
	
	
	
};
#endif

