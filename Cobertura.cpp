#include <iostream>
#include <string>
#include "Cobertura.hpp"
using namespace std;

//Calcula a comissao para uma cobertura
double Cobertura::comissao()  {
    double c = area * valor_m2;
    return c * tx_com_cob;
}

//Imprime os dados do imóvel
void Cobertura::print() {
    cout << "[Cobertura]" << endl;
    Imovel::print ();
    cout 
      << "Area: " << area << endl 
      << "  Quartos: " << num_quarto << endl 
      << "  Banheiros: " << num_banheiro << endl 
      << "  Vagas: " << num_vaga << endl 
      << "Taxa de Comissão: " << tx_com_cob * 100 << "%" << endl	//Multiplicado por 100 para mostrar em %
      << "Valor Comissão: R$ " << fixed << setprecision (2) << valor_comissao << endl
      << "Valor de Venda: R$ " << fixed << setprecision (2) << valor_imovel << endl;

}


