#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string nome;
        string endereco;
        string cidade;
        string UF;
        string cep;
        string telefone;
    public:
        Cliente();
        void setName(string _nome);
        // essa função seta todos os paremtros relacionados a localidade do cliente
        void setEndereco(string _endereco, string _cidade, string _estado, string _cep);
        void setTelefone(string numero);

        // essa função retorna todos os parametros relacionados a localidade do cliente
        // ela retorna um parametro por vez e ele varia de acordo com seu argumento
        // e: retorna o endereço
        // c: retorna a cidade
        // u: retorna o estado
        // p: retorna o cep
        string getEndereco(char v);
        string getNome();
        string getTelefone();
        void   print();
};

#endif