#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

//Dispersion con direccionamiento abierto
//Dispersion pseudo-aleatoria
class celda{
public:

int valor;
bool bussy; // Saber si la celda esta vacia o llena

// Constructor por defecto
inline celda(){valor=0;bussy=false;};
// Constructor por parametros
inline celda(int v){valor=v;bussy=false;};
~celda();


};

class tabla{
public:
tabla();
~tabla();

inline void setn(int);
int getn();

int hash(int);

private:
int n; // numero de elementos de la tabla
int m; // Numero de celdas de la tabla

celda **vector; //  Tabla de punteros a celda.

int factorCarga;

//hashes
//Exploracion lineal
int explineal();

};
