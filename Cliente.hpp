#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        void set_nome(string _nome);
        string get_nome();

        void set_endereco(string _endereco);
        string get_endereco();

        void set_cidade(string _cidade);
        string get_cidade();

        void set_estado(string _estado);
        string get_estado();

        void set_cep(string _cep);
        string get_cep();

        void set_telefone(string _telefone);
        string get_telefone();

        void mostrar_informacoes();

    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;
};

#endif
