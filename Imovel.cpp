#include "Imovel.hpp"

//Construtores

Apartamento::Apartamento(string nome, double ADI, double VMQ, int Q, int B, int V, Cliente cl)
{
    corretor = nome;
    vendedor = cl;
    AreaDoImovel = ADI;
    ValorMetroQuadrado = VMQ;
    ValorDeVenda = this->valor() + this->comissao();
    ValorComissao = this->comissao();
    Quartos = Q;
    Banheiros = B;
    Vagas = V;
}

Casa::Casa(string nome, double ADI, double VMQ, int Q, int B, int V, Cliente cl)
{
    corretor = nome;
    vendedor = cl;
    AreaDoImovel = ADI;
    ValorMetroQuadrado = VMQ;
    ValorDeVenda = this->valor() + this->comissao();
    ValorComissao = this->comissao();
    Quartos = Q;
    Banheiros = B;
    Vagas = V;
}

Cobertura::Cobertura(string nome, double ADI, double VMQ, int Q, int B, int V, Cliente cl)
{
    corretor = nome;
    vendedor = cl;
    AreaDoImovel = ADI;
    ValorMetroQuadrado = VMQ;
    ValorDeVenda = this->valor() + this->comissao();
    ValorComissao = this->comissao();
    Quartos = Q;
    Banheiros = B;
    Vagas = V;
}

// Funções do imovel
void Imovel::print()
{
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}

double Imovel::valor()
{
    double v = AreaDoImovel * ValorMetroQuadrado;
    return v;
}

// Funções de Get
double Imovel::getAreaDoImovel()
{
    return AreaDoImovel;
}

double Imovel::getValorMetroQuadrado()
{
    return ValorMetroQuadrado;
}

double Imovel::getValorDeVenda()
{
    return ValorDeVenda;
}

double Imovel::getValorComissao()
{
    return ValorComissao;
}

int Imovel::getQuartos()
{
    return Quartos;
}

int Imovel::getBanheiros()
{
    return Banheiros;
}

int Imovel::getVagas()
{
    return Vagas;
}

// Funções de Set
void Imovel::setAreaDoImovel(double setA)
{
    this->AreaDoImovel = setA;
}

void Imovel::setValorMetroQuadrado(double setVm2)
{
    this->ValorMetroQuadrado = setVm2;
}

void Imovel::setValorDeVenda(double setVDV)
{
    this->ValorDeVenda = setVDV;
}

void Imovel::setValorComissao(double setVC)
{
    this->ValorComissao = setVC;
}

void Imovel::setQuartos(double setQ)
{
    this->Quartos = setQ;
}

void Imovel::setBanheiros(double setB)
{
    this->Banheiros = setB;
}

void Imovel::setVagas(double setV)
{
    this->Vagas = setV;
}

//Funcões do apartamento

double Apartamento::comissao()
{
    double c = AreaDoImovel * ValorMetroQuadrado * apartamento_taxa;
    return c;
}

void Apartamento::print()
{
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << AreaDoImovel << endl
              << "  Quartos: " << Quartos << endl
              << "  Banheiros: " << Banheiros << endl
              << "  Vagas: " << Vagas << endl
              << "Taxa de Comissão: " << 4 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << ValorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorDeVenda << endl;
}

//Funções da casa

double Casa::comissao()
{
    double c = AreaDoImovel * ValorMetroQuadrado * casa_taxa;
    return c;
}

void Casa::print()
{
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << AreaDoImovel << endl
              << "  Quartos: " << Quartos << endl
              << "  Banheiros: " << Banheiros << endl
              << "  Vagas: " << Vagas << endl
              << "Taxa de Comissão: " << 6 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << ValorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorDeVenda << endl;
}

//Funções da cobertura

double Cobertura::comissao()
{
    double c = AreaDoImovel * ValorMetroQuadrado * cobertura_taxa;
    return c;
}

void Cobertura::print()
{
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << AreaDoImovel << endl
              << "  Quartos: " << Quartos << endl
              << "  Banheiros: " << Banheiros << endl
              << "  Vagas: " << Vagas << endl
              << "Taxa de Comissão: " << 10 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << ValorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorDeVenda << endl;
}
