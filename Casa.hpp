#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

        Casa(double _area,  int _numeroQuartos, int _numeroBanheiros, int _vagasGaragem, double _valorM2, Cliente _vendedor, string _corretor): area(_area), numeroQuartos(_numeroQuartos), numeroBanheiros(_numeroBanheiros), vagasGaragem(_vagasGaragem), valorM2(_valorM2), vendedor(_vendedor), corretor(_corretor) {}

        double getValor() {

            return area * valorM2;
        }

        double getComissao() {

            return getValor() * taxaComissao;
        }

        void print() {

            std::cout << "[Casa]" << endl;
            Imovel::print();
            std::cout << "Area: " << area << endl
                    << "  Quartos: " << numeroQuartos << endl
                    << "  Banheiros: " << numeroBanheiros << endl
                    << "  Vagas: " << vagasGaragem << endl
                    << "Taxa de Comissão: " << taxaComissao<< endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << getComissao()<< endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;

        }
    private:
        double taxaComissao = 0.06;
        double area;
        int numeroQuartos;
        int numeroBanheiros;
        int vagasGaragem;
        double valorM2;
        Cliente vendedor;
        string corretor;

};

#endif
