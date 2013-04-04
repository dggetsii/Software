#include "mazmorra.h"


mazmorra::mazmorra(char fichero [])
{
    char aux;
    cout << "Introduce las dimensiones" << endl;
    cin >> n_;
    cin >> m_;
    n_+=2;
    m_+=2;

    matriz = new objeto* [getm()];
    for (int i=0; i<getm(); i++)
        matriz[i]= new objeto [getn()];

    for (int i=0; i<getm(); i++)
        for(int j=0; j<getn(); j++)
            matriz[i][j].set_pixel(' ');

    fstream mapa;
    mapa.open(fichero);
    if (mapa.is_open())
        {
            for(int i=1; i<getm()-1; i++)
                for(int j=1; j<getn()-1; j++)
                    {
                        matriz[i][j].set_pixel(mapa.get());
                    }
        }
    else cout << "Fallo del fichero" << endl;
    mapa.close();
}


mazmorra::~mazmorra(){
  for (int i=0; i<getm(); i++)
        delete [] matriz[i];
    delete [] matriz;
   cout << "Mazmorra destruida" << endl;
}

void mazmorra::pintar(){
  
   for(int i=1; i<getm()-1; i++)
        {
            for(int j=1; j<getn()-1; j++)

                cout << matriz[i][j].get_pixel();
        }
}
