#include "hash.h"


const int liminf = 25000001;
const int  limsup = 75000000;

/*void menu (int num){
	cout << "Numero de celdas" << endl;
	cin >> ;
	cout << "Tamanio de los bloques" << endl;
	cin >> ;
	cout >> "Metodo de exploracion" << endl;
	cin >> ; //hacemos una
	cout << "Factor de carga" << endl;
	cin >> ;//Numero de dnis por celda
	cout << "Numero de pruebas a realizar" << endl;
	cin >> ; //Una
}

void stats (){
	cout << "Estadisticas" << endl;
	
}

*/
int main (){
	srand(time(NULL));
	int *BANCO;
	int n; // Almacenarlo en la clase, par hacerle el modulo
	cout << "Cuantos valores quiere en el banco de prueba?" << endl;
	cin >> n; //Guardarlo en la clase tabla
	BANCO = new int [n];
	for (int i=0;i<n;i++)
		BANCO[i]= rand()%(limsup-liminf);
	/*for(int j=0;j<n;j++)
		cout << BANCO[j] << " ";
	cout << endl;*/
	
	return 0;
	
}
