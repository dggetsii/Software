#pragma once
#include "librerias.h"
class objeto {	
private:
	char pixel;
	int posx,posy;
	int fuerza, beneficio;
	
public:
	objeto(int,int,char);//x,y,tipo de objeto
	objeto(char);//Cualquier elemento
	objeto(){};
	~objeto(){};
	
	inline void set_pixel (char p){pixel=p;};
	inline void set_posxy (int x,int y){posx=x;posy=y;};
	inline void set_fuerza(int f){fuerza=f;};
	inline void set_beneficio(int b){beneficio=b;};
	
	inline char get_pixel(){return pixel;};
	inline int get_posx(){return posx;};
	inline int get_posy(){return posy;};
	inline int get_fuerza(){return fuerza;};
	inline int get_beneficio(){return beneficio;};
};


class personaje : public objeto {
private:
	int nvidas;
public:
	personaje(){};
	~personaje(){};
	
	inline void set_nvidas(int n){nvidas=n;};
	inline int get_nvidas(){return nvidas;};
	virtual void mover () const=0;
	virtual void rellenar ()const =0; //Funcion poliformada para colocar el caracter en la celda
};