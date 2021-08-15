#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

namespace cliente { 
    class Cliente {
        private:
            string _nome;
            string _endereco;
            string _cidade;
            string _uf;
            string _cep;
            string _telefone;

        public:
            Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);

            Cliente();
            
            string nome();

            string endereco();
            
            string cidade();
            
            string uf();
            
            string cep();
            
            string telefone();
            
            string& print();
    };
}
#endif