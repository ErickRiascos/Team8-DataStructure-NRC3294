/*Fecha creación: 03/06/2021
Fecha modificación: 17/05/2021*/
#pragma once
class Matriz
{
private:
	int** matriz;
	int dim;
public:
	Matriz()= default;
	Matriz(int);
	int** segmentar();
	void encerar();
	void ingresar();
	void imprimir();
	int** getMatriz();
	int getDim();
	void setMatriz(int**);
	void setDim(int);
};

