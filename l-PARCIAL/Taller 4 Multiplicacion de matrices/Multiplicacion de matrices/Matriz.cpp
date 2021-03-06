#pragma warning (disable:4996)
#include <conio.h>
#include "Matriz.h"
#include<iostream>
////////////////////////////////////////////////////////////////////////
// Name:       ingresar(const char* msj)
// Purpose:    Implementation de ingresar()
// Parametros:
// - msj
// Return: datos    
//////////////////////////////////////////////////////////////////////// 
char* ingresar(const char* msj)
{
	char* datos=(char*)calloc(10,sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			*(datos+ i++) = c;
		}
	}
	return datos;
}
 ////////////////////////////////////////////////////////////////////////
// Name:       Matriz::llenarMatriz()
// Purpose:    Implementation de Matriz::llenarMatriz()
// Parametros:
// Return:    
//////////////////////////////////////////////////////////////////////// 
void Matriz::llenarMatriz(int dim){
	
	for (int i = 0;i < dim;i++) {
		for (int j = 0;j < dim;j++){
			matriz[i][j]=atoi(ingresar("\nIngrese numero fila-columna : "));
		}
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::imprimirMatriz()
// Purpose:    Implementation de Matriz::imprimirMatriz()
// Parametros:
// Return:    
//////////////////////////////////////////////////////////////////////// 
void Matriz::imprimirMatriz(int dim){
	
	for (int i = 0;i < dim; i++) {
		std::cout <<std::endl;
		for (int j = 0;j < dim;j++) {
			std::cout << matriz[i][j]<<"\t";
		}
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::encerar()
// Purpose:    Implementation de Matriz::encerar()
// Parametros:
// Return:    
//////////////////////////////////////////////////////////////////////// 
void Matriz::encerar(int dim)
{
	for (int i = 0;i < dim;i++) {
		for (int j = 0; j < dim;j++) {
			matriz[i][j] = 0;
		}
	}
}




