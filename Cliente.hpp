#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
    
    string nome;
    string endereco;
    string cidade;
    string estado;
    string cep;
    string telefone;
    
    public:
        Cliente(){}
        Cliente(string nome, string endereco, string cidade, string estado, string cep, string telefone);
        ~Cliente(){};

        void setNome(string nome) { 
            this->nome = nome; 
        }

		void setEndereco(string endereco) { 
            this->endereco = endereco; 
        }

		void setCidade(string cidade){ 
            this->cidade = cidade; 
        }

		void setEstado(string estado) { 
            this->estado = estado; 
        }

		void setCep(string cep)	{ 
            this->cep = cep; 
        }

        void setTelefone(string telefone)	{ 
            this->telefone = telefone; 
        }

		string getNome() { 
            return this->nome; 
        }

		string getEndereco(){ 
            return this->endereco; 
        }

		string getCidade() { 
            return this->cidade; 
        }

		string getEstado() { 
            return this->estado; 
        }

		string getCep() { 
            return this->cep; 
        }		

        void print();
};

#endif