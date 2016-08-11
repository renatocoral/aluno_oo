#include "aluno.hpp"

Aluno::Aluno() {
   curso = "Eng. de Software";
   ira = 0.0;
}

string Aluno::getNome() {
   return nome;
}

Aluno::setNome(string nome) {
   this->nome = nome;
}
