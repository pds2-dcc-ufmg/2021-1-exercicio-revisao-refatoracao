#include <iostream>
#include <iomanip>
#include <vector>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

template<class T>
inline void print_estatisticas() {
    std::cout << fixed << setprecision(2);

    std::cout << "\n>>" << T::label << "s" << "<<\n";
    std::cout << "\n Quantidade: " << T::get_contador_de_instancias();
    std::cout << "\n Valor Total: R$ " << T::get_valor_total();
    std::cout << "\n Comissao Total: R$" << T::get_comissao_total();
    std::cout << std::endl;
}

int main() {
    std::vector<Cliente> clientes = {
            Cliente("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas",
                    "Belo Horizonte", "MG", "31365-570", "3196007958"),
            Cliente("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas",
                    "Belo Horizonte", "MG", "31870-290", "3197627067"),
            Cliente("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B",
                    "Belo Horizonte", "MG", "31842-630", "3195949327"),
            Cliente("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga",
                    "Belo Horizonte", "MG", "30285-422", "3198596327"),
            Cliente("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano",
                    "Belo Horizonte", "MG", "30882-747", "3196274465"),
            Cliente("Esxo Cilal Zyais",
                    "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                    "Belo Horizonte", "MG", "31650-560", "3195004414"),
            Cliente("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova",
                    "Belo Horizonte", "MG", "31170-240", "3198461192"),
            Cliente("Teas Heimeu Pipe",
                    "Rua Maria Pereira Damasceno - Ernesto do Nascimento (Barreiro)",
                    "Belo Horizonte", "MG", "30668-430", "3197317802")
    };

    std::vector<Imovel*> imoveis = {
            new Apartamento("Tuoruars", 55.4, 2, 1, 0, 987.0, clientes[0]),
            new Apartamento("Fyubyeis", 74.5, 2, 1, 2, 1540.0, clientes[1]),
            new Apartamento("Kelia", 87.2, 3, 2, 2, 2354.0, clientes[2]),
            new Cobertura("Koci", 120.1, 3, 3, 2, 3123.5, clientes[3]),
            new Cobertura("Wail", 134.8, 4, 3, 3, 3578.2, clientes[4]),
            new Cobertura("Fival", 180.0, 4, 4, 4, 4165.7, clientes[5]),
            new Casa("Beydo", 145.6, 3, 3, 2, 4023.6, clientes[6]),
            new Casa("Riuzi", 245.0, 5, 4, 4, 4856.2, clientes[7])
    };

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    for (Imovel* imovel : imoveis) {
        imovel->print();
        std::cout << std::endl;
    }

    std::cout << "\n>> Resumo Geral <<" << endl;

    print_estatisticas<Apartamento>();
    print_estatisticas<Cobertura>();
    print_estatisticas<Casa>();
   
    for (Imovel* imovel : imoveis) {
        delete imovel;
    }
}
