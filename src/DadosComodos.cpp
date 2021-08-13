#include "DadosComodos.hpp"

DadosComodos::DadosComodos(int quartos , int banheiros , int vagas):_quartos(quartos) , _banheiros(banheiros) , _vagas(vagas){};

int DadosComodos::get_quartos(){return _quartos;};

int DadosComodos::get_banheiros(){return _banheiros;};

int DadosComodos::get_vagas(){return _vagas;};