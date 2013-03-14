#include "clasespadre.h"

//Constantes
const int fuerza_amuleto=0;
const int beneficio_amuleto=3;
const int fuerza_espada=10;
const int beneficio_espada=0;
const int fuerza_pocima=5;
const int beneficio_pocima=1;

objeto::objeto(int x,int y, char p){
	set_pixel(p);
	set_posxy(x,y);
	
	if(p=='A'){ 
		set_fuerza(fuerza_amuleto);
		set_beneficio(beneficio_amuleto);
	}
	else if(p=='E'){
		set_fuerza(fuerza_espada);
		set_beneficio(beneficio_espada);
	}
	else if(p=='P'){
		set_fuerza(fuerza_pocima);
		set_beneficio(beneficio_pocima);
	}
	else cout << "Construyendo mal objeto" << endl;
}

objeto::objeto(char p){
	set_pixel(p);
}

