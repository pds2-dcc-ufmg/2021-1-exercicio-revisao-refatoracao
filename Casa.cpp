#include "Casa.hpp"

using namespace std;

class Casa : public Imovel
{

public:
    //Retorna valor da casa
    double valor() override
    {
        double v = AREA * VALORm2;
        return v;
    }

    //Retorna comissão de venda
    double comissao() override
    {
        double c = AREA * VALORm2;
        return c * 0.06;
    }

    void print() override
    {
        std::cout << "[Casa]" << std::endl;
        Imovel::print();
        std::cout << "Area: " << AREA << std::endl
                  << "  Quartos: " << Q << std::endl
                  << "  Banheiros: " << B << std::endl
                  << "  Vagas: " << V << std::endl
                  << "Taxa de Comissão: " << 6 << "%" << std::endl
                  << "Valor Comissão: R$ " << fixed << setprecision(2) << C << std::endl
                  << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << std::endl;
    }
};