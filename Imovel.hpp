#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
 public:
  Imovel(string corretor, double area, int quartos, int banheiros,
         int banheiros, int vagas, double valor_por_m2, Cliente vendedor)
      : corretor_(corretor), area_(area), quartos_(quartos),
        banheiros_(banheiros), vagas_(vagas), valor_por_m2_(valor_por_m2),
        vendedor_(vendedor) {}

  virtual double ValorPreCorretagem() const;
  virtual double ValorPosCorretagem() const;
  virtual double Comissao() const;

  void Print();

  void set_corretor(string);
  void set_area(double);
  void set_quartos(int);
  void set_banheiros(int);
  void set_vagas(int);
  void set_valor_por_m2(double);
  void set_vendedor(Cliente);
  void set_taxa_de_corretagem(double);
  string get_corretor() const;
  double get_area() const;
  int get_quartos() const;
  int get_banheiros() const;
  int get_vagas() const;
  double get_valor_por_m2() const;
  Cliente get_vendedor() const;
  double get_taxa_de_corretagem() const;

 protected:
  string corretor_;
  double area_;
  int quartos_;
  int banheiros_;
  int vagas_;
  double valor_por_m2_;
  Cliente vendedor_;
  double taxa_de_corretagem_;
};

#endif
