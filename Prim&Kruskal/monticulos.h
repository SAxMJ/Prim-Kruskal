#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/*
typedef int tipoClave;
typedef int tipoInfo;


typedef struct tipoElemento{

	tipoClave clave;
	tipoInfo info;

}tipoElemento;

typedef struct Monticulo{

	tipoElemento array[];
	int tamanho;	

}Monticulo;

*/

typedef int tipoClave;
typedef int tipoInfo;


typedef struct tipoElementoM{

	//Distancia minima desde el inicio
	tipoClave clave;
	//Numero de vértice
	tipoInfo info;	
	
}tipoElementoM;

typedef struct Monticulo{

	tipoElementoM array[MAX];
	int tamanho;

}Monticulo;

typedef Monticulo *MonticuloRef;


void monticuloVacio(MonticuloRef);
void insertarEnMonticulo(MonticuloRef m);
void insertarEnMonticulo2(tipoElementoM xm,MonticuloRef m);
tipoElementoM nuevoNodo(void);
tipoElementoM eliminarMinimo(MonticuloRef m);
void filtradoDescendente(MonticuloRef m, int i);
void crearMonticulo(MonticuloRef m2);
int decrementarClave(int,int,MonticuloRef);
void filtradoAscendente(Monticulo *m, int i);
int incrementarClave(int pos, int cant, MonticuloRef m);


