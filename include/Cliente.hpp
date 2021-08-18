#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        void print();
        
        void setNome(string n);

        void setEndereco(string end);

        void setCidade(string cid);

        void setUF(string uf);

        void setCep(string cep);
            
        void setTelefone(string tel);

    private:
        string Nome;
        string Endereco;
        string Cidade;
        string UF;
        string Cep;
        string Telefone;
};

#endif