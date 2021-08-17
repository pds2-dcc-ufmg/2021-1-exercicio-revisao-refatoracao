#include "Cliente.hpp"

void Cliente::print_cliente(){
	std::cout << "  Nome: " << get_nome() << endl
		 << "  Telefone: " << get_telefone() << endl
		 << "  Endereço: " << get_endereco() << endl
		 << "  Cidade: " << get_cidade() << endl
		 << "  Estado: " << get_uf() << endl
		 << "  CEP: " << get_cep() << endl;
}

string Cliente::get_nome() {
	return nome;
}
string Cliente::get_endereco() {
	return endereco;
}
string Cliente::get_cidade() {
	return cidade;
}
string Cliente::get_uf() {
	return uf;
}
string Cliente::get_cep() {
	return cep;
}
string Cliente::get_telefone() {
	return telefone;
}

void Cliente::set_nome(string n) {
	nome = n;
}
void Cliente::set_endereco(string e) {
	endereco = e;
}
void Cliente::set_cidade(string c) {
	cidade = c;
}
void Cliente::set_uf(string u) {
	uf = u;
}
void Cliente::set_cep(string z) {
	cep = z;
}
void Cliente::set_telefone(string t) {
	telefone = t;
}