#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string nome; 
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
		
	public:
        void print(); 

		//seta as variáveis de Cliente
		void setNome(string _nome); 
		void setEndereco(string _endereco);
		void setCidade(string _cidade);
		void setUF(string _UF);
		void setCEP(string _CEP);
		void setTelefone(string _telefone);
};

#endif