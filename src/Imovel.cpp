#include <iostream>
#include "Imovel.hpp"

  void Imovel::set_area_imovel(double area_imovel){
    _area_imovel = area_imovel;
  }

  double Imovel::get_area_imovel(){
    return _area_imovel;
  }

  void Imovel::set_valor_imovel(){
    double valor_ant = _area_imovel*_valor_m2;
    _valor_imovel = valor_ant + (valor_ant*_porcentagem_comissao/100);
  }

  double Imovel::get_valor_imovel(){
    return _valor_imovel;
  }

  void Imovel::set_valor_m2(double valor_m2){
    _valor_m2 = valor_m2;
  }
  double Imovel::get_valor_m2(){
    return _valor_m2;
  }

  void Imovel::set_porcentagem_comissao(double porcentagem_comissao){
    _porcentagem_comissao = porcentagem_comissao;
  }
  double Imovel::get_porcentagem_comissao(){
    return _porcentagem_comissao;
  }

  void Imovel::set_valor_comissao(){
    _valor_comissao = (_area_imovel*_valor_m2)*(_porcentagem_comissao/100);
  }
  
  double Imovel::get_valor_comissao(){
    return _valor_comissao;
  }

  void Imovel::set_quartos(int quartos){
    _quartos = quartos;
  }
  int Imovel::get_quartos(){
    return _quartos;
  }
    
  void Imovel::set_banheiros(int banheiros){
    _banheiros = banheiros;
  }
  int Imovel::get_banheiros(){
    return _banheiros;
  }

  void Imovel::set_vagas(int vagas){
    _vagas = vagas;
  }
  int Imovel::get_vagas(){
    return _vagas;
  }

  void Imovel::set_corretor(string corretor){
    _corretor = corretor;
  }
  string Imovel::get_corretor(){
    return _corretor;
  }

  void Imovel::print() {
    std::cout << "[Vendedor]" << std::endl;
    vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + get_corretor() << std::endl;
    std::cout << "Area: " << get_area_imovel() << endl
      << "  Quartos: " << get_quartos() << endl
      << "  Banheiros: " << get_banheiros() << endl
      << "  Vagas: " << get_vagas() << endl
      << "Taxa de Comissão: " << fixed << setprecision(0) << get_porcentagem_comissao() << "%" << endl
      << "Valor Comissão: R$ " << fixed << setprecision(2) << get_valor_comissao() << endl
      << "Valor de Venda: R$ " << fixed << setprecision(2) << get_valor_imovel() << endl;
  }