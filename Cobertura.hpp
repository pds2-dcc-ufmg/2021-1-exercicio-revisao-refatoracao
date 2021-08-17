#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#include "CountingFeatures.hpp"

class Cobertura : public Imovel {
  public:
    Cobertura(std::string corretor, double area, int quartos, int banheiros,
              int vagas, double valor_por_m2, Cliente vendedor)
            : Imovel(corretor, area, quartos, banheiros, vagas, valor_por_m2,
                     vendedor, 0.10, label), Contador(*this) {}

    static unsigned get_contador_de_instancias() {
        return CountingFeatures<Cobertura>::get_contador_de_instancias();
    }

    static double get_valor_total() {
        return CountingFeatures<Cobertura>::get_valor_total();
    }

    static double get_comissao_total() {
        return CountingFeatures<Cobertura>::get_comissao_total();
    }

    inline static const std::string label = "Cobertura";

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
    CountingFeatures<Cobertura> Contador;
};

#endif
