#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#include "CountingFeatures.hpp"

class Casa : public Imovel {
  public:
    Casa(std::string corretor, double area, int quartos, int banheiros,
         int vagas, double valor_por_m2, Cliente vendedor)
            : Imovel(corretor, area, quartos, banheiros, vagas, valor_por_m2,
                     vendedor, 0.06, label), Contador(*this) {}

    static unsigned get_contador_de_instancias() {
        return CountingFeatures<Casa>::get_contador_de_instancias();
    }

    static double get_valor_total() {
        return CountingFeatures<Casa>::get_valor_total();
    }

    static double get_comissao_total() {
        return CountingFeatures<Casa>::get_comissao_total();
    }

    inline static const std::string label = "Casa";

    void subtract_from_valor_total() override {
        Contador.subtract_from_valor_total();
    }

    void subtract_from_comissao_total() override {
        Contador.subtract_from_comissao_total();
    }

    void add_to_valor_total() override {
        Contador.add_to_valor_total();
    }

    void add_to_comissao_total() override {
        Contador.add_to_comissao_total();
    }

  private:
    CountingFeatures<Casa> Contador;
};

#endif
