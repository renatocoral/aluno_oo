#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>

using namespace std;

class Aluno {
private:
   // Atributos
   string nome;
   int matricula;
   string curso;
   int cpf;
   float ira;
public:
   // Métodos
   Aluno(); // Método Construtor
   string getNome(); // Método Assessor
   void setNome(string nome);
   int getMatricula();
   int getCpf();
   void setCpf(int cpf);
   float getIra();

   void calculaIra();
};

#endif
