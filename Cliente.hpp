#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        void setNOME(string referencia){
            this->NOME = referencia;
        }
        void setendereco(string referencia){
            this->endereco = referencia;
        }
        void setCIDADE(string referencia){
            this->CIDADE = referencia;
        }
        void setUF(string referencia){
            this->UF = referencia;
        }
        void setcep(string referencia){
            this->cep = referencia;
        }
        void settelefone(string referencia){
            this->telefone = referencia;
        }

        string getNOME(){
            return this->NOME;
        }
        string getendereco(){
            return this->endereco;
        }
        string getCIDADE(){
            return this->CIDADE;
        }
        string getUF(){
            return this->UF;
        }
        string getcep(){
            return this->cep;
        }
        string gettelefone(){
            return this->telefone;
        }

        void print(){
            std::cout << "  Nome: " << this->NOME << endl
		 << "  Telefone: " << this->telefone << endl
		 << "  Endereço: " << this->endereco << endl
		 << "  Cidade: " << this->CIDADE << endl
		 << "  Estado: " << this->UF << endl
		 << "  CEP: " << this->cep << endl;
        }
        
    private:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;
};

#endif