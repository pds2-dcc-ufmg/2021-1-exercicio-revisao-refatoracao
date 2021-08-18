#include <iostream>
#include <string>
#include "Apartamento.hpp"
using namespace std;

//Método para calcular a comissão do apartamento
double Apartamento::comissao()  {
    double c = area * valor_m2;
    return c * tx_com_apt;
}

//Imprime os dados do imóvel
void Apartamento::print() {
    cout << "[Apartamento]" << endl;
    Imovel::print ();
    cout 
      << "Area: " << area << endl 
      << "  Quartos: " << num_quarto << endl 
      << "  Banheiros: " << num_banheiro << endl 
      << "  Vagas: " << num_vaga << endl 
      << "Taxa de Comissão: " << tx_com_apt * 100 << "%" << endl	//Multiplicado por 100 para mostrar em %
      << "Valor Comissão: R$ " << fixed << setprecision (2) << valor_comissao << endl
      << "Valor de Venda: R$ " << fixed << setprecision (2) << valor_imovel << endl;

}


