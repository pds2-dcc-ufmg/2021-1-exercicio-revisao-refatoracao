#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Cliente.hpp"

class Imovel {
  public:
    Imovel(std::string corretor, double area, int quartos, int banheiros,
           int vagas, double valor_por_m2, Cliente vendedor,
           double taxa_de_comissao, std::string label);
    virtual ~Imovel() {}

    double valor_pre_corretagem() const;
    double valor_pos_corretagem() const;
    double comissao() const;

    void print() const;

    virtual void subtract_from_valor_total() = 0;
    virtual void subtract_from_comissao_total() = 0;
    virtual void add_to_valor_total() = 0;
    virtual void add_to_comissao_total() = 0;

    void set_corretor(std::string);
    void set_area(double);
    void set_quartos(int);
    void set_banheiros(int);
    void set_vagas(int);
    void set_valor_por_m2(double);
    void set_vendedor(Cliente);
    void set_taxa_de_comissao(double);
    std::string get_corretor() const;
    double get_area() const;
    int get_quartos() const;
    int get_banheiros() const;
    int get_vagas() const;
    double get_valor_por_m2() const;
    Cliente get_vendedor() const;
    double get_taxa_de_comissao() const;

  protected:
    std::string corretor_;
    double area_;
    int quartos_;
    int banheiros_;
    int vagas_;
    double valor_por_m2_;
    Cliente vendedor_;
    double taxa_de_comissao_;
    std::string label_;
};

#endif
