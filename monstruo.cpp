#include "monstruo.h"

dragon::dragon(int x,int y){
	set_pixel('D');
	
	set_posxy(x,y);
	set_fuerza(fuerza_dragon);
	set_nvidas(vida_dragon);
	
}
trol::trol(int x,int y, int s){
	set_pixel('T');
	
	set_posxy(x,y);
	set_fuerza(fuerza_trol);
	set_nvidas(vida_trol);
	set_sentido(s);
}