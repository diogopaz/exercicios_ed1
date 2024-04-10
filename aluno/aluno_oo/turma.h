#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Aluno {
    private:
        string ra;
        string nome;

    public:
        Aluno(string ra, string nome) {
            this->ra = ra;
            this->nome = nome;
        }

        ~Aluno() {
            cout << "Destruindo Aluno " << this->nome << endl;
        }

        string getRa() {
            return this->ra;
        }
        void setRa(string ra) {
            this->ra = ra;
        }

        string getNome() {
            return this->nome;
        }
        void setNome(string nome) {
            this->nome = nome;
        }

        void imprimir() {
            cout << "(" << this->ra << ", " << this->nome << ")" << endl;
        }
};

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
            cout << "Destruindo Turma " << this->semestre << endl;
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
            for(int i = 0; i < this->tam_vetor; i++) {
                if(this->alunos[i]->getRa() == ra) {
                    cout << "Matricula do aluno " << this->alunos[i]->getNome() << " cancelada"<< endl;
                    this->alunos[i] = 0;
                }
            }
        }

        void imprimir_alunos() {
            for(int i = 0; i < tam_vetor; i++) {
                if (this->alunos[i] != nullptr) {
                    this->alunos[i]->imprimir();
                }
            }
        }
};