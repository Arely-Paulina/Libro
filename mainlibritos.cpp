#include <iostream>
#include<windows.h>
#include "stdlib.h"
#include "Libro.cpp"
#include "Libro.h"
//#include "Autor.h"
//#include "Fecha.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

Autor a1("Liang, Y.","Daniel");
Fecha f1("Viernes",16,"Noviembre",2001);
Libro l1("Introduction to Java Programming 3a.Edicion",a1, "-031997-X","Prentice-Hall", "New Jersey (USA)",f1,784),l2;
int opc;
char r1;

do{
	system("cls");
	cout<<"1.Leer nuevo libro\n2.Mostrar libro predeterminado\n";
	cin>>opc;
	switch(opc){
		
		case 1: 
				system("cls");
				l2.LeerLibro();
				Sleep(500);
				system("cls");
				l2.mostrarLibro();
				break;
		case 2: 
				system("cls");
				l1.mostrarLibro();
				break;
		
		default: cout<<"\nLa opcion es incorrecta";
				
	}cout<<"\n\n¿Desea realizar otra operacion de nuevo?(S/N)";
		cin>>r1;
}while(r1=='s'||r1=='S');

	
	return 0;
}
