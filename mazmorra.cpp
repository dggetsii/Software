#include "mazmorra.h"


mazmorra::mazmorra(char fichero []){
	char aux;
	cout << "Introduce las dimensiones" << endl;
	cin >> n_;
	cin >> m_;
	
	matriz = new objeto** [getm()];
	for (int i=0; i<getm(); i++){
		matriz[i]= new objeto* [getn()+1];
		for(int j=0;j<=getn()+1;j++)
			matriz[i][j] = new objeto;
	}
		
		fstream mapa;
	mapa.open(fichero);
	if (mapa.is_open())
	{
		for(int i=0; i<getm(); i++)
			for(int j=0; j<=getn()+1; j++){
				aux=mapa.get();
				switch (aux){
					case 'X':
						matriz[i][j] = new prota(i,j);
					default: 
						matriz[i][j]= new objeto(aux);
				}
				
			}
	}
	else cout << "Fallo del fichero" << endl;
					       mapa.close();
	
	hab= new habitacion[n_hab];
}

mazmorra::~mazmorra(){

// 	for (int i=0; i<getm(); i++)
// 		for (int j=0; j<getn()+1; j++)
// 			delete matriz[i][j];//Solo borra objeto (0,0) falla en los demas
// 	delete [] matriz;
	cout << "Mazmorra destruida" << endl;
}

void mazmorra::pintar(){
	
	matriz[hab[0].habx][hab[0].haby]->set_pixel('1');
	matriz[hab[0].habx_][hab[0].haby_]->set_pixel('2');
	matriz[hab[1].habx][hab[1].haby]->set_pixel('3');
	matriz[hab[1].habx_][hab[1].haby_]->set_pixel('4');
	matriz[hab[2].habx][hab[2].haby]->set_pixel('5');
	matriz[hab[2].habx_][hab[2].haby_]->set_pixel('6');
	
// 	cout << hab[0].habx << " " << hab[0].haby << endl;
// 	cout << hab[0].habx_ << " " << hab[0].haby_ << endl;
// 	cout << hab[1].habx << " " << hab[1].haby << endl;
// 	cout << hab[1].habx_ << " " << hab[1].haby_ << endl;
// 	cout << hab[2].habx << " " << hab[2].haby << endl;
// 	cout << hab[2].habx_ << " " << hab[2].haby_ << endl;
	
	for(int i=0; i<getm(); i++)
	{
		for(int j=1; j<=getn()+1; j++)
			cout << matriz[i][j]->get_pixel();
	}
}

void mazmorra::busca_habitaciones(){
	
	for (int i=0; i<getm(); i++ )
	{
		for (int j=0; j<getn(); j++)
		{
			if(i!=getm() && j!=getm()){
				if ( matriz[i][j]->get_pixel() == '*' && (matriz[i][j+1]->get_pixel() == '*' || matriz[i][j+1]->get_pixel() == '+') 
					&&(matriz[i+1][j]->get_pixel() == '*' || matriz[i+1][j]->get_pixel() == '+')  )
				{
					if(j<getn()/2 && i<=getm()/2)
					{
						hab[0].habx=i;
						hab[0].haby=j;
					}
					
					if(j>=getn()/2 && i<=getm()/2)
					{
						
						hab[1].habx=i;
						hab[1].haby=j;
					}
					if(i>getm()/2)
					{
						hab[2].habx=i;
						hab[2].haby=j;
					}
				}
			}
			if(i!=0 && j!=0){ 
				if(matriz[i][j]->get_pixel()== '*' && (matriz[i][j-1]->get_pixel() == '*'|| matriz[i][j-1]->get_pixel() == '+' )
					&& (matriz[i-1][j]->get_pixel() == '*' || matriz[i-1][j]->get_pixel()== '+' ))
				{
					if(j<getn()/2 && i<= getm()/2)
					{
						hab[0].habx_=i;
						hab[0].haby_=j;
					}
					if(j>=getn()/2 && i<=getm()/2)
					{
						hab[1].habx_=i;
						hab[1].haby_=j;
					}
					if(i>getm()/2)
					{
						hab[2].habx_=i;
						hab[2].haby_=j;
					}
				}
			}      
		}
	}
}

void mazmorra::genera_monstruos(){
	for (int i=0;i<n_hab;i++){
		for(int j=0;j<n_dra;j++){
			//matriz[generar_coordenada(hab[j].habx,hab[j].habx_)][generar_coordenada(hab[j].haby,hab[j].haby_)] new
			
		}
		
	}
}

int mazmorra::generar_coordenada(int a,int b){
    int aux;
    aux=  a+rand()%(b-a);
    return aux;
}