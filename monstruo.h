#pragma once
#include "clasespadre.h"

class monstruo: public personaje {
public:
  virtual void mover () const=0;
  
};

class dragon: public monstruo{
public:
  dragon();
   ~dragon(){cout << "Muerto dragon" << endl;};
  void mover ();
};

class trol: public monstruo{
private:
  int sentido;
public:
  trol();
  ~trol(){cout<< "Muerto trol" << endl;};
  inline void set_sentido (int s){sentido=s;};
  inline int get_sentido (){return sentido;};
  void mover ();
};