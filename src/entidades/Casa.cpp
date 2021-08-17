#include "Casa.hpp"

Casa::Casa(string _corretor, double _area, double _valorM2, 
          int _quartos, int _banheiros, int _vagas, Cliente _vendedor) :
Imovel(_corretor,_area,_valorM2,_quartos,_banheiros,_vagas,_vendedor,comissaoCasa){}

void Casa::print(){
    this->comissao = comissaoCasa;
    cout << "[Casa]" << endl;
    Imovel::print();
}