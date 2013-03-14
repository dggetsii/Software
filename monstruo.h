#pragma once
#include "clasespadre.h"

//Constantes
const int fuerza_dragon = 20;
const int vida_dragon = 1;
const int fuerza_trol=10;
const int vida_trol=3;

class monstruo: public personaje {
public:
  virtual void mover () const=0;
  virtual void rellenar() const=0;
};

class dragon: public monstruo{
public:
  dragon();
  dragon(int,int);
   ~dragon(){cout << "Muerto dragon" << endl;};
  void mover ();
  void rellenar();
};

class trol: public monstruo{
private:
  int sentido;
public:
  trol();
  trol(int,int,int);//x,y,sentido
  ~trol(){cout<< "Muerto trol" << endl;};
  inline void set_sentido (int s){sentido=s;};
  inline int get_sentido (){return sentido;};
  void mover ();
  void rellenar();
};