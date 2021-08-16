#ifndef CLIENTE_HPP
#define CLIENTE_HPP
//Incluindo bibliotecas
#include <string>

//Namespace
using namespace std;

//Contrato .hpp
class Cliente {
    public:
        //Atributos do Cliente
        string _nome;
        string _endereco;
        string _cidade;
        string _UF;
        string _CEP;
        string _telefone;

        //Construtor de um Cliente
        Cliente(string nome, string endereco, string cidade, 
        string UF, string CEP, string telefone);
        
        //Construtor padrão de um Cliente
        Cliente() = default;

        //Imprime os dados do Cliente
        void print();
};

#endif