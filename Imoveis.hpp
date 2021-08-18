#ifndef IMOVEIS_HPP
#define IMOVEIS_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Imovel.hpp"

using namespace std;

class Imoveis {
  std::vector<Imovel*> list;  
  void printResumoGeral () const;

  public:
    ~Imoveis() {
      for(Imovel* imovel : list) {
        delete imovel;
      }
    }  

    template <class T>
    static void printSomas (string titulo);

    void add (Imovel* imovel);
    void printRelatorio () const;
};

#endif 