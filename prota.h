
#pragma once
#include "monstruo.h"

class prota : public personaje{
public:
  ~prota(){cout << "Ha muerto el heroe" << endl;};
  void mover ();
  void pelear ();
};