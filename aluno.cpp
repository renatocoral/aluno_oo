#include "aluno.hpp"

Aluno::Aluno() {
   nome = "";
   matricula = 0;
   cpf = 0;
   curso = "Eng. de Software";
   ira = 5.0;
}

string Aluno::getNome() {
   return nome;
}

void Aluno::setNome(string nome) {
   this->nome = nome;
}

int Aluno::getMatricula() {
   return matricula;
}

int Aluno::getCpf() {
   return cpf;
}

void Aluno::setCpf(int cpf) {
   this->cpf = cpf;
}

float Aluno::getIra() {
   return ira;
}

void Aluno::calculaIra();

