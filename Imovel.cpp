#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

Imovel::Imovel(){
    double area = 0;
    int quantidadeQuartos = 0;
    int quantidadeBanheiros = 0;
    int quantidadeVagas = 0;
    double valorM2 = 0;
    double ValorImovel = area * valorM2; 
    double comissao = area * valorM2 * TAXA;
    Cliente vendedor;
    string corretor ="";
}

    double Imovel::getArea()                {return this->area;}
    int Imovel::getQuantidadeQuartos()      {return this->quantidadeQuartos;}
    int Imovel::getQuantidadeBanheiros()    {return this->quantidadeBanheiros;}
    int Imovel::getQuantidadeVagas()        {return this-> quantidadeVagas;}
    double Imovel::getValorM2()             {return this->valorM2;}
    double Imovel::getValorImovel()         {return this->valorImovel}
    double Imovel::getComissao()            {return this->comissao}
    double Imovel::getCorretor()            {return this->corretor }

    void Imovel::setArea(novaArea)                          {this->area = novaArea;}
    void Imovel::setQuantidadeQuartos(novaQauantidade)      {this->quantidadeQuartos = novaQauantidade;}
    void Imovel::setQuantidadeBanheiros(novaQauantidade)    {this->quantidadeBanheiros = novaQauantidade;}
    void Imovel::setQuantidadeVagas(novaQauantidade)        {this->quantidadeVagas = novaQauantidade;}
    void Imovel::setQalorM2(novoValor)                      {this-> valorM2 = novoValor}
    void Imovel::setValorImovel()                           {this->valorImovel = area * valorM2}
    void Imovel::setComissao()                              {this->comissao = area * valorM2 * TAXA}
    Cliente Imovel::setVendedor(novoVendedor)               {this->vendedor = novoVendedor }
    string Imovel::setCorretor(novoCorretor)                {this->corretor = novoCorretor}


void Imovel::printDadosImovel() {
    cout << "[Vendedor]" << endl;
    vendedor.printDadosCliente();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}





