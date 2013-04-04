#pragma once
#include "prota.h"
//GLOBALES
const int n_hab = 3;
const int n_dra =3;
const int n_tro =1;


class habitacion {
public:
  int habx, haby, habx_, haby_;
};

class mazmorra{
private:
  int m_, n_;
  objeto **matriz;
public:
  mazmorra(char []);
  ~mazmorra();
  inline int getm(){return m_;};
  inline int getn(){return n_;};
  
  void busca_habitaciones();
  void pintar ();
};


