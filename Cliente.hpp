#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    
    public:
        
        Cliente();
        Cliente(string _Nome, string _Endereco, string _Cidade, string _UF, string _Cep, string _Telefone);

        void set_Nome(string _Nome);
        void set_Endereco(string _Endereco);
        void set_Cidade(string _Cidade);
        void set_UF(string _UF);
        void set_Cep(string _Cep);
        void set_Telefone(string _Telefone);
        
        string get_Nome();
        string get_Endereco();
        string get_Cidade();
        string get_UF();
        string get_Cep();
        string get_Telefone();
    
        
        void print();
    
    private:
    
        string Nome;
        string Endereco;
        string Cidade;
        string UF;
        string Cep;
        string Telefone;

    
};

#endif
