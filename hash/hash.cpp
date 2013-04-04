#include"hash.h"
int tabla::hash(int dni){
	int indice;
	indice = dni%n;
	return indice;
}
