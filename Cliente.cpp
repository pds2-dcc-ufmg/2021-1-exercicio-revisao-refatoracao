#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << _Nome << endl
		 << "  Telefone: " << _Telefone << endl
		 << "  Endereço: " << _Endereco << endl
		 << "  Cidade: " << _Cidade << endl
		 << "  Estado: " << _UF << endl
		 << "  CEP: " << _Cep << endl;

}

        string Cliente::get_Nome(){
            return _Nome;
        }
        void Cliente::set_Nome(string Nome){
            _Nome = Nome;
        }

        string Cliente::get_Endereco(){
            return _Endereco;
        }
        void Cliente::set_Endereco(string Endereco){
            _Endereco = Endereco;
        }

        string Cliente::get_Cidade(){
           return _Cidade;
        }
        void Cliente::set_Cidade(string Cidade){
            _Cidade = Cidade;
        }

        string Cliente::get_UF(){
           return _UF;
        }
        void Cliente::set_UF(string UF){
            _UF = UF;
        }

        string Cliente::get_Cep(){
           return _Cep;
        }
        void Cliente::set_Cep(string Cep){
            _Cep = Cep;
        }

        string Cliente::get_Telefone(){
            return _Telefone;
        }
        void Cliente::set_Telefone(string Telefone){
            _Telefone = Telefone;
        }
