#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>

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
   setNome(string nome);
   int getMatricula();
   int getCpf();
   setCpf(int cpf);
   float getIra();

   calculaIra();
};

#endif
