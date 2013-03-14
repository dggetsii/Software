
#include "prota.h"

prota::prota(int x,int y){
	set_pixel('@');
	
	set_posxy(x,y);
	set_fuerza(fuerza_prota);
	set_nvidas(vida_prota);
	set_beneficio(0);
	
}

void prota::mover(){};
void prota::rellenar(){};