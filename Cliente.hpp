#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;
 
class Cliente {
    public:
        Cliente ();
        void printDadosCliente();

        string getNome();
        string getTelefone();
        string getEndereco();
        string getCidade();
        string getEstado();
        string getCep();
        string getUf();
        
        void setNome(string novoNome);
        void setTelefone(string novoTelefone);
        void setEndereco(string novoEndereco);
        void setCidade(string novaCidade);
        void setEstado(string novoEstado);
        void setCep(string novoCep);
        void setUf(string novaUf);
        
    private:
        string nome, telefone, endereco, cidade, estado, cep, uf;     
};

#endif