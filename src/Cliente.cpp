#include "Cliente.hpp"

Cliente::Cliente(const string& n, const string& e, const string& c, const string& u, const string& cep, const string& t):
nome(n), endereco(e), cidade(c), estado(e), CEP(cep), telefone(t){}
Cliente::Cliente():
nome(""), endereco(""), cidade(""), estado(""), CEP(""), telefone(""){}

string Cliente::get_nome() const{ return nome; };
string Cliente::get_endereco() const{ return endereco; };
string Cliente::get_cidade() const{ return cidade; };
string Cliente::get_estado() const{ return estado; };
string Cliente::get_CEP() const{ return CEP; };
string Cliente::get_telefone() const{ return telefone; };

void Cliente::set_nome(const string& n){ nome = n; }
void Cliente::set_endereco(const string& en){ endereco = en; };
void Cliente::set_cidade(const string& c){ cidade = c; }
void Cliente::set_estado(const string& es){ estado = es; }
void Cliente::set_CEP(const string& ce){ CEP = ce; }
void Cliente::set_telefone(const string& t){ telefone = t; }

void Cliente::print() const{

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << CEP << endl;
}

