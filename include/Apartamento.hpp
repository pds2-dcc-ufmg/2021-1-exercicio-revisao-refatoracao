#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/*
 *  Mudanças neste segmento:
 *      ---> Todos os métodos que antes pertenciam à classe Apartamento foram generalizados , pertencendo agora
 *           à classe DadosValorArea (métodos valor() e comissao()) e Imovel (método print() ==> agora infoImovel())
 *      ---> A decisão de manter as subclasses de Imovel é questionável , mas minha aproximação foi a de mantê-los , pois
 *           assim podemos ter uma melhor diferenciação dos Imoveis ao observar os seus tipos , sem precisar realizar a chamada
 *           do método getTipo(). Também temos o fator de que certas partes do código têm uma implementação simplificada
 *           no caso destas classes existirem (contagem dos Imoveis de cada tipo/armazenamento dos imoveis em vetores
 *           de acordo com seus tipos ==> main.cpp)    
 */
class Apartamento : public Imovel {
    public:
        Apartamento(Cliente &vendedor , string corretor , DadosComodos comodos , DadosValorArea dadosValorArea);
};

#endif