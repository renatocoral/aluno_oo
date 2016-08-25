#include "professor.hpp"
#include <iostream>

using namespace std;

Professor::Professor() {
   cout << "Construtor padrão da classe Professor" << endl;
   setNome("");
   setMatricula(0);
   setCpf(0);
   formacao = "";
   indice_de_aprovacao = 100;
   departamento = "";

}

Professor::~Professor(){ 
   cout << "Destrutor da Classe Professor" << endl;
}

string Professor::getFormacao() {
	return formacao;
}
void Professor::setFormacao(string formacao) {
	this->formacao = formacao;
}
string Professor::getDepartamento(){
	return departamento;
}
void Professor::setDepartamento(string departamento){
	this->departamento = departamento;
}
void Professor::setIndiceDeAprovacao(float indice){
	indice_de_aprovacao = indice;
}
float Professor::getIndiceDeAprovacao(){
	return indice_de_aprovacao;
}
