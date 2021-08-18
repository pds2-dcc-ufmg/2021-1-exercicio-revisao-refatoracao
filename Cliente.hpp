#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
 
using namespace std;
 
class Cliente {
//Cada cliente possui: Nome, endereco, Cidade, UF, cep, telefone
    public:
        void setNome(string _nome){
            nome = _nome;
        }
        void setEndereco(string _endereco){
            endereco = _endereco;
        }
        void setCidade(string _cidade){
            cidade = _cidade;
        }
        void setUF(string _UF){
            UF = _UF;
        }
        void setCep(string _cep){
            cep = _cep;
        }
        void setTelefone(string _telefone){
            telefone = _telefone;
        }
        void print();
    private:
        string nome;
        string endereco;
        string cidade;
        string UF;
        string cep;
        string telefone;
};

#endif