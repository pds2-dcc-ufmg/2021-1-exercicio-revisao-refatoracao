#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:

        void print();

        string get_Nome();
        void set_Nome(string);

        string get_Endereco();
        void set_Endereco(string);

        string get_Cidade();
        void set_Cidade(string);

        string get_UF();
        void set_UF(string);

        string get_Cep();
        void set_Cep(string);

        string get_Telefone();
        void set_Telefone(string);

    private:

        string _Nome;
        string _Endereco;
        string _Cidade;
        string _UF;
        string _Cep;
        string _Telefone;
};

#endif
