#include <iostream>
#include "aluno.hpp"

using namespace std;

int main(int argc, char ** argv) {

   Aluno aluno_1;
   Aluno aluno_2;

   aluno_1.setNome("João");
   aluno_1.setCpf(1234567788);

   aluno_2.setNome("Maria");
   aluno_2.setCpf(342567788);

   cout << "Nome do aluno: " << aluno_1.getNome() << endl;
   cout << "CPF: " << aluno_1.getCpf() << endl;
   cout << "Ira " << aluno_1.getIra() << endl;

   cout << "Nome do aluno: " << aluno_2.getNome() << endl;
   cout << "CPF: " << aluno_2.getCpf() << endl;
   cout << "Ira " << aluno_2.getIra() << endl;

   return 0;
}
