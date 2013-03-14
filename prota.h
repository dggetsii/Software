#pragma once
#include "monstruo.h"

//Constantes
const int vida_prota=5;
const int fuerza_prota=5;
//Beneficio puesto directamente en el constructor como 0

class prota : public personaje{
public:
	prota(int,int);
	~prota(){cout << "Ha muerto el heroe" << endl;};
	void mover ();
	void rellenar();
	void pelear ();
};