#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"

#include <vector>

class Historico { 
    private:
        std::vector<Casa> casas;
        std::vector<Cobertura> coberturas;
        std::vector<Apartamento> apartamentos;

    public:
        Historico();

        void nova_casa(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, Cliente _vendedor, std::string _corretor);
        void nova_cobertura(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, Cliente _vendedor, std::string _corretor);
        void novo_apartamento(double _area, double _valor_m2, int _num_quartos, int _num_banheiros, int _num_vagas, Cliente _vendedor, std::string _corretor);

        double somar_valores_casa();
        double somar_valores_cobertura();
        double somar_valores_apartamento();

        double somar_comissoes_casa();
        double somar_comissoes_cobertura();
        double somar_comissoes_apartamento();

        int num_casas();
        int num_coberturas();
        int num_apartamentos();

        // getters
        std::vector<Casa> get_casas();
        std::vector<Cobertura> get_coberturas();
        std::vector<Apartamento> get_apartamentos();
};