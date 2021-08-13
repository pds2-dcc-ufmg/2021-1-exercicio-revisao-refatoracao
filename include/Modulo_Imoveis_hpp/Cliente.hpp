#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
using namespace std;

namespace Imoveis {
    
    class Cliente {
        private:
            string nome;
            string endereco;
            string cidade;
            string uf;
            string cep;
            string telefone;

        public:
            Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep, string _telefone);

            string get_nome();

            string get_endereco();
            
            string get_cidade();
            
            string get_uf();
            
            string get_cep();
            
            string get_telefone();
            
            void print();
    };

}
#endif