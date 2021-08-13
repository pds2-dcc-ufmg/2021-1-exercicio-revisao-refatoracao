#include "Apartamento.hpp"

Apartamento::Apartamento(Cliente &vendedor , string corretor , DadosComodos comodos , DadosValorArea dadosValorArea)
:Imovel(vendedor , corretor , "Apartamento" , comodos , dadosValorArea){};