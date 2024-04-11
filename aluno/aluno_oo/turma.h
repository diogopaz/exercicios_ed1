#include <stdlib.h>
#include <iostream>
#include <string>
#include "aluno.h"

using namespace std;

class Turma {
    private:
        string cod_disciplina;
        string cod_turma;
        string semestre;

        Aluno** alunos;
        int tam_vetor;
        int qtde;
    
    public:
        Turma(string semestre, int tam_vetor) {
            this->semestre = semestre;
            this->alunos = new Aluno*[tam_vetor];

            this->tam_vetor = tam_vetor;
            this->qtde = 0;
        }

        ~Turma() {
            for(int i = 0; i < qtde; i++) {
                this->alunos[i]->~Aluno();
            }
            cout << "Turma destruída"<< endl;
        }

        string getCod_disciplina() {
            return this->cod_disciplina;
        }
        void setCod_disciplina(string cod_disciplina) {
            this->cod_disciplina = cod_disciplina;
        }

        string getCod_turma() {
            return this->cod_turma;
        }
        void setCod_turma(string cod_turma) {
            this->cod_turma = cod_turma;
        }

        bool matricula(Aluno* a) {
            if(qtde >= tam_vetor) {
                cout << "Erro" << endl;
            };
            this->alunos[qtde] = a;
            qtde++;
            cout << "Sucesso, aluno " << a->getNome() << " matriculado" << endl;
            return 1;
        }

        int cancela_matricula(string ra) {
            for(int i = 0; i < this->qtde; i++) {
                if(this->alunos[i]->getRa() == ra) {
                    cout << "Matricula do aluno " << this->alunos[i]->getNome() << " cancelada"<< endl;
                    for(int j = i; j < this->tam_vetor-1; j++) {
                        this->alunos[j] = this->alunos[j+1];
                    }
                    qtde--;
                }
            }
        }

        void imprimir_alunos() {
            for(int i = 0; i < qtde; i++) {
                this->alunos[i]->imprimir();
            }
        }
};