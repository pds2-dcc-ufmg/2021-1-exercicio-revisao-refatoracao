
#include <iostream>
#include <string>
#include "Imovel.hpp"

  //Calcula comissao para o Imóvel
  double Imovel::comissao(){
    
  }
  
  //Calcula o valor do imóvel
  double Imovel::valor ()
  {
    return area * valor_m2;
  }

  //Imprime dados do imóvel
  void Imovel::print ()
  {
    cout << "[Vendedor]" << endl;
    vendedor.print ();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
  }