#include <iostream>
#include <string>
#include "Imovel.hpp"

double Imovel::get_AREA() {
    return this->AREA;
}

void Imovel::set_AREA(double object) {
  this->AREA = object;
}

int Imovel::get_Quartos() {
    return this->Quartos;
}

void Imovel::set_Quartos(int object) {
  this->Quartos = object;
}

int Imovel::get_banheiros() {
    return this->banheiros;
}

void Imovel::set_banheiros(int object) {
  this->banheiros = object;
}

int Imovel::get_Vagas() {
    return this->Vagas;
}

void Imovel::set_Vagas(int object) {
  this->Vagas = object;
}

double Imovel::get_VALORm2() {
    return this->VALORm2;
}

void Imovel::set_VALORm2(double object) {
  this->VALORm2 = object;
}

double Imovel::get_immobileValue() {
    return this->immobileValue;
}

void Imovel::set_immobileValue(double object) {
  this->immobileValue = object;
}

double Imovel::get_comission() {
    return this->comission;
}

void Imovel::set_comission(double object) {
  this->comission = object;
}