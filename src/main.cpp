#include <iostream>
#include <list>
#include "aluno.hpp"
#include "professor.hpp"
#include "servidor.hpp"

using namespace std;

int main(int argc, char ** argv) {

list<Pessoa*> cadastro_de_pessoas;

for(int i=0; i < 3; i++) {
   string nome;
   long int cpf;
   cout << "Dados da Pessoa " << i+1 << ":" << endl;
   cout << "Nome: ";
   cin >>  nome;
   cout << "CPF: ";
   cin >> cpf;
   Aluno *aluno = new Aluno();
   aluno->setNome(nome);
   aluno->setCpf(cpf);
   cadastro_de_pessoas.push_back(aluno);

}

cout << "Tamanho da Lista: " << cadastro_de_pessoas.size() << endl;

for (Pessoa *p : cadastro_de_pessoas) {
   cout << "Nome: " << p->getNome() << endl;   
}

/*
   Aluno aluno_1;
   Aluno aluno_2;
   Aluno * aluno_3;
   cout << "------------" << endl;
   aluno_3 = new Aluno();
   Aluno * aluno_4 = new Aluno();

   aluno_1.setNome("João");
   aluno_1.setCpf(1234567788);

   aluno_2.setNome("Maria");
   aluno_2.setCpf(342567788);

   aluno_3->setNome("Filipe");
   aluno_3->setCpf(234243234);

   cout << "Nome do aluno: " << aluno_1.getNome() << endl;
   cout << "CPF: " << aluno_1.getCpf() << endl;
   cout << "Ira " << aluno_1.getIra() << endl;

   cout << "Nome do aluno: " << aluno_2.getNome() << endl;
   cout << "CPF: " << aluno_2.getCpf() << endl;
   cout << "Ira " << aluno_2.getIra() << endl;

   cout << "Nome do aluno: " << aluno_3->getNome() << endl;
   cout << "CPF: " << aluno_3->getCpf() << endl;
   cout << "Ira: " << aluno_3->getIra() << endl;

   delete(aluno_3);
   delete(aluno_4);
*/
   return 0;
}
